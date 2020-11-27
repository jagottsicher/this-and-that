#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <string.h>
#include <termios.h>



# define clear() printf("\033[H\033[J")

void makeCircle(int xm, int ym, int a, int b);
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

    makeCircle(100,25,25,10);
}


// make a dot
void SetPixel(int x,int y)
{
    printf("\33[%d;%dH*", y, x);
}

void makeCircle(int xm, int ym, int a, int b)
{
    int dx = 0, dy = b; /* im I. Quadranten von links oben nach rechts unten */
    long a2 = a*a, b2 = b*b;
    long err = b2-(2*b-1)*a2, e2; /* Fehler im 1. Schritt */

    do
    {
        SetPixel(xm+dx, ym+dy); /* I. Quadrant */
        SetPixel(xm-dx, ym+dy); /* II. Quadrant */
        SetPixel(xm-dx, ym-dy); /* III. Quadrant */
        SetPixel(xm+dx, ym-dy); /* IV. Quadrant */

        e2 = 2*err;
        if (e2 <  (2*dx+1)*b2)
        {
            dx++;
            err += (2*dx+1)*b2;
        }
        if (e2 > -(2*dy-1)*a2)
        {
            dy--;
            err -= (2*dy-1)*a2;
        }
    }
    while (dy >= 0);

    while (dx++ < a)   /* fehlerhafter Abbruch bei flachen Ellipsen (b=1) */
    {
        SetPixel(xm+dx, ym); /* -> Spitze der Ellipse vollenden */
        SetPixel(xm-dx, ym);
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
