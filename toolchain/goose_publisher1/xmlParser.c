/**
 * section: Tree
 * synopsis: Navigates a tree to print element names
 * purpose: Parse a file to a tree, use xmlDocGetRootElement() to
 *          get the root element, then walk the document and print
 *          all the element name in document order.
 * usage: tree1 filename_or_URL
 * test: tree1 test2.xml > tree1.tmp && diff tree1.tmp $(srcdir)/tree1.res
 * author: Dodji Seketeli
 * copy: see Copyright for the status of this software.
 */
#include <stdio.h>
#include "xmlParser.h"
#include <unistd.h>
#define ATTACKSCENARIOXML "AttackScenarioConfiguration.xml"
/*
 *To compile this file using gcc you can type
 *gcc `xml2-config --cflags --libs` -o xmlexample libxml2-example.c
 * gcc -I/usr/include/libxml2  xmlParser.c -o xmlParser -lxml2
 */

/**
 * print_element_names:
 * @a_node: the initial xml node to consider.
 *
 * Prints the names of the all the xml elements
 * that are siblings or children of a given xml node.
 */
static void print_element_names(xmlNode *a_node) {

	xmlNode *cur_node = NULL;

	for (cur_node = a_node; cur_node; cur_node = cur_node->next) {
		if (cur_node->type == XML_ELEMENT_NODE) {
			printf("node type: Element, name: %s\n", cur_node->name);
		}

		//try to print properties
		xmlAttr *attribute = cur_node->properties;
		while (attribute) {
			xmlChar *value = xmlNodeListGetString(cur_node->doc,
					attribute->children, 1);
			//do something with value
			printf("attribute----- %s: %s\n", attribute->name, value);
			xmlFree(value);
			attribute = attribute->next;
		}
		//xmlFree(attribute);

		print_element_names(cur_node->children);
	}

}

struct AttackList* getAttackList() {

	xmlDoc *doc = NULL;
	xmlNode *root_element = NULL;

	LIBXML_TEST_VERSION

	//struct InsertAttack insertAttacks[MAXIMUM_INSERT_ATTACK];
	doc = xmlReadFile(ATTACKSCENARIOXML, NULL, 0);

	if (doc == NULL) {
		printf("error: could not parse file %s\n", ATTACKSCENARIOXML);
	}

	root_element = xmlDocGetRootElement(doc);

	// print_element_names(root_element);
	struct AttackList *attList = parserAttacks(root_element);
	//xmlFreeDoc(doc); todo: memory collapse happened in this line. Check it later. or call it when finish this program.
	xmlCleanupParser();

	return attList;
}

struct AttackList* parserAttacks(xmlNode *a_node) {
	struct AttackList *attList=(struct AttackList*)malloc(sizeof(struct AttackList));

