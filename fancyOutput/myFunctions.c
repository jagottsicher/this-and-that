#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/ioctl.h>
#include <string.h>
#include <termios.h>

int mygetch (void)
{
    int ch;
    struct termios oldt, newt;

    tcgetattr ( STDIN_FILENO, &oldt );
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO );
    tcsetattr ( STDIN_FILENO,TCSANOW, &newt );
    ch = getchar();
    tcsetattr ( STDIN_FILENO,TCSANOW, &oldt );

    return ch;
}

int checkAndSetConsoleDimensions(char xy)
{
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    // printf ("\33[%d;%dH%d/%d",4, 2, w.ws_col, w.ws_row);
    if (xy == 'x')
        {
            return w.ws_col;
        }
        else
        {
            return w.ws_row;
        }
}

void printMenu(int numberMenuItems, int menuItemMaxWidth)
{
char menuItems[8][36] = {"File", "Character", "This & That", "Something more", "Something else", "Something different", "Exit" , "Pi"};

    // goto 1,1
    printf("\33[%d;%dH", 1, 1);
    // bg color change
    printf("\e[48;5;196m");
    //
    for (int i = 1 ; i <= checkAndSetConsoleDimensions('x'); i++)
        printf(" ");

    printf("\33[%d;%dH", 1, 1);

    for (int i = 1 ; i <= numberMenuItems; i++)
    {
        for (int j = 1 ; j <= menuItemMaxWidth ; j++)
        {
            printf(" ");
            fflush(stdout);
        }
        if (i < numberMenuItems)
        {
        printf("|");
        }
    }
    int k=1;
    for (int i = 0 ; i < numberMenuItems; i++)
    {
        // check length of menuitem[i]
        // offset = menuItemMaxWidth - length(menuitem[i]/2
        int offset = (menuItemMaxWidth - strlen(menuItems[i]))/2;
        printf("\33[%d;%dH%s", 1, k + offset, menuItems[i]);
        // printf("\n%s", menuItems[i]);
        // printf("\33[%d;%dH%d", 1, k, i);
        // fflush(stdout);
        k = k + menuItemMaxWidth + 1;
    }
// bg color change reverse to black
    printf("\e[48;5;0m");
}

int calculateMenuItemWidth(int maxWidth, int numberMenuItems)
{
    float temp;
    temp = ((maxWidth - (numberMenuItems - 1))/numberMenuItems);
    printf("%f", temp);
    return (int)temp;
}

void goToXY(int *x, int *y)
{
    printf("\33[%d;%dH", &y, &x);
}


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
    // goto y,x
    static int rowSelection = 0;
    printf("\33[%d;%dH", checkAndSetConsoleDimensions('y') - 2 + rowSelection, 1);
    rowSelection++;

    int fast = mygetch();

    int counter = 0;
    do
    {
        printf("%c", inputToOutput[counter]);
        fflush(stdout);
        if (fast != 32)
        {
            msleep(returnRandom(50, 200));
            if (returnRandom(1, 20) == 1)
                {
                    msleep(returnRandom(300, 500));
                }
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


