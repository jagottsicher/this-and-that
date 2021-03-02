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

pthread_mutex_t lockHorizon;

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
	pthread_mutex_lock(&lockHorizon);
	for (int i = 1 ; i <= checkAndSetConsoleDimensions('x') ; i++) {
	gotoxy(i,horizon);
	printf("_");
	fflush(stdout);
	}
	for (int i = 1 ; i <= checkAndSetConsoleDimensions('x') ; i++) {
	gotoxy(i,horizon + 1);
	printf("_");
	fflush(stdout);
	}
	for (int i = 1 ; i <= checkAndSetConsoleDimensions('x') ; i++) {
	gotoxy(i,horizon + 5);
	printf("_");
	fflush(stdout);
	}
	for (int i = 1 ; i <= checkAndSetConsoleDimensions('x') ; i++) {
	gotoxy(i,horizon + 11);
	printf("_");
	fflush(stdout);
	}
	pthread_mutex_unlock(&lockHorizon);
}

// near snowflake
void * nearSnowflake() {
		int horizon = ((checkAndSetConsoleDimensions('y')/3)*2);
		int place_x = (randomNumber(1, checkAndSetConsoleDimensions('x')));
		for (int i = 1 ; i <= (checkAndSetConsoleDimensions('y') - 2) ; i++) {
		gotoxy(place_x,i);
		putc('O', stdout);
		fflush(stdout);
		msleep(100);
		gotoxy(place_x,i);
		putc(' ', stdout);
		fflush(stdout);
		if (i == horizon) {
		drawHorizon();
		fflush(stdout);
		}
	}
	return NULL;
}

// medium snowflake
void * mediumSnowflake() {
	int horizon = ((checkAndSetConsoleDimensions('y')/3)*2);
	int place_x = (randomNumber(1, checkAndSetConsoleDimensions('x')));
	for (int i = 1 ; i <= checkAndSetConsoleDimensions('y') - randomNumber(1, 10); i++) {
	gotoxy(place_x,i);
	putc('*', stdout);
	fflush(stdout);
	msleep(200);
	gotoxy(place_x,i);
	putc(' ', stdout);
	fflush(stdout);
	if (i == horizon)
	drawHorizon();
	fflush(stdout);
	}
return NULL;
}

// far snowflake
void * farSnowflake() {
	int horizon = ((checkAndSetConsoleDimensions('y')/3)*2);
	int place_x = (randomNumber(1, checkAndSetConsoleDimensions('x')));
	for (int i = 1 ; i <= (horizon - 1); i++) {
	gotoxy(place_x,i);
	putc('.', stdout);
	fflush(stdout);
	msleep(300);
	gotoxy(place_x,i);
	putc(' ', stdout);;
	fflush(stdout);
	}
return NULL;
}

// Snowing
void * Snowing() {
	pthread_t Snow[300];
	while (1) {
		for (int i = 1 ; i <= (checkAndSetConsoleDimensions('x')) ; i++) {
		if (i % MANY == 0) {
				pthread_create(&Snow[i], NULL, farSnowflake, NULL);
				msleep(randomNumber(70,80));
			}
		if (i % NOT_SO_MANY == 0) {
				pthread_create(&Snow[i], NULL, mediumSnowflake, NULL);
				msleep(randomNumber(50,60));
			}
		if (i % A_FEW == 0) {
				pthread_create(&Snow[i], NULL, nearSnowflake, NULL);
				msleep(randomNumber(11,20));
			}
		}
	}
	return NULL;
}

