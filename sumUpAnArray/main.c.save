#include <stdio.h>
#include <stdlib.h>


int sumUpAnArray(int array[], const int len);


int main()
{
    int dice[23] = {1,2,3,4,5,6,7,8,9,10};

    printf("Sum of a 23-sided dice is: %d", sumUpAnArray(dice, 23));
    return 0;
}

int sumUpAnArray(int array[], const int len)
{
    int sum = 0;
    int *counter;
    int * const endOfArray = &array[0] + len;


    for (counter = &array[0]; counter < endOfArray; ++counter)
        {
        sum += *counter;
        }

    return sum;
}
