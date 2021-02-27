#include <stdio.h>
#include <stdlib.h>

#include "../../needful-things/needful-things.h"

//#define WIDTH (10000)
//#define HEIGHT (5625)

#define WIDTH (200)
#define HEIGHT (70)
#define DIMENSIONS (HEIGHT * WIDTH)

struct Spots {
    char terrain;
	struct Spot *left;
    struct Spot *right;
	struct Spot *up;
	struct Spot *down;
};

// internal funtions
void outputTheStage (int x, int y, struct Spots *ptr_currentSpot);


int main() {
//    struct Spots aRow[HEIGHT][WIDTH];
struct Spots *aRow = malloc(DIMENSIONS * sizeof(struct Spots));
// create a pointer as moving pointer
struct Spots *ptr_currentSpot;
ptr_currentSpot = aRow;
// create a pointer as origin startpoint
struct Spots *ptr_toOrigin;
ptr_toOrigin = aRow;
// j to go forward counting ABC...
int j = 0;

//	fill a all members line randomly and connect the end with the beginning

     for (int i = 0 ; i < (DIMENSIONS); i++) {
		//fill each element with random number
		aRow->terrain = randomNumber(65,90);
		// but the first elements of the first 26 row you overwrite with ABC...
		if ( (i % WIDTH == 0) && (i < (26 * WIDTH)) ) {
			// fill first Elements with ABC...
			aRow->terrain = 65 + j++;
		}
		// assign each element to it's right member except the last elements in each row that assign to first members
		if (!(i % WIDTH == (WIDTH - 1))) {
				aRow->right = aRow + 1;
			}
			else {
				aRow->right = aRow - WIDTH;
			}
		// assign each element to it's left member except the first elements in each row that assign to last members
		if (!(i % WIDTH == (0))) {
				aRow->left = aRow - 1;
			}
			else {
				aRow->left = aRow + WIDTH;
			}

		// all below pointers set except the last WIDTH ones
		if (i < DIMENSIONS - WIDTH)
			aRow->down = aRow + WIDTH;
		// last WIDTH ones point to the very first WIDTH ones
		if (i >= DIMENSIONS - WIDTH)
			aRow->down = aRow - i + WIDTH;

		// all upper pointers set except the first WIDTH ones
		if (i >= WIDTH)
			aRow->up = aRow - WIDTH;
		// first WIDTH ones point to the very last WIDTH ones
		if (i < WIDTH)
			aRow->up = aRow + i + DIMENSIONS - WIDTH;

		// move to next element
		aRow = aRow + 1;
		}
// go back to very first element
// aRow = aRow - DIMENSIONS;
aRow = ptr_toOrigin;
msleep(5000);

//outputTheStage (0,0, ptr_currentSpot); // output without offset
//outputTheStage (0,0, ptr_currentSpot->left); // output moving left OK
//outputTheStage (0,0, ptr_currentSpot->up); // output moving up ?? PRÜFEN!!!
//outputTheStage (0,0, ptr_currentSpot->right); // output moving right OK
outputTheStage (0,0, ptr_currentSpot->down); // output moving down OK



// print struct size and world size
printf("\n%d bytes/struct and %d bytes/world\n", sizeof(struct Spots), DIMENSIONS * sizeof(struct Spots));
// msleep(5000);


// cleanup and free the memory
//	free (aRow); // is this okay?
//	free (ptr_currentSpot);
//	free (ptr_toOrigin);

    return 0;
}

void outputTheStage (int x, int y, struct Spots *ptr_currentSpot) {
//	output of a complete screen
	// clear screen
    clearScreen();
	// pro height
	for (int j = 0 ; j < checkAndSetConsoleDimensions('y') ; j++) {
		// printout a row
		for (int i = 0 ; i < checkAndSetConsoleDimensions('x') ; i++) {
			putc(ptr_currentSpot->terrain, stdout);
			ptr_currentSpot = ptr_currentSpot->right;
			fflush(stdout);
		}
		// back to the beginning of the current row
		ptr_currentSpot = ptr_currentSpot - checkAndSetConsoleDimensions('x');
		// and set the pointer to the element below
		ptr_currentSpot = ptr_currentSpot->down;
	} // end of full screen height
}
