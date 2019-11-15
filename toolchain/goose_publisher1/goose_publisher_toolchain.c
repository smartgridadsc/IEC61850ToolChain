/*
 * goose_publisher_example.c
 */
//Temp
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

// has to be executed as root!
int main(int argc, char **argv) {
	char *interface;
	//double nextUpdatePayloadTime=getTime()+1;
	double nextUpdatePayloadTime;
	int port;
	char *folder;
	pthread_t tid_1;

	//parameters for insert attack
	bool enableInsertAttack;
	int insertAttack_stnum = 5;
	int insertAttack_sqnum = 0;
	char *insertAttack_name = "Alarm";

	//parameters for suppress attack
	bool enableModifyAttack;
	bool enableDoSAttack;
	int modifyAttack_stnum=5;
	int modifyAttack_sqnum=0;
	int modifyAttack_arrayIndex=0;
	char* modifyAttack_modifiedValue="1000";

	// Read attack infor from xml file.
	struct AttackList attackList=getAttackList();


	if (argc > 2) {
		interface = "lo";
		nextUpdatePayloadTime = getTime() + 1;
		port = 102;
		folder = argv[4];
		enableInsertAttack = false;
		enableModifyAttack=true;
		enableDoSAttack = true;
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
				launchInsertAttack(iedServer, insertAttack_stnum,
						insertAttack_sqnum, insertAttack_name);
			}

			//launch modify attack
			if(enableModifyAttack){
				launchModifyAttack(iedServer, insertAttack_stnum,insertAttack_sqnum,modifyAttack_arrayIndex,modifyAttack_modifiedValue,results);
			}

			//=============================Mano=============================
			//launch DoS attack
			if(enableDoSAttack){

				//printf("This is a DOS attack\n");
				//launchDoSAttack();
				pthread_create(&tid_1, NULL, launchDoSAttack, (void *)10); //10 is the number of packets
			    pthread_join(tid_1, NULL);
			    printf("Thread ended! DoS attack completed! \n");
			    enableDoSAttack = false;

			}

			//=============================Mano=============================

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
		//printf("cont:%s\n", ptr);
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
void launchInsertAttack(IedServer iedserver, int insertAttack_stnum,
		int insertAttack_sqnum, char *insertAttack_name) {
	LinkedList element = iedserver->mmsMapping->gseControls;
	while ((element = LinkedList_getNext(element)) != NULL) {
		MmsGooseControlBlock gcb = (MmsGooseControlBlock) element->data;
		GoosePublisher publisher = gcb->publisher;
		if (GoosePublisher_getStNum(publisher) == insertAttack_stnum
				&& GoosePublisher_getSqNum(publisher) == insertAttack_sqnum
				&& strcmp(gcb->name, insertAttack_name) == 0) {
			insertPacket();
		}
		//GoosePublisher_increaseStNum(publisher);
	}
}
void insertPacket() {

	printf("insert a packet\n");
	char *interface = "lo";

	LinkedList dataSetValues = LinkedList_create();

	LinkedList_add(dataSetValues, MmsValue_newIntegerFromInt32(1234));
	LinkedList_add(dataSetValues, MmsValue_newBinaryTime(false));
	LinkedList_add(dataSetValues, MmsValue_newIntegerFromInt32(5678));

	CommParameters gooseCommParameters;

	gooseCommParameters.appId = 1000;
	gooseCommParameters.dstAddress[0] = 0x01;
	gooseCommParameters.dstAddress[1] = 0x0c;
	gooseCommParameters.dstAddress[2] = 0xcd;
	gooseCommParameters.dstAddress[3] = 0x01;
	gooseCommParameters.dstAddress[4] = 0x00;
	gooseCommParameters.dstAddress[5] = 0x01;
	gooseCommParameters.vlanId = 0;
	gooseCommParameters.vlanPriority = 4;

	/*
	 * Create a new GOOSE publisher instance. As the second parameter the interface
	 * name can be provided (e.g. "eth0" on a Linux system). If the second parameter
	 * is NULL the interface name as defined with CONFIG_ETHERNET_INTERFACE_ID in
	 * stack_config.h is used.
	 */
	GoosePublisher publisher = GoosePublisher_create(&gooseCommParameters,
			interface);

	GoosePublisher_setGoCbRef(publisher, "liyuanTest/LLN0$GO$gcbAnalogValues");
	GoosePublisher_setConfRev(publisher, 1);
	GoosePublisher_setDataSetRef(publisher, "liyuanTest/LLN0$AnalogValues");

	if (GoosePublisher_publish(publisher, dataSetValues) == -1) {
		printf("Error sending message!\n");
	}

	GoosePublisher_destroy(publisher);

	LinkedList_destroyDeep(dataSetValues,
			(LinkedListValueDeleteFunction) MmsValue_delete);

}

//=============================Mano=============================
void *launchDoSAttack(void *packets) {
	int num_packets;
	num_packets = (int)packets;
	// init varaiables
	LinkedList DoS_dataSetValues = LinkedList_create();
	GoosePublisher DoS_publisher;

	insertDoSPacket(num_packets, &DoS_dataSetValues, &DoS_publisher); //1000 is the number of packets that I want to insert

	LinkedList_destroyDeep(DoS_dataSetValues,
			(LinkedListValueDeleteFunction) MmsValue_delete);
	GoosePublisher_destroy(DoS_publisher);

	//printf("Breakpoint 1 completed!");

}

void insertDoSPacket(int num_of_packets, LinkedList* dataSetValues, GoosePublisher* publisher) {

	printf("inserting a DoS packet\n");
	char *interface = "lo";
	int cnt;

	LinkedList_add(*dataSetValues, MmsValue_newIntegerFromInt32(1234));
	LinkedList_add(*dataSetValues, MmsValue_newBinaryTime(false));
	LinkedList_add(*dataSetValues, MmsValue_newIntegerFromInt32(5678));

	CommParameters gooseCommParameters;

	gooseCommParameters.appId = 1000;
	gooseCommParameters.dstAddress[0] = 0x01;
	gooseCommParameters.dstAddress[1] = 0x0c;
	gooseCommParameters.dstAddress[2] = 0xcd;
	gooseCommParameters.dstAddress[3] = 0x01;
	gooseCommParameters.dstAddress[4] = 0x00;
	gooseCommParameters.dstAddress[5] = 0x01;
	gooseCommParameters.vlanId = 0;
	gooseCommParameters.vlanPriority = 4;

	/*
	 * Create a new GOOSE publisher instance. As the second parameter the interface
	 * name can be provided (e.g. "eth0" on a Linux system). If the second parameter
	 * is NULL the interface name as defined with CONFIG_ETHERNET_INTERFACE_ID in
	 * stack_config.h is used.
	 */
	*publisher = GoosePublisher_create(&gooseCommParameters,
			interface);

	GoosePublisher_setGoCbRef(*publisher, "liyuanTest/LLN0$GO$gcbAnalogValues");
	GoosePublisher_setConfRev(*publisher, 1);
	GoosePublisher_setDataSetRef(*publisher, "liyuanTest/LLN0$AnalogValues");
	// Send number of packets
	while(num_of_packets > 1 ) {
		if (GoosePublisher_publish(*publisher, *dataSetValues) == -1) {
				printf("Error sending message!\n");
			}
		num_of_packets = num_of_packets-1;
	  }

}
//=============================Mano=============================

void launchModifyAttack(IedServer iedserver, int suppressAttack_stnum,
		int suppressAttack_sqnum, int arrayIndex, char* modifiedValue, char** array){
	LinkedList element = iedserver->mmsMapping->gseControls;
		while ((element = LinkedList_getNext(element)) != NULL) {
			MmsGooseControlBlock gcb = (MmsGooseControlBlock) element->data;
			GoosePublisher publisher = gcb->publisher;
			if (GoosePublisher_getStNum(publisher) == suppressAttack_stnum
					&& GoosePublisher_getSqNum(publisher) == suppressAttack_sqnum
					) {
				ModifyArray(array, arrayIndex,modifiedValue);
				break;
			}
		}
}
void ModifyArray(char** array, int arrayIndex, char* modifiedValue){
	array[arrayIndex]=modifiedValue;
}
