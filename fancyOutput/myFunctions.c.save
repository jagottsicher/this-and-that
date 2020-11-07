#include <stdio.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>

int returnRandom(int lower, int upper)
{
    int num = (rand() % (upper - lower + 1)) + lower;

    return num;
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

void fancyOutput(char inputToOutput[])
{
    int counter = 0;
    do
    {
        printf("%c", inputToOutput[counter]);
        fflush(stdout);
        msleep(returnRandom(50, 200));
        if (returnRandom(1, 20) == 1)
            {
            msleep(returnRandom(300, 500));
            }
        ++counter;
    }
    while (!(inputToOutput[counter]=='\0'));
    printf("\n");
}

void clearScreen()
{
    printf("\033[H\033[J");
}


