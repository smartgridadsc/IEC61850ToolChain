#ifndef TIMETRIGGERATTACK_H
#define TIMETRIGGERATTACK_H
#include <stdio.h>
#include <signal.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "xmlParser.h"


void setTimerforInsertAttack(struct InsertAttack* inAttack );
void setTimerforDosAttack(struct DosAttack* dosAttack );
void setTimerforModifyAttack(struct ModifyAttack* mofAttack);
void launch_modify_attack_thread(union sigval v);
void launch_insert_attack_thread(union sigval v);
void launch_dos_attack_thread(union sigval v);
#endif
