
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// some little helpers
# define hideCursor() printf("\e[?25l")
# define showCursor() printf("\e[?25h")
# define clear() printf("\033[H\033[J")

// # define WIDE_ORIENTED 1

int msleep(long tms);

int main(void)
{
    setlocale(LC_ALL, "");
// fwide( stdout, WIDE_ORIENTED );

    char percentage[21][4][16] =
    {
        { "   ", "   ", "   ", "  0" },
        { " ▐ ", "   ", "   ", "  5" },
        { " ▐▌", "   ", "   ", " 10" },
        { " ▐▛", "   ", "   ", " 15" },
        { " ▐█", "   ", "   ", " 20" },
        { " ▐█", "  ▀", "   ", " 25" },
        { " ▐█", "  █", "   ", " 30" },
        { " ▐█", "  █", "  ▀", " 35" },
        { " ▐█", "  █", "  ▜", " 40" },
        { " ▐█", "  █", "  █", " 45" },
        { " ▐█", "  █", " ▐█", " 50" },
        { " ▐█", "  █", " ██", " 55" },
        { " ▐█", "  █", "▐██", " 60" },
        { " ▐█", "  █", "▟██", " 65" },
        { " ▐█", "  █", "███", " 70" },
        { " ▐█", "▄ █", "███", " 75" },
        { " ▐█", "█ █", "███", " 80" },
        { "▄▐█", "█ █", "███", " 85" },
        { "▙▐█", "█ █", "███", " 90" },
        { "█▐█", "█ █", "███", " 95" },
        { "███", "█ █", "███", "100" },
    };

    char percentageUpwards[][4] =
    {
        " ", "▁", "▂", "▃", "▄", "▅", "▆", "▇", "█", "█",
    };

    char percentageSidewards[20][8] =
    {
        "  ", "▏ ", "▎ ", "▍ ", "▌ ", "▌ ", "▋ ", "▊ ", "█ ", "▉ ",
        "▉▏", "▉▎", "▉▍", "▉▌", "▉▌", "▉▋", "▉▊", "▉█", "▉▉", "▉▉",
    };

    // does already not work :-/
    clear();
    int counter = 0;
    for (int i = 0; i <= 100; i++)
    {
        // printf("%d %d\n", (i), (i % 5));
        if ((i % 5) == 0)
        {
            clear();
            printf("Squared Percentage:\n");
            printf("%s\n", percentage[counter][0]);
            printf("%s\n", percentage[counter][1]);
            printf("%s\n", percentage[counter][2]);
            printf("%s\n", percentage[counter][3]);
            msleep(500); // nappy for easier following
            counter++;
        }
    }

    // only a percentage display going upwards
    counter = 0;
    for (int i = 0; i <= 100; i++)
    {
        if ((i % 11) == 0)
        {
            clear();
            printf("Upwards:\n");
            printf("%s\n", percentageUpwards[counter]);
            fflush(stdout);
            printf("%d\n", i);
            msleep(500); // nappy for easier following
            counter++;
        }
    }

    // only a percentage display going upwards
    counter = 0;
    for (int i = 0; i <= 100; i++)
    {
        if ((i % 5) == 0)
        {
            clear();
            printf("Sidewards:\n");
            printf("%s\n", percentageSidewards[counter]);
            fflush(stdout);
            printf("%d\n", i);
            msleep(500); // nappy for easier following
            counter++;
        }
    }

    // Test only
    printf("%s\n", percentage[15][0]);
    printf("%s\n", percentage[15][1]);
    printf("%s\n", percentage[15][2]);
    printf("%s\n", percentage[15][3]);
    printf("\n");
    printf("%s\n", percentageUpwards[5]);
    printf("\n");
    printf("%s\n", percentageSidewards[10]);

    return 0;
}

// have a nap in 1/1000th of a second steps
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
        ret = nanosleep(&ts, &ts);
    } while (ret);
    return ret;
}
