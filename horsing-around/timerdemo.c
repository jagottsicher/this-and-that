
#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <signal.h>
#include "timers.h"

void count_alarms(int);

int main(int argc, char* argv[]) {
	int initial = 250;     /*default value*/
	int repeat = 500;     /*default value*/
	if(argc >= 3){
		initial = atoi(argv[1]);
		repeat = atoi(argv[2]);
	}
	if( initial == 0 || repeat == 0 ){
		printf("Setting either interval to 0 hangs the process.\n");
		printf("Bailing out...\n");
		return 0;
	}
	signal(SIGALRM,count_alarms);
	if(set_timer(ITIMER_REAL, initial, repeat) == -1)
		perror ("set_timer");
	else
	while(1)
		pause();
	return 0;
}

void count_alarms(int signum) {
	int alarmsaccepted = 100;
	static int count = 0;
	printf("alarm%d\n",++count);
	fflush(stdout);
	if(alarmsaccepted == count){
		printf("No more alarms allowed!\n");
	exit(0);
	}
}