	xmlNode *cur_node = NULL;
	xmlNode *xmlAttack = a_node->children;
	for (cur_node = xmlAttack; cur_node; cur_node = cur_node->next) {
		if (cur_node->type == XML_ELEMENT_NODE) {
			if (!strcmp(cur_node->name, ATTACK_LABLE_NAME)) {
				//check attack type
				xmlAttr *attribute = cur_node->properties;
				while (attribute) {
					if (!strcmp(attribute->name, "name")) {
						xmlChar *value = xmlNodeListGetString(cur_node->doc,
								attribute->children, 1);
						if (!strcmp(value, "insertAttack")) {
							struct InsertAttack inAttack =parserInsertAttackXML(cur_node);
							if(inAttack.valid){
								attList->insertAttackList[attList->insertAttackNum++]=inAttack;
							}

							/*printf("*********************final result\n");
							printf("stNum : %d\n", inAttack.stNum);
							printf("sqNum : %d\n", inAttack.sqNum);
							printf("gcbName : %s\n", inAttack.gcbName);
							printf("appId : %d\n", inAttack.appId);
							printf("dstAddress : %s\n", inAttack.dstAddress);
							printf("vlanId : %d\n", inAttack.vlanId);
							printf("vlanPriority : %d\n",
									inAttack.vlanPriority);
							printf("gocbRef : %s\n", inAttack.gocbRef);
							printf("timeAllowedtoLive : %d\n",
									inAttack.timeAllowedtoLive);
							printf("dataSet : %s\n", inAttack.dataSet);
							printf("goID : %s\n", inAttack.goID);*/


						} else if (!strcmp(value, "modifyAttack")) {
							struct ModifyAttack mdfAttack=parserModifyAttackXML(cur_node);
							if(mdfAttack.valid){
								attList->modifyAttackList[attList->modifyAttackNum++]=mdfAttack;
							}
							/*printf("*********************modify attack final result\n");
							printf("stnum is %d\n",mdfAttack.condition_st);
							printf("sqnum is %d\n",mdfAttack.condition_sq);
							printf("gcb is %s\n",mdfAttack.condition_gcb);
							printf("time is %d\n",mdfAttack.condition_time);
							printf("arrayIndex is %d\n",mdfAttack.modifications[0].arrayIndex);
							printf("modifiedvalue is %s\n",mdfAttack.modifications[0].modifiedvalue);*/
						}else if (!strcmp(value, "dosAttack")){
							struct DosAttack dosAttack=parserDosAttackXML(cur_node);
							if(dosAttack.valid){
								attList->dosAttackList[attList->dosAttackNum++]=dosAttack;
							}
							/*printf("*********************DoS attack final result\n");
							printf("stNum : %d\n", dosAttack.stNum);
							printf("sqNum : %d\n", dosAttack.sqNum);
							printf("gcbName : %s\n", dosAttack.gcbName);
							printf("appId : %d\n", dosAttack.appId);
							printf("dstAddress : %s\n", dosAttack.dstAddress);
							printf("vlanId : %d\n", dosAttack.vlanId);
							printf("vlanPriority : %d\n",dosAttack.vlanPriority);
							printf("gocbRef : %s\n", dosAttack.gocbRef);
							printf("timeAllowedtoLive : %d\n",dosAttack.timeAllowedtoLive);
							printf("dataSet : %s\n", dosAttack.dataSet);
							printf("goID : %s\n", dosAttack.goID);*/
						}
						xmlFree(value);
						break;
					}
					attribute = attribute->next;


				}
			}
		}

	}
	return attList;

}

