#include <stdio.h>
#include <stdlib.h>

#include "../../needful-things/needful-things.h"

#define WIDTH 200
#define HEIGHT 70
#define DIMENSIONS (HEIGHT * WIDTH)

struct Spots {
    char terrain;
//    struct Spot *left;
    struct Spot *right;
//	struct Spot *up;
//	struct Spot *down;
};

int i, j;

// TODO (jens#1#02/16/21): allocate memory on the heap instead of using the stack

// TODO (jens#1#02/16/21): prepare the whole thing for moving up and down

int main() {
//    struct Spots aRow[HEIGHT][WIDTH];
struct Spots *aRow = malloc(DIMENSIONS * sizeof(struct Spots));


//	fill a all members line and connect the end with the beginning

     for (int i = 0 ; i < (WIDTH); i++) {
		// fill each element with random number
		aRow->terrain = randomNumber(65,90);
		// assign each elelement it's right member
		aRow->right = aRow + 1;
		aRow = aRow + 1;
		// assign each element it's left member
//		aRow.left = &aRow[j][WIDTH-1-i];
//		// assign each element the member below
//		aRow.down = &aRow[j+1][i];
//		// assign each element the member above
//		aRow.up = &aRow[j-1][i];
		}
		aRow = aRow - WIDTH;
		aRow->terrain = 65;
	// assign right edges to left edge
//	aRow[j][WIDTH-1].right = &aRow[j][0];
//	// assign left edges to right edges
//	aRow[j][0].left = &aRow[j][WIDTH-1];

	// connect first and last row up and down to each other
//	for (int i = 0 ; i < WIDTH ; i++) {
//		// assign the last row to the first row
//		aRow[HEIGHT - 1][i].down = &aRow[0][i];
//		// assign the first row to the last row
//		aRow[0][i].up = &aRow[HEIGHT-1][i];
//	}

// fill the first members of the first 26 lines with the alphabet A -Z
//	for (int j = 0 ; j < 26 ; j++)
//		aRow[j][0].terrain = 65 + j;

//	aRow[HEIGHT-1].down = &aRow[0];
//	aRow[0].up = &aRow[HEIGHT-1];

//	output of a complete screen
	struct Spots *ptr_currentSpot;
    clearScreen();

    #define START_X 0
    #define START_Y 0
	ptr_currentSpot = aRow;

		for (int i = 0 ; i < checkAndSetConsoleDimensions('x') ; i++) {
			putc(ptr_currentSpot->terrain, stdout);
			ptr_currentSpot = ptr_currentSpot->right;
			fflush(stdout);
		}



	printf("\n%d\n", sizeof(aRow));
	msleep(1000);

    return 0;
}




////	fill a all members line and connect the end with the beginning
//
//	for (int j = 0 ; j < HEIGHT ; j++) {
//        for (int i = 0 ; i < WIDTH ; i++) {
//		// fill each element with random number
//		aRow[j][i].terrain = randomNumber(65,90);
//		// assign each elelement it's right member
//		aRow[j][i].right = &aRow[j][i+1];
//		// assign each element it's left member
//		aRow[j][i].left = &aRow[j][WIDTH-1-i];
//		// assign each element the member below
//		aRow[j][i].down = &aRow[j+1][i];
//		// assign each element the member above
//		aRow[j][i].up = &aRow[j-1][i];
//		}
//	// assign right edges to left edge
//	aRow[j][WIDTH-1].right = &aRow[j][0];
//	// assign left edges to right edges
//	aRow[j][0].left = &aRow[j][WIDTH-1];
//	}
//
//	// connect first and last row up and down to each other
//	for (int i = 0 ; i < WIDTH ; i++) {
//		// assign the last row to the first row
//		aRow[HEIGHT - 1][i].down = &aRow[0][i];
//		// assign the first row to the last row
//		aRow[0][i].up = &aRow[HEIGHT-1][i];
//	}
//
//// fill the first members of the first 26 lines with the alphabet A -Z
//	for (int j = 0 ; j < 26 ; j++)
//		aRow[j][0].terrain = 65 + j;
//
////	aRow[HEIGHT-1].down = &aRow[0];
////	aRow[0].up = &aRow[HEIGHT-1];
//
////	output of a complete screen
//	struct Spots *ptr_currentSpot;
//    clearScreen();
//
//    #define START_X 0
//    #define START_Y 0
//	ptr_currentSpot = &aRow[START_Y][START_X];
//
//	for (int j = 0 ; j < checkAndSetConsoleDimensions('y') ; j++) {
//		ptr_currentSpot = &aRow[j][0];
//		for (int i = 0 ; i < checkAndSetConsoleDimensions('x') ; i++) {
//			putc(ptr_currentSpot->terrain, stdout);
//			ptr_currentSpot = ptr_currentSpot->right;
//		}
////		for (int i = 0 ; i < checkAndSetConsoleDimensions('x') ; i++) {
////			ptr_currentSpot = ptr_currentSpot->left;
////		}
////		ptr_currentSpot = ptr_currentSpot->down;
//		fflush(stdout);
//	}
//
//	printf("\n%d\n", sizeof(aRow));
//	msleep(5000);
//
//    return 0;
//}

