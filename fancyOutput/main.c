#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int msleep(long tms);
void fancyOutput(char inputToOutput[]);

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
        msleep(100);
        ++counter;
    }
    while (!(inputToOutput[counter]=='\0'));
    printf("\n");

    printf("%s\n", inputToOutput); // only check, if string was properly handled over to function
}

char output[] = "This string shall appear char by char in the console.";

void main(void)
{
    printf("%s\n", output); // only check, if string was properly set and initialized
    fancyOutput(output); // here the function above is called to output the string char by cchar with tiny pauses between
}
