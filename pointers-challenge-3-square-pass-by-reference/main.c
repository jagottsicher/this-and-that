#include <stdio.h>
#include <stdlib.h>

void squareOf(int *hitToBeSquare);

void main()
{
    int integerNumber1 = 4;
    int integerNumber2 = 4;

    squareOf(&integerNumber2); // function squares a given variable by manipulating the content of the address the handled over pointer points to.

    printf("The square of the integer %d is %d. \n", integerNumber1, integerNumber2);
}

void squareOf(int *hitToBeSquare)
{
    *hitToBeSquare = *hitToBeSquare * *hitToBeSquare;
}
