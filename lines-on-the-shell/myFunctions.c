#include <stdio.h>
#include <stdlib.h>

#include "myFunctions.h"

// Definition
void printEvenOrOdd(int number)
{
    if ((number % 2) == 0)
    {
        printf("Even!\n");
    }
    else
    {
        printf("Odd!\n");
    }
}

// Definition
int getNumberFromUser()
{
    int number_from_user; 

    printf("Please enter an interger number!\n");
    scanf("%d", &number_from_user);

    return number_from_user; 
}

// Definition
int returnRandom(int lower, int upper) 
{
    int num = (rand() % (upper - lower + 1)) + lower; 

    return num; 
}