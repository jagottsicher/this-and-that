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


    // output
    struct Spot *currentX;
    currentX = aRow;

//    for (int i = 0; i < checkAndSetConsoleDimensions('x'); i++) {
//        printf("%c", currentX->terrain);
//        currentX = currentX->right;
//    }

    int j = 0;
    do {
    clearScreen();
    currentX = &aRow[j];
        for (int i = 0; i < checkAndSetConsoleDimensions('x'); i++) {
            putc(currentX->terrain, stdout);
            currentX = currentX->right;
        }
    fflush(stdout);
    printf("\n%d", j);
    fflush(stdout);
    if ((j > 995) || (j < 5))
        msleep(1000);
    j++;
    if (j == 1000)
        j = 0;
    } while (j <= 999);

    return 0;
}