struct InsertAttack parserInsertAttackXML(xmlNode *attackNode) {
	xmlAttr *attribute = attackNode->properties;
	struct InsertAttack insAtta;
	insAtta.valid=false;
	//printf("**********%lu\n", sizeof(insAtta));
	while (attribute) {
		if (!strcmp(attribute->name, "enable")) {
			xmlChar *value = xmlNodeListGetString(attackNode->doc,
					attribute->children, 1);
			if (!strcmp(value, "true")) {
				xmlNode *subAttackNode = attackNode->children;
				while (subAttackNode) {
					/* Start to Parse Condition Xml node*/
					if (subAttackNode->type == XML_ELEMENT_NODE
							& !strcmp(subAttackNode->name, "condition")) {
						insAtta.valid=true;
						insAtta.executed=false;
						//initialize condition_payload
						int index_k;
						for(index_k=0;index_k<MAXIMUM_CONDITION_PAYLOAD_SIZE;index_k++){
							insAtta.condition_payloads[index_k].index=-1;
						}
						//insAtta.condition_payloads
						xmlNode *conditionChild = subAttackNode->children;
						while (conditionChild) {
							if (conditionChild->type == XML_ELEMENT_NODE) {
								xmlAttr *conditionChildAttribute =conditionChild->properties;
								xmlChar *conditionChildValue;
								while (conditionChildAttribute) {
									if (!strcmp(conditionChildAttribute->name,
											"value")) {
										conditionChildValue =
												xmlNodeListGetString(
														conditionChild->doc,
														conditionChildAttribute->children,
														1);
										break;
									}
									conditionChildAttribute = conditionChildAttribute->next;
								}
								//printf("test value is %s\n",conditionChildValue);
								if (!strcmp(conditionChild->name, "stNum")) {
									insAtta.condition_st = atoi(conditionChildValue);
								} else if (!strcmp(conditionChild->name,"sqNum")) {
									insAtta.condition_sq = atoi(conditionChildValue);
								} else if (!strcmp(conditionChild->name,"gcbName")) {
									strcpy(insAtta.condition_gcb,conditionChildValue);
								} else if (!strcmp(conditionChild->name,"time")) {
									insAtta.condition_time =atof(conditionChildValue);
								}else if(!strcmp(conditionChild->name,"conditionType")){
									insAtta.condition_type = atoi(conditionChildValue);
								}else if(!strcmp(conditionChild->name,"payload_conditions")){
									//todo call paylaod_condition parser
									xmlNode *current_condition_payload=conditionChild->children;

									int ind=0;
									while(current_condition_payload){
										if (current_condition_payload->type == XML_ELEMENT_NODE) {
											insAtta.condition_payloads[ind++]=parserPayloadCondtion(current_condition_payload);
										}
										current_condition_payload=current_condition_payload->next;
									}

								}
								xmlFree(conditionChildValue);
							}
							conditionChild = conditionChild->next;

						}
					}
					/* Begin to Parse payload Xml node*/
					else if (subAttackNode->type == XML_ELEMENT_NODE
							& !strcmp(subAttackNode->name, "payload")) {
						xmlNode *payloadChild = subAttackNode->children;
						while (payloadChild) {
							if (payloadChild->type == XML_ELEMENT_NODE) {
								if (!strcmp(payloadChild->name, "values")) {
									xmlNode *valueNode=payloadChild->children;
									int index=0;
									while(valueNode){
										if(valueNode->type==XML_ELEMENT_NODE){
											insAtta.values[index]=parseInsertAttackValue(valueNode);
											//printf("type is %s, value is %s\n",insAtta.values[index].type,insAtta.values[index].value);
											index++;
										}
										valueNode=valueNode->next;
									}
								} else {
									char *value = getAttributeValueByName(
											"value", payloadChild);
									if (strcmp(value, "non-value")) {
										//printf("%s value is %s\n",payloadChild->name, value);
									if(!strcmp(payloadChild->name,"stNum")) {
										insAtta.stNum=atoi(value);
									} else if(!strcmp(payloadChild->name,"sqNum")) {
										insAtta.sqNum=atoi(value);
									} else if(!strcmp(payloadChild->name,"gcbName")) {
										strcpy(insAtta.gcbName,value);
									} else if(!strcmp(payloadChild->name,"appId")) {
										insAtta.appId=atoi(value);
									} else if(!strcmp(payloadChild->name,"dstAddress")) {
										strcpy(insAtta.dstAddress,value);
									} else if(!strcmp(payloadChild->name,"vlanId")) {
										insAtta.vlanId=atoi(value);
									} else if(!strcmp(payloadChild->name,"vlanPriority")) {
										insAtta.vlanPriority=atoi(value);
									} else if(!strcmp(payloadChild->name,"gocbRef")) {
										strcpy(insAtta.gocbRef,value);
									} else if(!strcmp(payloadChild->name,"timeAllowedtoLive")) {
										insAtta.timeAllowedtoLive=atoi(value);
									} else if(!strcmp(payloadChild->name,"dataSet")) {
										strcpy(insAtta.dataSet,value);
									} else if(!strcmp(payloadChild->name,"goID")) {
										strcpy(insAtta.goID,value);
									}else if(!strcmp(payloadChild->name,"interface")) {
										strcpy(insAtta.interface,value);
									}
								}
							}

						}
						payloadChild = payloadChild->next;
					}
					}

					subAttackNode = subAttackNode->next;
				}

			} else {
				printf("Insert Attack Disabled\n");
				break;
			}
			xmlFree(value);
			break;
		}
		attribute = attribute->next;
	}
	return insAtta;
}
struct DosAttack parserDosAttackXML(xmlNode *attackNode) {
	xmlAttr *attribute = attackNode->properties;
	struct DosAttack dosAtta;
	dosAtta.valid=false;
	while (attribute) {
		if (!strcmp(attribute->name, "enable")) {
			xmlChar *value = xmlNodeListGetString(attackNode->doc,
					attribute->children, 1);
			if (!strcmp(value, "true")) {
				xmlNode *subAttackNode = attackNode->children;
				while (subAttackNode) {
					/* Start to Parse Condition Xml node*/
					if (subAttackNode->type == XML_ELEMENT_NODE
							& !strcmp(subAttackNode->name, "condition")) {
						dosAtta.valid = true;
						dosAtta.executed = false;
						int index_k;
						for(index_k=0;index_k<MAXIMUM_CONDITION_PAYLOAD_SIZE;index_k++){
							dosAtta.condition_payloads[index_k].index=-1;
						}
						xmlNode *conditionChild = subAttackNode->children;
						while (conditionChild) {
							if (conditionChild->type == XML_ELEMENT_NODE) {
								xmlAttr *conditionChildAttribute =
										conditionChild->properties;
								xmlChar *conditionChildValue;
								while (conditionChildAttribute) {
									if (!strcmp(conditionChildAttribute->name,
											"value")) {
										conditionChildValue =
												xmlNodeListGetString(
														conditionChild->doc,
														conditionChildAttribute->children,
														1);
										break;
									}
									conditionChildAttribute =
											conditionChildAttribute->next;
								}
								//printf("test value is %s\n",conditionChildValue);
								if (!strcmp(conditionChild->name, "stNum")) {
									dosAtta.condition_st = atoi(
											conditionChildValue);
								} else if (!strcmp(conditionChild->name,
										"sqNum")) {
									dosAtta.condition_sq = atoi(
											conditionChildValue);
								} else if (!strcmp(conditionChild->name,
										"gcbName")) {
									strcpy(dosAtta.condition_gcb,
											conditionChildValue);
								} else if (!strcmp(conditionChild->name,
										"time")) {
									dosAtta.condition_time = atof(
											conditionChildValue);
								} else if (!strcmp(conditionChild->name,
										"conditionType")) {
									dosAtta.condition_type = atoi(
											conditionChildValue);

								}else if(!strcmp(conditionChild->name,"payload_conditions")){
									xmlNode *current_condition_payload=conditionChild->children;
									int ind=0;
									while(current_condition_payload){
										if (current_condition_payload->type == XML_ELEMENT_NODE) {
											dosAtta.condition_payloads[ind++]=parserPayloadCondtion(current_condition_payload);
										}
										current_condition_payload=current_condition_payload->next;
									}

								}
								xmlFree(conditionChildValue);
							}
							conditionChild = conditionChild->next;

						}
					}
					/* Begin to Parse payload Xml node*/
					else if (subAttackNode->type == XML_ELEMENT_NODE
							& !strcmp(subAttackNode->name, "payload")) {
						xmlNode *payloadChild = subAttackNode->children;
						while (payloadChild) {
							if (payloadChild->type == XML_ELEMENT_NODE) {
								if (!strcmp(payloadChild->name, "values")) {
									xmlNode *valueNode = payloadChild->children;
									int index = 0;
									while (valueNode) {
										if (valueNode->type
												== XML_ELEMENT_NODE) {
											dosAtta.values[index] =
													parseDosAttackValue(
															valueNode);
											//printf("type is %s, value is %s\n",insAtta.values[index].type,insAtta.values[index].value);
											index++;
										}
										valueNode = valueNode->next;
									}
								} else {
									char *value = getAttributeValueByName(
											"value", payloadChild);
									if (strcmp(value, "non-value")) {
										//printf("%s value is %s\n",payloadChild->name, value);
										if (!strcmp(payloadChild->name,
												"stNum")) {
											dosAtta.stNum = atoi(value);
										} else if (!strcmp(payloadChild->name,
												"sqNum")) {
											dosAtta.sqNum = atoi(value);
										} else if (!strcmp(payloadChild->name,
												"gcbName")) {
											strcpy(dosAtta.gcbName, value);
										} else if (!strcmp(payloadChild->name,
												"appId")) {
											dosAtta.appId = atoi(value);
										} else if (!strcmp(payloadChild->name,
												"dstAddress")) {
											strcpy(dosAtta.dstAddress, value);
										} else if (!strcmp(payloadChild->name,
												"vlanId")) {
											dosAtta.vlanId = atoi(value);
										} else if (!strcmp(payloadChild->name,
												"vlanPriority")) {
											dosAtta.vlanPriority = atoi(value);
										} else if (!strcmp(payloadChild->name,
												"gocbRef")) {
											strcpy(dosAtta.gocbRef, value);
										} else if (!strcmp(payloadChild->name,
												"timeAllowedtoLive")) {
											dosAtta.timeAllowedtoLive = atoi(
													value);
										} else if (!strcmp(payloadChild->name,
												"dataSet")) {
											strcpy(dosAtta.dataSet, value);
										} else if (!strcmp(payloadChild->name,
												"goID")) {
											strcpy(dosAtta.goID, value);
										}else if(!strcmp(payloadChild->name,"interface")) {
											strcpy(dosAtta.interface,value);
										}
									}
								}

							}
							payloadChild = payloadChild->next;
						}
					} else if (subAttackNode->type == XML_ELEMENT_NODE& !strcmp(subAttackNode->name, "stop_condition")) {
						xmlNode *stopChild = subAttackNode->children;
						while (stopChild) {
							if (stopChild->type == XML_ELEMENT_NODE) {
								if (!strcmp(stopChild->name, "packetsNum")) {
									char *value = getAttributeValueByName(
											"value", stopChild);
									if (strcmp(value, "non-value")) {
										//printf("%s value is %s\n",payloadChild->name, value);
										if (!strcmp(stopChild->name,
												"packetsNum")) {
											dosAtta.stopCondition_packetNum = atoi(value);
										}
									}
								}

							}
							stopChild = stopChild->next;
						}
					}
					subAttackNode = subAttackNode->next;
				}
			} else {
				printf("DoS Attack Disabled\n");
			}
			xmlFree(value);
			break;
		}
		attribute = attribute->next;
	}
	return dosAtta;
}

