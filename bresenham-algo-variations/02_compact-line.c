r#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <string.h>
#include <termios.h>



# define clear() printf("\033[H\033[J")

int sgn(int x);
void drawLine(int xstart,int ystart,int xend,int yend);
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

    drawLine(180,5,1,1);
}


// make a dot
void SetPixel(int x,int y)
{
    printf("\33[%d;%dH0", y, x);
}


/* signum function */
int sgn(int x)
{
    return (x > 0) ? 1 : (x < 0) ? -1 : 0;
}

void drawLine(int x0, int y0, int x1, int y1)
{
    int dx =  abs(x1-x0), sx = x0<x1 ? 1 : -1;
    int dy = -abs(y1-y0), sy = y0<y1 ? 1 : -1;
    int err = dx+dy, e2; /* error value e_xy */

    while (1)
    {
        SetPixel(x0,y0);
        if (x0==x1 && y0==y1) break;
        e2 = 2*err;
        if (e2 > dy)
        {
            err += dy;    /* e_xy+e_x > 0 */
            x0 += sx;
        }
        if (e2 < dx)
        {
            err += dx;    /* e_xy+e_y < 0 */
            y0 += sy;
        }
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

