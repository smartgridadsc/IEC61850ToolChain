#include <string.h>
#include <stdbool.h>
#include <libxml/parser.h>
#include <libxml/tree.h>


#define CONDITION_ST_SQ_GCB 1
#define CONDITION_TIME 2
#define MAXIMUM_INSERT_ATTACK 10
#define MAXIMUM_MODIFY_ATTACK 10
#define MAXIMUM_DOS_ATTACK 10
#define ATTACK_LABLE_NAME "attack"

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
struct InsertAttackValue{
	char type[20];
	char value[50];
};
struct DosAttackValue{
	char type[20];
	char value[50];
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
	/*define attack payload*/
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
	/*define attack payload*/
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
	char modifiedvalue[50];
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
	//define attack payload
	struct ModifyAttackModification modifications[25];
	
};
struct AttackList{
	int insertAttackNum;
	int modifyAttackNum;
	int dosAttackNum;
	struct InsertAttack insertAttackList[MAXIMUM_INSERT_ATTACK];
	struct ModifyAttack modifyAttackList[MAXIMUM_MODIFY_ATTACK];
	struct DosAttack dosAttackList[MAXIMUM_DOS_ATTACK];
};


