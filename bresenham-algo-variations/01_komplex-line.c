#include <stdio.h>
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

    drawLine(125,5,1,1);
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

void drawLine(int xstart,int ystart,int xend,int yend)
/*--------------------------------------------------------------
 * Bresenham-Algorithmus: Linien auf Rastergeräten zeichnen
 *
 * Eingabeparameter:
 *    int xstart, ystart        = Koordinaten des Startpunkts
 *    int xend, yend            = Koordinaten des Endpunkts
 *
 * Ausgabe:
 *    void SetPixel(int x, int y) setze ein Pixel in der Grafik
 *         (wird in dieser oder aehnlicher Form vorausgesetzt)
 *---------------------------------------------------------------
 */
{
    int x, y, t, dx, dy, incx, incy, pdx, pdy, ddx, ddy, deltaslowdirection, deltafastdirection, err;

    /* Entfernung in beiden Dimensionen berechnen */
    dx = xend - xstart;
    dy = yend - ystart;

    /* Vorzeichen des Inkrements bestimmen */
    incx = sgn(dx);
    incy = sgn(dy);
    if(dx<0) dx = -dx;
    if(dy<0) dy = -dy;

    /* feststellen, welche Entfernung größer ist */
    if (dx>dy)
    {
        /* x ist schnelle Richtung */
        pdx=incx;
        pdy=0;    /* pd. ist Parallelschritt */
        ddx=incx;
        ddy=incy; /* dd. ist Diagonalschritt */
        deltaslowdirection =dy;
        deltafastdirection =dx;   /* Delta in langsamer Richtung, Delta in schneller Richtung */
    }
    else
    {
        /* y ist schnelle Richtung */
        pdx=0;
        pdy=incy; /* pd. ist Parallelschritt */
        ddx=incx;
        ddy=incy; /* dd. ist Diagonalschritt */
        deltaslowdirection =dx;
        deltafastdirection =dy;   /* Delta in langsamer Richtung, Delta in schneller Richtung */
    }

    /* Initialisierungen vor Schleifenbeginn */
    x = xstart;
    y = ystart;
    err = deltafastdirection/2;
    SetPixel(x,y);

    /* Pixel berechnen */
    for(t=0; t<deltafastdirection; ++t) /* t zaehlt die Pixel, deltafastdirection ist Anzahl der Schritte */
    {
        /* Aktualisierung Fehlerterm */
        err -= deltaslowdirection;
        if(err<0)
        {
            /* Fehlerterm wieder positiv (>=0) machen */
            err += deltafastdirection;
            /* Schritt in langsame Richtung, Diagonalschritt */
            x += ddx;
            y += ddy;
        }
        else
        {
            /* Schritt in schnelle Richtung, Parallelschritt */
            x += pdx;
            y += pdy;
        }
        SetPixel(x,y);
    }
} /* gbham() */

// get width ('x') or height ('anykey') of the console
int checkAndSetConsoleDimensions(char xy)
{
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    // printf ("\33[%d;%dH%d/%d",4, 2, w.ws_col, w.ws_row);
    return (xy == 'x') ? w.ws_col : w.ws_row;
}

