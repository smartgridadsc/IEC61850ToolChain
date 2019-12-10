#include <string.h>
#include <stdbool.h>
#include <libxml/parser.h>
#include <libxml/tree.h>


#define CONDITION_ST_SQ_GCB 1
#define CONDITION_TIME 2
#define CONDITION_PAYLOAD 3
#define MAXIMUM_INSERT_ATTACK 10
#define MAXIMUM_MODIFY_ATTACK 10
#define MAXIMUM_DOS_ATTACK 10
#define ATTACK_LABLE_NAME "attack"
#define MAXIMUM_MODIFICATION_SIZE 25
#define MAXIMUM_CONDITION_PAYLOAD_SIZE 10

struct AttackList parserAttacks(xmlNode *a_node);
char* getAttributeValueByName(char *attributeName, xmlNode *xNolde);
struct InsertAttackValue parseInsertAttackValue(xmlNode * valueNode);
struct DosAttackValue parseDosAttackValue(xmlNode * valueNode);
struct InsertAttack parserInsertAttackXML(xmlNode *attackNode);
struct ModifyAttack parserModifyAttackXML(xmlNode *attackNode);
struct DosAttack parserDosAttackXML(xmlNode *attackNode);
struct ModifyAttackModification parseModifyAttackValue(xmlNode * modificationNode);
struct AttackList getAttackList();
double getRuningTime();
struct PayloadCondition parserPayloadCondtion(xmlNode *payloadCondtionNode);
struct InsertAttackValue{
	char type[20];
	char value[50];
};
struct DosAttackValue{
	char type[20];
	char value[50];
};

struct PayloadCondition{
	int index;
	char type[10];
	char value[20];
	char operator[10];
};

struct InsertAttack{
	/*define attack condition*/
	bool valid;
	bool executed;
	int condition_type;
	int condition_st;
	int condition_sq;
	char condition_gcb[50];
	float condition_time;
	struct PayloadCondition condition_payloads[MAXIMUM_CONDITION_PAYLOAD_SIZE];
	/*define attack payload*/
	char interface[10];
	int stNum;
	int sqNum;
	char gcbName[50];
	int appId;
	char dstAddress[12];
	int vlanId;
	int vlanPriority;
	char gocbRef[50];
	int timeAllowedtoLive;
	char dataSet[50];
	char goID[50];
	struct InsertAttackValue values[25];
	
};
struct DosAttack{
	/*define attack condition*/
	bool valid;
	bool executed;
	int condition_type;
	int condition_st;
	int condition_sq;
	char condition_gcb[50];
	float condition_time;
	struct PayloadCondition condition_payloads[MAXIMUM_CONDITION_PAYLOAD_SIZE];
	/*define attack payload*/
	char interface[10];
	int stNum;
	int sqNum;
	char gcbName[50];
	int appId;
	char dstAddress[12];
	int vlanId;
	int vlanPriority;
	char gocbRef[50];
	int timeAllowedtoLive;
	char dataSet[50];
	char goID[50];
	struct DosAttackValue values[25];
	/*define stop contition*/
	int stopCondition_packetNum;

};

struct ModifyAttackModification{
	int arrayIndex;
	char modifiedvalue[5];
};
struct ModifyAttack{
	//define attack condition
	bool valid;
	bool executed;
	int condition_type;
	int condition_st;
	int condition_sq;
	char condition_gcb[50];
	int condition_time;
	struct PayloadCondition condition_payloads[MAXIMUM_CONDITION_PAYLOAD_SIZE];
	//define attack payload
	char interface[10];
	struct ModifyAttackModification modifications[MAXIMUM_MODIFICATION_SIZE];
	
};
struct AttackList{
	int insertAttackNum;
	int modifyAttackNum;
	int dosAttackNum;
	struct InsertAttack insertAttackList[MAXIMUM_INSERT_ATTACK];
	struct ModifyAttack modifyAttackList[MAXIMUM_MODIFY_ATTACK];
	struct DosAttack dosAttackList[MAXIMUM_DOS_ATTACK];
};


