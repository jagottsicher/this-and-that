#include <stdio.h>
#include <stdlib.h>

struct Spot {
    char terrain;
    struct Spot *right;
};

int main() {
    struct Spot aRow[] = { {'A', &aRow[1] }, {'B', &aRow[2] },{'C', &aRow[3] },{'D', &aRow[4] },{'E', &aRow[5] },{'V', &aRow[6] },{'W', &aRow[7] },{'X', &aRow[8] },{'Y', &aRow[9] },{'Z', &aRow[0] },};

    for (int i ; i < 10 ; i++){
    printf("%c ", aRow[i].terrain);
    }

    return 0;
}

