//#include "mms_value.h"
#ifndef TOOLCHAIN_H
#define TOOLCHAIN_H
#include "goose_publisher.h"

#include "iec61850_server.h"
#include "mms_goose.h"
//#include "goose_publisher.h"
//#include "hal_thread.h"
#include "models/LIED11.c"
#include "models/LIED11.h"

#include "xmlParser.h"
#include "time.h"

bool stobool(const char* value);
const char** getfield(char *line);
double getTime();
void updateStNum(IedServer iedserver);

void launchInsertAttack(IedServer iedserver,char **results);
void insertPacket(struct InsertAttack* iAttack);
void launchModifyAttack(IedServer iedserver,char** array);
void ModifyArray(char** array,struct ModifyAttack* mAttack);
void ModifyArrayTriggerByTime(struct ModifyAttack *mAttack);
int getHexFromString(int index,char * string);
void insertDoSPacket(int num_of_packets, LinkedList* dataSetValues, GoosePublisher* publisher);
void* sendDosAttackPacket(void *dAttack);
void createDoSAttackThread(struct DosAttack* dAttack);
void launchDoSAttack(IedServer iedserver,char **results);
bool payloadConditionTrigger(struct PayloadCondition condition_payloads[MAXIMUM_CONDITION_PAYLOAD_SIZE],char **results);
char ** getResults();
#endif
