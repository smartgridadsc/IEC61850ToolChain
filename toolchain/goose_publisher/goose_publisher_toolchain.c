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

	if (argc > 2) {
		interface = argv[1];
		nextUpdatePayloadTime=atof(argv[2]);
		port=atoi(argv[3]);
		printf("c time is %.3f", getTime());
	} else {
		printf("Use as: sudo ./goose_publisher_toolchain interfaceID currentTimestamp");
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
	FILE *stream = fopen(CSVFILENAME, "r");
	if (stream == NULL) {
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
			while(1){
				if(getTime()>nextUpdatePayloadTime){
					nextUpdatePayloadTime=nextUpdatePayloadTime+1;
					break;
				}
			}
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
			//usleep(1000000);

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
			//printf("res %x", results[i]);
			//printf("test:%s\n",results[i]);
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
	secs=(float)start.tv_usec/1000000;
	secs+=start.tv_sec;
	return secs;
	//printf("start.tv_usec is %.3f\n", secs);
}
