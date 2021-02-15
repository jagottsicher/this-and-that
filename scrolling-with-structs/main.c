#include <stdio.h>
#include <stdlib.h>

#include "../../needful-things/needful-things.h"

struct Spot {
    char terrain;
    struct Spot *right;
};

int main() {
    struct Spot aRow[1000]; // = { {'A', &aRow[1] }, {'B', &aRow[2] },{'C', &aRow[3] },{'D', &aRow[4] },{'E', &aRow[5] },{'V', &aRow[6] },{'W', &aRow[7] },{'X', &aRow[8] },{'Y', &aRow[9] },{'Z', &aRow[0] },};

    // fill a 1000 members line and connect the end with the beginning
    for (int i = 0; i < 1000 ; i++) {
        aRow[i].terrain = randomNumber(65,90);
        aRow[i].right = &aRow[i+1];
    }
    aRow[999].right = &aRow[0];

    struct Spot currentX = {'_', &aRow[0]};

    // output
    // for (int i = 0; i < checkAndSetConsoleDimensions('x'); i++)
//    {
    printf("%c", currentX.terrain);

//    }



//printf("%c", aRow[0].terrain);
//printf("%c", aRow[1].terrain);


//    for (int i = 0 ; i < 2000 ; i++) {
//    clearScreen();
//        for (int j = 0; j < checkAndSetConsoleDimensions('x'); j++) {
//            printf("%c", aRow[j+i].terrain);
//            fflush(stdout);
//        }
//    msleep(10);
//    }

    return 0;
}

