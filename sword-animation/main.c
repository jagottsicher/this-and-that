#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define clear() printf("\033[H\033[J")

int msleep(long tms);

void main(void)
{
    for (int i = 0; i < 100 ; i++)
    {
    clear();
    printf("\n");
    printf("             -----\n");
    printf("             |   |\n");
    printf("             |   |-----------/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\---------\n");
    printf("|------------|   >                                                                                                    \\\n");
    printf("|////////////|   |                                                                                                     >\n");
    printf("|------------|   >                                                                                                    /\n");
    printf("             |   |----------------------------------------------------------------------------------------------------\n");
    printf("             |   |\n");
    printf("             -----\n");
    printf("\n");
    msleep(200);
    clear();
    printf("\n");
    printf("             -----\n");
    printf("             |   |\n");
    printf("             |   |-----------\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/---------\n");
    printf("|------------|   >                                                                                                    \\\n");
    printf("|////////////|   |                                                                                                     >\n");
    printf("|------------|   >                                                                                                    /\n");
    printf("             |   |----------------------------------------------------------------------------------------------------\n");
    printf("             |   |\n");
    printf("             -----\n");
    printf("\n");
    msleep(200);
    }

//    printf("%c", inputToOutput[counter]);
//    fflush(stdout);
//    msleep(100);

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