char* getAttributeValueByName(char *attributeName, xmlNode *xNode) {
	xmlAttr *attribute = xNode->properties;
	xmlChar *conditionChildValue="non-value";
	while (attribute) {
		if (!strcmp(attribute->name, attributeName)) {
			conditionChildValue = xmlNodeListGetString(xNode->doc,
					attribute->children, 1);
			break;
		}
		attribute = attribute->next;
	}
	return conditionChildValue;

}
struct InsertAttackValue parseInsertAttackValue(xmlNode * valueNode){
	struct InsertAttackValue insertAttackValue;
	strcpy(insertAttackValue.type,getAttributeValueByName("type",valueNode));
	strcpy(insertAttackValue.value,getAttributeValueByName("value",valueNode));
	return insertAttackValue;

}
struct DosAttackValue parseDosAttackValue(xmlNode * valueNode){
	struct DosAttackValue dosAttackValue;
	strcpy(dosAttackValue.type,getAttributeValueByName("type",valueNode));
	strcpy(dosAttackValue.value,getAttributeValueByName("value",valueNode));
	return dosAttackValue;

}
struct ModifyAttack parserModifyAttackXML(xmlNode *attackNode){
	xmlAttr *attribute = attackNode->properties;
		struct ModifyAttack mdfAtta;
		mdfAtta.valid=false;
		//flush modifications memory
		int k;
		for(k=0;k<MAXIMUM_MODIFICATION_SIZE;k++){
			mdfAtta.modifications[k].arrayIndex=-1;
		}

