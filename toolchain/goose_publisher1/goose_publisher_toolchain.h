
#include "goose_publisher.h"

#include "iec61850_server.h"
#include "mms_goose.h"

#include "models/LIED11.c"
#include "models/LIED11.h"
#include "xmlParser.h"
bool stobool(const char* value);
const char** getfield(char *line);
double getTime();
void updateStNum(IedServer iedserver);
void launchInsertAttack(IedServer iedserver, int insertAttack_stnum, int insertAttack_sqnum, char* insertAttack_name);
void insertPacket();
void launchModifyAttack(IedServer iedserver, int suppressAttack_stnum,int suppressAttack_sqnum, int arrayIndex, char* modifiedValue, char** array);
void ModifyArray(char** array, int arrayIndex, char* modifiedValue);
