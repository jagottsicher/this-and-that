#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <string.h>
#include <termios.h>



# define clear() printf("\033[H\033[J")

void makeCircle(int x0, int y0, int radius);
void SetPixel(int x,int y);
int checkAndSetConsoleDimensions(char xy);


void main ()
{

    int width = 0, height = 0;

// clear screen
    clear();
// get screen dimensions
// get screen size
    width = checkAndSetConsoleDimensions('x');
    height = checkAndSetConsoleDimensions('y');
// draw line

    makeCircle(100,25,5);
}


// make a dot
void SetPixel(int x,int y)
{
    printf("\33[%d;%dH0", y, x);
}

void makeCircle(int x0, int y0, int radius)
{
    int f = 1 - radius;
    int ddF_x = 0;
    int ddF_y = -2 * radius;
    int x = 0;
    int y = radius;

    SetPixel(x0, y0 + radius);
    SetPixel(x0, y0 - radius);
    SetPixel(x0 + radius, y0);
    SetPixel(x0 - radius, y0);

    while(x < y)
    {
        if(f >= 0)
        {
            y--;
            ddF_y += 2;
            f += ddF_y;
        }
        x++;
        ddF_x += 2;
        f += ddF_x + 1;

        SetPixel(x0 + x, y0 + y);
        SetPixel(x0 - x, y0 + y);
        SetPixel(x0 + x, y0 - y);
        SetPixel(x0 - x, y0 - y);
        SetPixel(x0 + y, y0 + x);
        SetPixel(x0 - y, y0 + x);
        SetPixel(x0 + y, y0 - x);
        SetPixel(x0 - y, y0 - x);
    }
}

// get width ('x') or height ('anykey') of the console
int checkAndSetConsoleDimensions(char xy)
{
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    // printf ("\33[%d;%dH%d/%d",4, 2, w.ws_col, w.ws_row);
    return (xy == 'x') ? w.ws_col : w.ws_row;
}

