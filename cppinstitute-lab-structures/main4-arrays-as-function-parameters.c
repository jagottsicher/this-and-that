#include <stdio.h>
#include <stdlib.h>
// function declaration and implementation
// also valid: void printarrptr(int *t[]) {
void printarrptr(int **t) {
    int i,j;
    for(i = 0; i<3; i++) {
        for(j = 0; j<3; j++)
            printf("%d\t",t[i][j]);
        printf("\n");
    }
}

int main(void) {
    int *arrptr[3]; // integer pointer holding three rows
    int i,j; // dimensional indecies

    for(i = 0; i < 3; i++) { // fill line 1 to 2 with content
        arrptr[i] = (int *) malloc(3 * sizeof(int)); // for each row reserve space for three ints
        for(j = 0; j < 3; j++) // go through each line
            arrptr[i][j] = (3 * i) + j +1; // fill pointer each element from upper left to bottom right with the spot number (+1,cause we start counting at 1)
    }

    // call the function
    printarrptr(arrptr);

    // free the memory (3 rows)
    for(i = 0; i < 3; i++)
        free(arrptr[i]);
    return 0;
}
