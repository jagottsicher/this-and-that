#include <stdio.h>
#include <stdlib.h>

#include "../../needful-things/needful-things.h"

// simple option to create a function by utilitizing
// terminal commands and escape sequences
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

//#define WIDTH (10000)
//#define HEIGHT (5625)

#define WIDTH (16000)
#define HEIGHT (9000)
#define DIMENSIONS (HEIGHT * WIDTH)

struct Spots {
    char terrain;
	struct Spot *left;
    struct Spot *right;
	struct Spot *up;
	struct Spot *down;
};

// internal funtions
void outputTheStage (struct Spots *ptr_handlerSpot);

int main() {
//    struct Spots aRow[HEIGHT][WIDTH];
struct Spots *aRow = malloc(DIMENSIONS * sizeof(struct Spots));

// create a pointer as origin start point
struct Spots *ptr_toOrigin;
ptr_toOrigin = aRow;

// create a pointer as moving pointer
struct Spots *ptr_currentSpot;
ptr_currentSpot = aRow;

// j to go forward counting ABC...
int j = 0;

char stopOrNot = ' ';


     for (int i = 0 ; i < (DIMENSIONS); i++) {
		aRow->terrain = randomNumber(65,90);
		if ((aRow->terrain == 73) || (aRow->terrain == 67) || (aRow->terrain == 68) || (aRow->terrain == 74) || (aRow->terrain == 70) || (aRow->terrain == 71) || (aRow->terrain == 72) || (aRow->terrain == 75) || (aRow->terrain == 76) || (aRow->terrain == 77) || (aRow->terrain == 78))
			aRow->terrain = 32;
		// but the first elements of the first 26 row you overwrite with ABC...
		if ( (i % WIDTH == 0) && (i < (26 * WIDTH)) ) {
			// fill first Elements with ABC...
			aRow->terrain = 65 + j++;
		}
		// find edges by conditions
		// top row
		if (!(i < WIDTH)) {
			aRow->up = aRow - WIDTH;
		}
		else {
			//printf("top row: %d => %d\n", i, i + ((HEIGHT - 1) * WIDTH));
			aRow->up = aRow + ((HEIGHT - 1) * WIDTH);
		}

		// right column
		if (!((i % WIDTH) == (WIDTH - 1))) {
			aRow->right = aRow + 1;
		}
		else {
			//printf("right column: %d => %d\n", i, i - WIDTH + 1);
			aRow->right = aRow - WIDTH + 1;
		}

		// left column
		if (!(((i % WIDTH) == 0) || (i == 0))) {
			aRow->left = aRow - 1;
		}
		else {
			//printf("left column: %d => %d\n", i, i + WIDTH - 1);
			aRow->left = aRow + (WIDTH - 1);
		}

		// bottom row
		if (!(i > (DIMENSIONS - WIDTH - 1))) {
			aRow->down = aRow + WIDTH;
		}
		else {
			//printf("bottom row: %d => %d\n", i, i - ((HEIGHT - 1) * WIDTH));
			aRow->down = aRow - ((HEIGHT - 1) * WIDTH);
		}

		// move to next element
		aRow = aRow + 1;
	}

// turn off cursor //DOES NOT WORK. CURSES ?!
curs_set(0);
// msleep(5000);
ptr_currentSpot = ptr_toOrigin;

// main loop for movement
while (!(stopOrNot == 'x')) {
outputTheStage (ptr_currentSpot);
stopOrNot = mygetch();
switch (stopOrNot) {
	case 'a':
	ptr_currentSpot = ptr_currentSpot->left;
	break;
	case 'd':
	ptr_currentSpot = ptr_currentSpot->right;
	break;
	case 'w':
	ptr_currentSpot = ptr_currentSpot->up;
	break;
	case 's':
	ptr_currentSpot = ptr_currentSpot->down;
	break;
	case '0':
	ptr_currentSpot = ptr_toOrigin;
	break;
	}
}

// print struct size and world size
 printf("\n%d bytes/struct and %u bytes/world\n", sizeof(struct Spots), DIMENSIONS * sizeof(struct Spots));
// msleep(5000);

aRow = ptr_toOrigin;
free (aRow);
curs_set(1);
    return 0;
}

void outputTheStage (struct Spots *ptr_handlerSpot) {

//	output of a complete screen
	// clear screen
    // clearScreen();
    // set cursor to upper left corner
    gotoxy(1,1);

	// per times height
	for (int j = 0 ; j < checkAndSetConsoleDimensions('y') ; j++) {
		// printout a row
		for (int i = 0 ; i < checkAndSetConsoleDimensions('x') ; i++) {
			putc(ptr_handlerSpot->terrain, stdout);
			ptr_handlerSpot = ptr_handlerSpot->right;
			fflush(stdout);
		}
		// back to the beginning of the current row
		for (int i = 0 ; i < checkAndSetConsoleDimensions('x') ; i++) {
			ptr_handlerSpot = ptr_handlerSpot->left;
		}
		// and set the pointer to the element below
		ptr_handlerSpot = ptr_handlerSpot->down;
	} // end of full screen height
	// msleep(100);
}
