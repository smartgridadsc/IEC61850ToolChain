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

#define CSVFILENAME "value.csv"
/* import IEC 61850 device model created from SCL-File */
extern IedModel iedModel;
static IedServer iedServer = NULL;

bool enableInsertAttack=true;
bool enableModifyAttack=false;
int executedInsertAttackCount=0;
int executedModifyAttackCount=0;
struct AttackList attackList;
clock_t beginTime;

// has to be executed as root!
int main(int argc, char **argv) {
	char *interface;
	//double nextUpdatePayloadTime=getTime()+1;
	double nextUpdatePayloadTime;
	int port;
	char *folder;


	//parameters for insert attack

	int insertAttack_stnum = 5;
	int insertAttack_sqnum = 0;
	char *insertAttack_name = "Alarm";

	//parameters for suppress attack
	int modifyAttack_stnum=5;
	int modifyAttack_sqnum=0;
	int modifyAttack_arrayIndex=0;
	char* modifyAttack_modifiedValue="1000";



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
	beginTime= clock();
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
	if (stream == NULL) {
		char cwd[100];
		if (getcwd(cwd, sizeof(cwd)) != NULL) {
			printf("Current working dir: %s\n", cwd);
		}
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
	while (running) {
		lineSize = getline(&buffer, &bufsize, stream);
		if (lineSize != -1) { //read a new line from csv
			char *tmp = strdup(buffer);
			char **results = getfield(tmp);
			while (1) {
				if (getTime() > nextUpdatePayloadTime) {
					nextUpdatePayloadTime = nextUpdatePayloadTime + 1;
					break;
				}
			}
			//manually update: stnum++, sqnum=0
			updateStNum(iedServer);

			// launch insert attack
			if (enableInsertAttack) {
				launchInsertAttack(iedServer);
			}

			//launch modify attack
			if(enableModifyAttack){
				launchModifyAttack(iedServer,results);
			}

			//Mano: 1.check dos condition.2 create a new thread to send dos.

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

			free(tmp);
			free(results);
		}

	}

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
	char **results;
	results = (char**) malloc(sizeof(char*) * 4);
	int i = 0;
	while (ptr != NULL) {
		results[i] = malloc(sizeof(char) * 4);
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
	//printf("start.tv_usec is %.3f\n", secs);
}

void updateStNum(IedServer iedserver) {
	LinkedList element = iedserver->mmsMapping->gseControls;
	while ((element = LinkedList_getNext(element)) != NULL) {
		MmsGooseControlBlock gcb = (MmsGooseControlBlock) element->data;
		GoosePublisher publisher = gcb->publisher;
		GoosePublisher_increaseStNum(publisher);
	}
}
void launchInsertAttack(IedServer iedserver) {
	LinkedList element = iedserver->mmsMapping->gseControls;
	while ((element = LinkedList_getNext(element)) != NULL) {
		MmsGooseControlBlock gcb = (MmsGooseControlBlock) element->data;
		GoosePublisher publisher = gcb->publisher;
		int index = 0;
		struct InsertAttack currentAttack;
		while (attackList.insertAttackList[index].valid) {
			currentAttack = attackList.insertAttackList[index];
			if (!currentAttack.executed) {
				if (currentAttack.condition_type == CONDITION_ST_SQ_GCB) {
					if (GoosePublisher_getStNum(publisher)== currentAttack.condition_st
							&& GoosePublisher_getSqNum(publisher)== currentAttack.condition_sq
							&& !strcmp(gcb->name, currentAttack.condition_gcb)) {
						insertPacket(currentAttack);
						currentAttack.executed = true;
						executedInsertAttackCount++;
						//break;
					}
				} else if (currentAttack.condition_type == CONDITION_TIME) {
					if (getRuningTime() > currentAttack.condition_time) {
						insertPacket(currentAttack);
						currentAttack.executed = true;
						executedInsertAttackCount++;
						//break;
					}
				}
			}
			if(attackList.insertAttackNum==executedInsertAttackCount){
				enableInsertAttack=false;
			}

			index++;

		}

		//GoosePublisher_increaseStNum(publisher);
	}
}
void insertPacket(struct InsertAttack iAttack) {

	printf("insert a packet\n");
	char *interface = "lo";

	LinkedList dataSetValues = LinkedList_create();
	int valueIndex=0;
	while(strlen(iAttack.values[valueIndex].value)!=0){
		struct InsertAttackValue currentValue=iAttack.values[valueIndex++];
		if(!strcmp(currentValue.type,"integer")){
			LinkedList_add(dataSetValues, MmsValue_newIntegerFromInt32(atoi(currentValue.value)));
		}else if(!strcmp(currentValue.type,"string")){
			LinkedList_add(dataSetValues, MmsValue_newVisibleString(currentValue.value));
		}else if(!strcmp(currentValue.type,"boolean")){
			bool binValue=false;
			if(!strcmp(currentValue.value,"true")){
				binValue=true;
			}
			LinkedList_add(dataSetValues, MmsValue_newBoolean(binValue));//todo double check why use binary time???

		}else if(!strcmp(currentValue.type,"float")){
			LinkedList_add(dataSetValues,MmsValue_newFloat(atof(currentValue.value)));
		}
	}

	//LinkedList_add(dataSetValues, MmsValue_newIntegerFromInt32(1234));
	//LinkedList_add(dataSetValues, MmsValue_newBinaryTime(false));
	//LinkedList_add(dataSetValues, MmsValue_newIntegerFromInt32(5678));

	CommParameters gooseCommParameters;

	gooseCommParameters.appId = iAttack.appId;
	gooseCommParameters.dstAddress[0] = getHexFromString(0,iAttack.dstAddress);
	gooseCommParameters.dstAddress[1] = getHexFromString(2,iAttack.dstAddress);
	gooseCommParameters.dstAddress[2] = getHexFromString(4,iAttack.dstAddress);
	gooseCommParameters.dstAddress[3] = getHexFromString(6,iAttack.dstAddress);
	gooseCommParameters.dstAddress[4] = getHexFromString(8,iAttack.dstAddress);
	gooseCommParameters.dstAddress[5] = getHexFromString(10,iAttack.dstAddress);
	gooseCommParameters.vlanId = iAttack.vlanId;
	gooseCommParameters.vlanPriority = iAttack.vlanPriority;;

	/*
	 * Create a new GOOSE publisher instance. As the second parameter the interface
	 * name can be provided (e.g. "eth0" on a Linux system). If the second parameter
	 * is NULL the interface name as defined with CONFIG_ETHERNET_INTERFACE_ID in
	 * stack_config.h is used.
	 */
	GoosePublisher publisher = GoosePublisher_create(&gooseCommParameters,
			interface);
	//set st & sq number.
	//publisher->stNum=iAttack.stNum;
	//publisher->sqNum=iAttack.sqNum;
	GoosePublisher_setStNum(publisher,iAttack.stNum);
	GoosePublisher_setSqNum(publisher,iAttack.sqNum);

	GoosePublisher_setGoCbRef(publisher,iAttack.gocbRef );//"liyuanTest/LLN0$GO$gcbAnalogValues"
	GoosePublisher_setConfRev(publisher, 1);
	GoosePublisher_setDataSetRef(publisher, iAttack.dataSet);//"liyuanTest/LLN0$AnalogValues"

	if (GoosePublisher_publish(publisher, dataSetValues) == -1) {
		printf("Error sending message!\n");
	}
	GoosePublisher_destroy(publisher);

	LinkedList_destroyDeep(dataSetValues,(LinkedListValueDeleteFunction) MmsValue_delete);

}

void launchModifyAttack(IedServer iedserver,char** array){
	LinkedList element = iedserver->mmsMapping->gseControls;
	while ((element = LinkedList_getNext(element)) != NULL) {

		MmsGooseControlBlock gcb = (MmsGooseControlBlock) element->data;
		GoosePublisher publisher = gcb->publisher;
		int index = 0;
		struct ModifyAttack currentAttack;
		while (attackList.modifyAttackList[index].valid) {
			currentAttack = attackList.modifyAttackList[index];
			if (!currentAttack.executed) {
				if (currentAttack.condition_type == CONDITION_ST_SQ_GCB) {
					//printf("%d:%d\n",GoosePublisher_getStNum(publisher),currentAttack.condition_st);
					//printf("%d:%d\n",GoosePublisher_getSqNum(publisher),currentAttack.condition_sq);
					//printf("%s:%s\n",gcb->name,currentAttack.condition_gcb);
					if (GoosePublisher_getStNum(publisher)
							== currentAttack.condition_st
							&& GoosePublisher_getSqNum(publisher)
									== currentAttack.condition_sq
							&& !strcmp(gcb->name,
									currentAttack.condition_gcb)) {
						ModifyArray(array, currentAttack);
						currentAttack.executed = true;
						executedModifyAttackCount++;
						//break;
					}
				} else if (currentAttack.condition_type == CONDITION_TIME) {
					if (getRuningTime() > currentAttack.condition_time) {
						ModifyArray(array, currentAttack);
						currentAttack.executed = true;
						executedModifyAttackCount++;
						//break;
					}
				}
			}
			if (attackList.modifyAttackNum == executedModifyAttackCount) {
				enableModifyAttack = false;
			}
			index++;
		}
	}
}
void ModifyArray(char** array,struct ModifyAttack mAttack){
	int i=0;
	//while(!strcmp(mAttack.modifications[i].modifiedvalue,"")){
	while(strlen(mAttack.modifications[i].modifiedvalue)!=0){
		struct ModifyAttackModification modification=mAttack.modifications[i++];
		array[modification.arrayIndex-1]=modification.modifiedvalue;
	}

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
