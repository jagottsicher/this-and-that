#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "myFunctions.h"

// Definition
int getNumberFromUser()
{
    int number_from_user;

    printf("Please enter an interger number!\n");
    scanf("%d", &number_from_user);

    return number_from_user;
}

// Definition
int pressAnyKey()
{
    int input_key;

    printf("press any key\n");
    scanf(" %c", &input_key);

    return 0;
}

// Definition
int returnRandom(int lower, int upper)
{
    int num = (rand() % (upper - lower + 1)) + lower;

    return num;
}

//Definition
void clear()
{
    printf("\033[H\033[J");
}

//Definition
void fancyCursor(int iterations)
{
    for (int k = 1;k = iterations; k++)
	{
	printf("|");
	printf("\33[%dD", 1);
	printf("/");
	printf("\33[%dD", 1);
        printf("-");
	printf("\33[%dD", 1);
        printf("\\");
	printf("\33[%dD", 1);
        printf("|");
	printf("\33[%dD", 1);
        printf("\\");
	printf("\33[%dD", 1);
        printf("-");
	printf("\33[%dD", 1);
        printf("/");
	printf("\33[%dD", 1);
	}
}


//Definition
void rowWiseOutput(char inputstring[])
{

   int c = 0;

   while (inputstring[c] != '\0')
	{
   		printf("%c", inputstring[c]);
   		fflush(stdout);
// 		printf(" ");
//      fancyCursor(100);
//      printf("\33[%dD \33[%dD", 1, 1);
		c++;
	}
	printf(" ");
	printf("\n");
}


void printoutArray(int internalArray[200][50])
{
for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 200; j++)
        {
        if (internalArray[j][i] == 1)
            {
            printf("*");
            }
            else
            {
            printf(" ");
            }
        }
        printf("\n");
    }
}

int msleep(long tms)
{
    struct timespec ts;
    int ret;
    if (tms < 0)
    {
    return -1;
    }
    ts.tv_sec = tms / 1000;
    ts.tv_nsec = (tms % 1000) * 1000000;
    do
    {
    // printf("sleeping for %d", ret);
    ret = nanosleep(&ts, &ts);
    }
    while (ret);

    return ret;
}
