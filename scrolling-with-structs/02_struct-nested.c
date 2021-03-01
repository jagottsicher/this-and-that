#include <stdio.h>
#include <stdlib.h>

#include "../../needful-things/needful-things.h"

// simple option to create a function by utilitizing
// terminal commands and escape sequences
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

//#define WIDTH (10000)
//#define HEIGHT (5625)

#define WIDTH (160)
#define HEIGHT (48)
#define DIMENSIONS (HEIGHT * WIDTH)

struct Spots {
    char terrain;
	struct Spot *left;
    struct Spot *right;
	struct Spot *up;
	struct Spot *down;
};

// internal funtions
void outputTheStage (int x, int y, struct Spots *ptr_handlerSpot);

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

//	fill a all members line randomly and connect the end with the beginning
////	ALTERNATE I.
//     for (int i = 0 ; i < (DIMENSIONS); i++) {
//		//fill each element with random number
//		aRow->terrain = randomNumber(65,90);
//		if ((aRow->terrain == 66) || (aRow->terrain == 67) || (aRow->terrain == 68) || (aRow->terrain == 69) || (aRow->terrain == 70) || (aRow->terrain == 71) || (aRow->terrain == 72))
//			aRow->terrain = 32;
//		// but the first elements of the first 26 row you overwrite with ABC...
//		if ( (i % WIDTH == 0) && (i < (26 * WIDTH)) ) {
//			// fill first Elements with ABC...
//			aRow->terrain = 65 + j++;
//		}
//		// assign each element to it's right member except the last elements in each row that assign to first members
//		if (!(i % WIDTH == (WIDTH - 1))) {
//				aRow->right = aRow + 1;
//			}
//			else {
//				// printf("%d goes to %d\n", i, i - (WIDTH - 1));
//				aRow->right = aRow - (WIDTH - 1);
//			}
//		// assign each element to it's left member except the first elements in each row that assign to last members
//		if (!(i % WIDTH == (0))) {
//				aRow->left = aRow - 1;
//			}
//			else {
//				aRow->left = aRow + (WIDTH - 1);
//				// printf("%d to %d\n", i, (i + WIDTH - 1));
//			}
//
//		// all below pointers set except the last WIDTH ones
//		if (i < DIMENSIONS - WIDTH)
//			aRow->down = aRow + WIDTH;
//		// last WIDTH ones point to the very first WIDTH ones
//		if (i >= (DIMENSIONS - WIDTH))
//			aRow->down = aRow - i ;
//
//		// first WIDTH ones point to the very last WIDTH ones
//		if (i < WIDTH) //printf("#%d points to %d\n", i, (i + DIMENSIONS - WIDTH));
//			aRow->up = aRow + i + DIMENSIONS - WIDTH;
//		// all upper pointers set except the first WIDTH ones
//		if (i >= WIDTH)
//			aRow->up = aRow - WIDTH;
//		// move to next element
//		aRow = aRow + 1;
//		}

//	ALTERNATE II.
     for (int i = 0 ; i < (DIMENSIONS); i++) {
		aRow->terrain = randomNumber(65,90);
		if ((aRow->terrain == 73) || (aRow->terrain == 67) || (aRow->terrain == 68) || (aRow->terrain == 74) || (aRow->terrain == 70) || (aRow->terrain == 71) || (aRow->terrain == 72))
			aRow->terrain = 32;
		// but the first elements of the first 26 row you overwrite with ABC...
		if ( (i % WIDTH == 0) && (i < (26 * WIDTH)) ) {
			// fill first Elements with ABC...
			aRow->terrain = 65 + j++;
		}
		// RIGHT
		// all except last column // OK
		aRow->right = aRow + 1;
		if ((i % WIDTH) == (WIDTH - 1))
			aRow->right = aRow - (WIDTH + 1);

		// DOWN
		// all except last row
		if (i < (DIMENSIONS - WIDTH)) { // CHECK THAT
			aRow->down = aRow + WIDTH;
			}
			else {
			aRow->down = aRow - ((HEIGHT - 1) * WIDTH);
			}

		// LEFT
		// all except first column
		if (!(i % WIDTH == 0))
			aRow->left = aRow - 1; //ELSE

		// UP
		// all except first row
		if (i >= WIDTH)
			aRow->up = aRow - WIDTH;

		// move to next element
		aRow = aRow + 1;
		}

// turn off cursor //DOES NOT WORK. CURSES ?!
curs_set(0);
// msleep(5000);
ptr_currentSpot = ptr_toOrigin;

// main loop for movement
while (!(stopOrNot == 'x')) {
outputTheStage (0,0, ptr_currentSpot);
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
 printf("\n%d bytes/struct and %d bytes/world\n", sizeof(struct Spots), DIMENSIONS * sizeof(struct Spots));
// msleep(5000);


// cleanup and free the memory
//	free (aRow); // is this okay?
//	free (ptr_currentSpot);
//	free (ptr_handlerSpot);
//	free (ptr_toOrigin);
curs_set(1);
    return 0;
}

void outputTheStage (int x, int y, struct Spots *ptr_handlerSpot) {

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
		}		// and set the pointer to the element below
		ptr_handlerSpot = ptr_handlerSpot->down;
	} // end of full screen height
	// msleep(100);
}
