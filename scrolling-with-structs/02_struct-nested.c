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
void outputTheStage (int x, int y, struct Spots *ptr_handlerSpot);

int main() {
//    struct Spots aRow[HEIGHT][WIDTH];
struct Spots *aRow = malloc(DIMENSIONS * sizeof(struct Spots));

// create a pointer as origin startpoint
struct Spots *ptr_toOrigin;
ptr_toOrigin = aRow;

// create a pointer as moving pointer
struct Spots *ptr_currentSpot;
ptr_currentSpot = aRow;

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
				// printf("%d goes to %d\n", i, i - (WIDTH - 1));
				aRow->right = aRow - (WIDTH - 1);
			}
		// assign each element to it's left member except the first elements in each row that assign to last members
		if (!(i % WIDTH == (0))) {
				aRow->left = aRow - 1;
			}
			else {
				aRow->left = aRow + (WIDTH - 1);
				// printf("%d to %d\n", i, (i + WIDTH - 1));
			}

		// all below pointers set except the last WIDTH ones
		if (i < DIMENSIONS - WIDTH)
			aRow->down = aRow + WIDTH;
		// last WIDTH ones point to the very first WIDTH ones
		if (i >= (DIMENSIONS - WIDTH))
			aRow->down = aRow + WIDTH;

			//aRow->down = aRow + (WIDTH - i); // THIS IS THE PROBLEM!!!!

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
// aRow = ptr_toOrigin;

//msleep(5000);

//moving 10 to the right
ptr_currentSpot = ptr_toOrigin;

//// Moving more than the width left and right, right and left
//for (int x = 0 ; x < 300 ; x++) {
//	ptr_currentSpot = ptr_currentSpot->left;
//	outputTheStage (0,0, ptr_currentSpot);
//	//msleep(100);
//}
//
//for (int x = 0 ; x < 300 ; x++) {
//	ptr_currentSpot = ptr_currentSpot->right;
//	outputTheStage (0,0, ptr_currentSpot);
//	//msleep(100);
//}
//
//for (int x = 0 ; x < 300 ; x++) {
//	ptr_currentSpot = ptr_currentSpot->right;
//	outputTheStage (0,0, ptr_currentSpot);
//	//msleep(100);
//}
//
//for (int x = 0 ; x < 300 ; x++) {
//	ptr_currentSpot = ptr_currentSpot->left;
//	outputTheStage (0,0, ptr_currentSpot);
//	//msleep(100);
//}

//
// IF going too far down seg fault // CHECK THIS
for (int x = 0 ; x < 23 ; x++) {
	ptr_currentSpot = ptr_currentSpot->down;
	outputTheStage (0,0, ptr_currentSpot);
	//msleep(100);
}

for (int x = 0 ; x < 23 ; x++) {
	ptr_currentSpot = ptr_currentSpot->up;
	outputTheStage (0,0, ptr_currentSpot);
	//msleep(100);
}

//#define OFFSET_Y (35)
//#define OFFSET_X (100)
//
//for (int i = 0 ; i < OFFSET_X ; i++)
//	ptr_currentSpot = ptr_currentSpot->right;
//for (int i = 0 ; i < OFFSET_Y ; i++)
//	ptr_currentSpot = ptr_currentSpot->down;




// print struct size and world size
// printf("\n%d bytes/struct and %d bytes/world\n", sizeof(struct Spots), DIMENSIONS * sizeof(struct Spots));
// msleep(5000);


// cleanup and free the memory
//	free (aRow); // is this okay?
//	free (ptr_currentSpot);
//	free (ptr_handlerSpot);
//	free (ptr_toOrigin);

    return 0;
}

void outputTheStage (int x, int y, struct Spots *ptr_handlerSpot) {

//	output of a complete screen
	// clear screen
    clearScreen();
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
}
