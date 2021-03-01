#include <stdio.h>
#include <stdlib.h>

#include "../../needful-things/needful-things.h"

// simple option to create a function by utilitizing
// terminal commands and escape sequences
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

void drawHorizon(void);

int main(void)
{
int horizon = ((checkAndSetConsoleDimensions('y')/3)*2);

clearScreen();
drawHorizon();

// near snowing
int place_x = (randomNumber(1, checkAndSetConsoleDimensions('x')));
for (int i = 1 ; i <= checkAndSetConsoleDimensions('y') ; i++) {
gotoxy(place_x,i);
printf("O");
fflush(stdout);
msleep(50);
gotoxy(place_x,i);
printf(" ");
if (i == horizon)
	drawHorizon();
fflush(stdout);
}

// medium snowing
place_x = (randomNumber(1, checkAndSetConsoleDimensions('x')));
for (int i = 1 ; i <= checkAndSetConsoleDimensions('y') - randomNumber(1, 10); i++) {
gotoxy(place_x,i);
printf("o");
fflush(stdout);
msleep(200);
gotoxy(place_x,i);
printf(" ");
if (i == horizon)
	drawHorizon();
fflush(stdout);
}

// far snowing
place_x = (randomNumber(1, checkAndSetConsoleDimensions('x')));
for (int i = 1 ; i <= (horizon - 1); i++) {
gotoxy(place_x,i);
printf(".");
fflush(stdout);
msleep(300);
gotoxy(place_x,i);
printf(" ");
fflush(stdout);
}

   return 0;
}

void drawHorizon(void) {
	int horizon = ((checkAndSetConsoleDimensions('y')/3)*2);
	for (int i = 1 ; i <= checkAndSetConsoleDimensions('x') ; i++) {
	gotoxy(i,horizon);
	printf("_");
	}
	printf("\n");
	printf("Let it snow, let it snow, let it snow ...\n");
}
