#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/ioctl.h>
#include <string.h>
#include <termios.h>

// sleep in milliseconds
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

// get an interger randlomly between lower and upper bounderies
int returnRandom(int lower, int upper)
{
    int num = (rand() % (upper - lower + 1)) + lower;

    return num;
}

// get width ('x') or height ('anykey') of the console
int checkAndSetConsoleDimensions(char xy)
{
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    // printf ("\33[%d;%dH%d/%d",4, 2, w.ws_col, w.ws_row);
    return (xy == 'x') ? w.ws_col : w.ws_row;
}

void clearScreen()
{
    printf("\033[H\033[J");
}