		while (attribute) {
			if (!strcmp(attribute->name, "enable")) {
				xmlChar *value = xmlNodeListGetString(attackNode->doc,
						attribute->children, 1);
				if (!strcmp(value, "true")) {
					xmlNode *subAttackNode = attackNode->children;
					while (subAttackNode) {
						/* Start to Parse Condition Xml node*/
						if (subAttackNode->type == XML_ELEMENT_NODE
								& !strcmp(subAttackNode->name, "condition")) {
							mdfAtta.valid=true;
							mdfAtta.executed=false;
							int index_k;
							for(index_k=0;index_k<MAXIMUM_CONDITION_PAYLOAD_SIZE;index_k++){
								mdfAtta.condition_payloads[index_k].index=-1;
							}
							xmlNode *conditionChild = subAttackNode->children;
							while (conditionChild) {
								if (conditionChild->type == XML_ELEMENT_NODE) {
									xmlAttr *conditionChildAttribute =conditionChild->properties;
									xmlChar *conditionChildValue;
									while (conditionChildAttribute) {
										if (!strcmp(conditionChildAttribute->name,
												"value")) {
											conditionChildValue =
													xmlNodeListGetString(
															conditionChild->doc,
															conditionChildAttribute->children,
															1);
											break;
										}
										conditionChildAttribute = conditionChildAttribute->next;
									}
									//printf("test value is %s\n",conditionChildValue);
									if (!strcmp(conditionChild->name, "stNum")) {
										mdfAtta.condition_st = atoi(conditionChildValue);
									} else if (!strcmp(conditionChild->name,"sqNum")) {
										mdfAtta.condition_sq = atoi(conditionChildValue);
									} else if (!strcmp(conditionChild->name,"gcbName")) {
										strcpy(mdfAtta.condition_gcb,conditionChildValue);
									} else if (!strcmp(conditionChild->name,"time")) {
										mdfAtta.condition_time =atof(conditionChildValue);
									}else if(!strcmp(conditionChild->name,"conditionType")){
										mdfAtta.condition_type = atoi(conditionChildValue);
									}else if(!strcmp(conditionChild->name,"payload_conditions")){
										xmlNode *current_condition_payload=conditionChild->children;
										int ind=0;
										while(current_condition_payload){
											if (current_condition_payload->type == XML_ELEMENT_NODE) {
												mdfAtta.condition_payloads[ind++]=parserPayloadCondtion(current_condition_payload);
											}
											current_condition_payload=current_condition_payload->next;
										}

									}
									xmlFree(conditionChildValue);
									//xmlFree(conditionChildAttribute);
								}
								conditionChild = conditionChild->next;

							}
						}
						/* Begin to Parse payload Xml node*/
					else if (subAttackNode->type == XML_ELEMENT_NODE
							& !strcmp(subAttackNode->name, "payload")) {
						xmlNode *payloadChild = subAttackNode->children;
						int index = 0;
						while (payloadChild) {
							if (payloadChild->type == XML_ELEMENT_NODE) {
								if (!strcmp(payloadChild->name,"modification")) {
										if (payloadChild->type== XML_ELEMENT_NODE) {
											mdfAtta.modifications[index] =parseModifyAttackValue(payloadChild);
											index++;
										}
								}else if(!strcmp(payloadChild->name,"interface")) {
									strcpy(mdfAtta.interface,value);
								}
							}
							payloadChild = payloadChild->next;
						}
					}

						subAttackNode = subAttackNode->next;
					}
				} else {
					printf("Insert Attack Disabled\n");
				}
				xmlFree(value);
				break;
			}
			attribute = attribute->next;
		}
		return mdfAtta;
}

struct ModifyAttackModification parseModifyAttackValue(xmlNode * modificationNode){
	struct ModifyAttackModification modification;
	modification.arrayIndex=atoi(getAttributeValueByName("arrayIndex",modificationNode));
	strcpy(modification.modifiedvalue,getAttributeValueByName("modifiedValue",modificationNode));
	return modification;

}
struct PayloadCondition parserPayloadCondtion(xmlNode *payloadCondtionNode){
	struct PayloadCondition pCondition;
	pCondition.index=atoi(getAttributeValueByName("index",payloadCondtionNode));
	strcpy(pCondition.type, getAttributeValueByName("type",payloadCondtionNode));
	strcpy(pCondition.value, getAttributeValueByName("value",payloadCondtionNode));
	if(!strcmp(pCondition.type,"numeric")){
		strcpy(pCondition.operator, getAttributeValueByName("operator",payloadCondtionNode));
	}
	return pCondition;
}

