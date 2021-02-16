#include <stdio.h>
#include <stdlib.h>

#include "../../needful-things/needful-things.h"

#define WIDTH 320
#define HEIGHT 96
#define DIMENSIONS (HEIGHT * WIDTH)

struct Spots {
    char terrain;
    struct Spot *left;
    struct Spot *right;
//	struct Spot *up;
//	struct Spot *down;
};

int i, j;

// TODO (jens#1#02/16/21): allocate memory on the heap instead of using the stack
// TODO (jens#1#02/16/21): prepare the whole thing for moving up and down

int main() {
    struct Spots aRow[HEIGHT][WIDTH];

//	fill a all members line and connect the end with the beginning

	for (int j = 0 ; j < HEIGHT ; j++) {
        for (int i = 0 ; i < WIDTH ; i++) {
		aRow[j][i].terrain = randomNumber(65,90);
		aRow[j][i].right = &aRow[j][i+1];
		aRow[j][i].left = &aRow[j][WIDTH-1-i];
		}
	aRow[j][WIDTH-1].right = &aRow[j][0];
	aRow[j][0].left = &aRow[j][WIDTH-1];
	}
// fill the first members of the first 26 lines with the alphabet A -Z
	for (int j = 0 ; j < 26 ; j++)
		aRow[j][0].terrain = 65 + j;

//	aRow[HEIGHT-1].down = &aRow[0];
//	aRow[0].up = &aRow[HEIGHT-1];

//	output of a complete screen
	struct Spots *ptr_currentSpot;
    clearScreen();

	for (int j = 0 ; j < checkAndSetConsoleDimensions('y') ; j++) {
		ptr_currentSpot = &aRow[j][0];
		for (int i = 0 ; i < checkAndSetConsoleDimensions('x') ; i++) {
			putc(ptr_currentSpot->terrain, stdout);
			ptr_currentSpot = ptr_currentSpot->right;
		}
		fflush(stdout);
	}
	msleep(3000);

    return 0;
}

