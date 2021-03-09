#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#include "../../needful-things/needful-things.h"

// simple option to create a function by utilitizing
// terminal commands and escape sequences
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

void drawHorizon(void);
void * nearSnowflake(void);
void * mediumSnowflake(void);
void * farSnowflake(void);
void * Snowing(void);

#define MANY 1
#define NOT_SO_MANY 5
#define A_FEW 7

pthread_mutex_t *lockStdout;

int main(void) {
int horizon = ((checkAndSetConsoleDimensions('y')/3)*2);

clearScreen();
showCursor(0);
drawHorizon();

pthread_t thread1 = 0;
pthread_create(&thread1, NULL, Snowing, NULL);
pthread_exit(NULL);

	showCursor(1);
	return 0;
}

void drawHorizon(void) {
	int horizon = ((checkAndSetConsoleDimensions('y')/3)*2);
	for (int i = 1 ; i <= checkAndSetConsoleDimensions('x') ; i++) {
	pthread_mutex_lock(&lockStdout);
	gotoxy(i,horizon);
	printf("_");
	fflush(stdout);
	pthread_mutex_unlock(&lockStdout);
	}
	for (int i = 1 ; i <= checkAndSetConsoleDimensions('x') ; i++) {
	pthread_mutex_lock(&lockStdout);
	gotoxy(i,horizon + 1);
	printf("_");
	fflush(stdout);
	pthread_mutex_unlock(&lockStdout);
	}
	for (int i = 1 ; i <= checkAndSetConsoleDimensions('x') ; i++) {
	pthread_mutex_lock(&lockStdout);
	gotoxy(i,horizon + 5);
	printf("_");
	fflush(stdout);
	pthread_mutex_unlock(&lockStdout);
	}
	for (int i = 1 ; i <= checkAndSetConsoleDimensions('x') ; i++) {
	pthread_mutex_lock(&lockStdout);
	gotoxy(i,horizon + 11);
	printf("_");
	fflush(stdout);
	pthread_mutex_unlock(&lockStdout);
	}
}

// near snowflake
void * nearSnowflake() {
		int horizon = ((checkAndSetConsoleDimensions('y')/3)*2);
		int place_x = (randomNumber(1, checkAndSetConsoleDimensions('x')));
		for (int i = 1 ; i <= (checkAndSetConsoleDimensions('y') - 2) ; i++) {
		pthread_mutex_lock(&lockStdout);
		gotoxy(place_x,i);
		putc('0', stdout);
		fflush(stdout);
		pthread_mutex_unlock(&lockStdout);
		msleep(50);
		pthread_mutex_lock(&lockStdout);
		gotoxy(place_x,i);
		putc(' ', stdout);
		fflush(stdout);
		pthread_mutex_unlock(&lockStdout);
//		if (i == horizon) {
//		pthread_mutex_lock(&lockStdout);
//		drawHorizon();
//		fflush(stdout);
//		pthread_mutex_unlock(&lockStdout);
//		}
	}
	return NULL;
}

// medium snowflake
void * mediumSnowflake() {
	int horizon = ((checkAndSetConsoleDimensions('y')/3)*2);
	int place_x = (randomNumber(1, checkAndSetConsoleDimensions('x')));
	for (int i = 1 ; i <= checkAndSetConsoleDimensions('y') - randomNumber(1, 10); i++) {
	pthread_mutex_lock(&lockStdout);
	gotoxy(place_x,i);
	putc('*', stdout);
	fflush(stdout);
	pthread_mutex_unlock(&lockStdout);
	msleep(100);
	pthread_mutex_lock(&lockStdout);
	gotoxy(place_x,i);
	putc(' ', stdout);
	fflush(stdout);
	pthread_mutex_unlock(&lockStdout);
//	if (i == horizon) {
//	pthread_mutex_lock(&lockStdout);
//	drawHorizon();
//	fflush(stdout);
//	pthread_mutex_unlock(&lockStdout);
//	}
	}
return NULL;
}

// far snowflake
void * farSnowflake() {
	int horizon = ((checkAndSetConsoleDimensions('y')/3)*2);
	int place_x = (randomNumber(1, checkAndSetConsoleDimensions('x')));
	for (int i = 1 ; i <= (horizon - 1); i++) {
	pthread_mutex_lock(&lockStdout);
	gotoxy(place_x,i);
	putc('.', stdout);
	fflush(stdout);
	pthread_mutex_unlock(&lockStdout);
	msleep(200);
	pthread_mutex_lock(&lockStdout);
	gotoxy(place_x,i);
	putc(' ', stdout);
	fflush(stdout);
	pthread_mutex_unlock(&lockStdout);
	}
return NULL;
}

// Snowing
void * Snowing() {
	pthread_t Snow[300];
	int j = 0, i;

	while (1) {
			i = randomNumber(1,1000);
			if (i % MANY == 0) {
					pthread_create(&Snow[j++], NULL, farSnowflake, NULL);
					msleep(randomNumber(1,20));
				}
			if (i % NOT_SO_MANY == 0) {
					pthread_create(&Snow[j++], NULL, mediumSnowflake, NULL);
					msleep(randomNumber(1,50));
				}
			if (i % A_FEW == 0) {
					pthread_create(&Snow[j++], NULL, nearSnowflake, NULL);
					msleep(randomNumber(1,100));
				}
	if (!(j<300))
		j = 1;
	drawHorizon();
	}

	return NULL;
}

