//to compile: gcc main.c -o main -lrt
//author :不才b_d, modified by Li Yuan
//original link: https://blog.csdn.net/sinat_36184075/article/details/80489402
#include "TimeTriggerAttack.h"

void launch_insert_attack_thread(union sigval v)
{
	struct InsertAttack *attack=(struct InsertAttack*)v.sival_ptr;
	insertPacket(attack);
}
void launch_dos_attack_thread(union sigval v)
{
	struct DosAttack *attack=(struct DosAttack*)v.sival_ptr;
	createDoSAttackThread(attack);
}
void launch_modify_attack_thread(union sigval v)
{
	printf("sigval v pointer is %d\n",v.sival_ptr);
	struct ModifyAttack *attack=(struct ModifyAttack*)v.sival_ptr;
	ModifyArrayTriggerByTime(attack);

}
void setTimerforInsertAttack(struct InsertAttack*  inAttack )
{
    timer_t timerid;
    struct sigevent evp;
    memset(&evp, 0, sizeof(struct sigevent));       //initialization

    //evp.sigev_value.sival_int = 1;
   	evp.sigev_value.sival_ptr=inAttack;
    evp.sigev_notify = SIGEV_THREAD;
    evp.sigev_notify_function = launch_insert_attack_thread;

    if (timer_create(CLOCK_REALTIME, &evp, &timerid) == -1)
    {
        perror("fail to timer_create");
        exit(-1);
    }
    /* set first waiting time as "it.it_value", after that each interval time is "it.it_interval"*/
    struct itimerspec it;
    it.it_interval.tv_sec = 0;  // callback function frequency: 0 means no periodical calling
    it.it_interval.tv_nsec = 0;
    it.it_value.tv_sec = inAttack->condition_time;     // begin to callback after certain seconds
    it.it_value.tv_nsec = 0;
    if (timer_settime(timerid, 0, &it, NULL) == -1)
    {
        perror("fail to timer_settime");
        exit(-1);
    }
}

void setTimerforDosAttack(struct DosAttack* dosAttack )
{
	printf("dos pointer size is %d\n",sizeof(dosAttack));
	printf("dos timer function\n");
    timer_t timerid;
    struct sigevent evp;
    memset(&evp, 0, sizeof(struct sigevent));       //initialization


   	evp.sigev_value.sival_ptr=dosAttack;
    evp.sigev_notify = SIGEV_THREAD;
    evp.sigev_notify_function = launch_dos_attack_thread;

    if (timer_create(CLOCK_REALTIME, &evp, &timerid) == -1)
    {
        perror("fail to timer_create");
        exit(-1);
    }
    /* set first waiting time as "it.it_value", after that each interval time is "it.it_interval"*/
    struct itimerspec it;
    it.it_interval.tv_sec = 0;  // callback function frequency: 0 means no periodical calling
    it.it_interval.tv_nsec = 0;
    it.it_value.tv_sec = dosAttack->condition_time;     // begin to callback after certain seconds
    it.it_value.tv_nsec = 0;
    if (timer_settime(timerid, 0, &it, NULL) == -1)
    {
        perror("fail to timer_settime");
        exit(-1);
    }
}
void setTimerforModifyAttack(struct ModifyAttack * mofAttack )
{
	printf("mofAttack pointer is %d\n",mofAttack);
	//printf("modify timer function\n");
    timer_t timerid;
    struct sigevent evp;
    memset(&evp, 0, sizeof(struct sigevent));       //initialization

    //evp.sigev_value.sival_int=1;
   	evp.sigev_value.sival_ptr=mofAttack;
   	printf("sival_ptr pointer is %d\n",evp.sigev_value.sival_ptr);
    evp.sigev_notify = SIGEV_THREAD;
    evp.sigev_notify_function = launch_modify_attack_thread;

    if (timer_create(CLOCK_REALTIME, &evp, &timerid) == -1)
    {
        perror("fail to timer_create");
        exit(-1);
    }
    /* set first waiting time as "it.it_value", after that each interval time is "it.it_interval"*/
    struct itimerspec it;
    it.it_interval.tv_sec = 0;  // callback function frequency: 0 means no periodical calling
    it.it_interval.tv_nsec = 0;
    it.it_value.tv_sec = mofAttack->condition_time;     // begin to callback after certain seconds
    it.it_value.tv_nsec = 0;
    if (timer_settime(timerid, 0, &it, NULL) == -1)
    {
        perror("fail to timer_settime");
        exit(-1);
    }
}
