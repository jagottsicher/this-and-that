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
//  struct Spot *left;
    struct Spot *right;
//	struct Spot *up;
	struct Spot *down;
};

// TODO (jens#1#02/16/21): prepare the whole thing for moving up and down

int main() {
//    struct Spots aRow[HEIGHT][WIDTH];
struct Spots *aRow = malloc(DIMENSIONS * sizeof(struct Spots));


//	fill a all members line randomly and connect the end with the beginning
	int j = 0;
     for (int i = 0 ; i < (DIMENSIONS); i++) {

		//fill each element with random number
		aRow->terrain = randomNumber(65,90);
		// but the first elements of the first 26 row you overwrite with ABC...
		if ( (i % WIDTH == 0) && (i < (26 * WIDTH)) ) {
			// fill first Elements with ABC...
			aRow->terrain = 65 + j++;
		}
		// assign each elelment it's right member
		aRow->right = aRow + 1;
		// all below pointers set except the last WIDTH ones
		if (i < DIMENSIONS - WIDTH)
			aRow->down = aRow + WIDTH;
		// last WIDTH ones pointin to the very first WIDTH ones
		if (i >= DIMENSIONS - WIDTH)
			aRow->down = aRow - i + WIDTH;
		// move to next element
		aRow = aRow + 1;
		}
		// go back to very first element
		aRow = aRow - DIMENSIONS;

//	output of a complete screen
	struct Spots *ptr_currentSpot;
    clearScreen();

    #define START_X 0
    #define START_Y 0
	ptr_currentSpot = aRow;

	for (int j = 0 ; j < checkAndSetConsoleDimensions('y') ; j++) {
		// printout a row
		for (int i = 0 ; i < checkAndSetConsoleDimensions('x') ; i++) {
			putc(ptr_currentSpot->terrain, stdout);
			ptr_currentSpot = ptr_currentSpot->right;
			fflush(stdout);
		}
		// back to the beginning
		ptr_currentSpot = ptr_currentSpot - checkAndSetConsoleDimensions('x');
		// and set the pointer to the element below
		ptr_currentSpot = ptr_currentSpot->down;
		}

	printf("\n%d bytes/struct and %d bytes/world\n", sizeof(struct Spots), DIMENSIONS * sizeof(struct Spots));
	msleep(10000);
	free (aRow);
    return 0;
}
