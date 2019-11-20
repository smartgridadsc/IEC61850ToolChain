
#include "goose_publisher.h"

#include "iec61850_server.h"
#include "mms_goose.h"

#include "models/LIED11.c"
#include "models/LIED11.h"
#include "xmlParser.h"
#include "time.h"
bool stobool(const char* value);
const char** getfield(char *line);
double getTime();
void updateStNum(IedServer iedserver);
void launchInsertAttack(IedServer iedserver);
void insertPacket(struct InsertAttack iAttack);
void launchModifyAttack(IedServer iedserver,char** array);
void ModifyArray(char** array,struct ModifyAttack mAttack);
int getHexFromString(int index,char * string);
