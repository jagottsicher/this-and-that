#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>

// some little helpers
#define hideCursor() printf("\e[?25l")
#define showCursor() printf("\e[?25h")
# define clear() printf("\033[H\033[J")

// declaration of used functions
void makeCircle(int xm, int ym, int a, int b);
void removeCircle(int xm, int ym, int a, int b);
void drawAndRemoveCircle(width);
int msleep(long tms);
void SetPixel(int x,int y);
void unSetPixel(int x,int y);
int checkAndSetConsoleDimensions(char xy);

void main () {
// clear screen
    clear();
    hideCursor();

// animate circles in two loops growing and schrinking
    while (1) { // turn as forwever
        // get screen size and set to variables
        int width = checkAndSetConsoleDimensions('x');
        int height = checkAndSetConsoleDimensions('y');
        for (int i = 0 ; i <= ((int)(width/7)-1); i++) {
            drawAndRemoveCircle(i,(height/5));
        }
        for (int i = ((int)(width/7)) ; i >= 1 ; i--) {
            drawAndRemoveCircle(i,(height/5));
        }
    }
// cleanup
    showCursor();
} // END main()

void makeCircle(int xm, int ym, int a, int b)
{
    int dx = 0, dy = b; /* we're in I. Quadrant - from upper  left corner to bottom right */
    long a2 = a*a, b2 = b*b;
    long err = b2-(2*b-1)*a2, e2; /* Error for first step*/
    do { // symmetry is everything
        SetPixel(xm+dx, ym+dy); /* I. Quadrant */
        SetPixel(xm-dx, ym+dy); /* II. Quadrant */
        SetPixel(xm-dx, ym-dy); /* III. Quadrant */
        SetPixel(xm+dx, ym-dy); /* IV. Quadrant */
        e2 = 2*err;
        if (e2 <  (2*dx+1)*b2) {
            dx++;
            err += (2*dx+1)*b2;
        }
        if (e2 > -(2*dy-1)*a2) {
            dy--;
            err -= (2*dy-1)*a2;
        }
    }
    while (dy >= 0);
    while (dx++ < a) {   /* in Case elipse is too flat */
        SetPixel(xm+dx, ym); /* -> finish elipse's edges */
        SetPixel(xm-dx, ym);
    }
}

void removeCircle(int xm, int ym, int a, int b) {
    int dx = 0, dy = b;
    long a2 = a*a, b2 = b*b;
    long err = b2-(2*b-1)*a2, e2;

    do {
        unSetPixel(xm+dx, ym+dy); /* I. Quadrant */
        unSetPixel(xm-dx, ym+dy); /* II. Quadrant */
        unSetPixel(xm-dx, ym-dy); /* III. Quadrant */
        unSetPixel(xm+dx, ym-dy); /* IV. Quadrant */

        e2 = 2*err;
        if (e2 <  (2*dx+1)*b2) {
            dx++;
            err += (2*dx+1)*b2; }
        if (e2 > -(2*dy-1)*a2) {
            dy--;
            err -= (2*dy-1)*a2;
        }
    }
    while (dy >= 0);

    while (dx++ < a) {
        unSetPixel(xm+dx, ym);
        unSetPixel(xm-dx, ym);
    }
}

void drawAndRemoveCircle(int circleWidth, int circleHeight) {
    // magic numbers for centre's x, y, height, and display time
    makeCircle((checkAndSetConsoleDimensions('x')/2),(checkAndSetConsoleDimensions('y')/2),circleWidth,circleHeight);
    msleep(50);
    removeCircle((checkAndSetConsoleDimensions('x')/2),(checkAndSetConsoleDimensions('y')/2),circleWidth,circleHeight);
}

// get width ('x') or height ('anykey') of the console
int checkAndSetConsoleDimensions(char xy)
{
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    // printf ("\33[%d;%dH%d/%d",4, 2, w.ws_col, w.ws_row);
    return (xy == 'x') ? w.ws_col : w.ws_row;
}

// have a nap in 1/1000th of a second steps
int msleep(long tms)
{
    struct timespec ts;
    int ret;
    if (tms < 0) {
        return -1;
    }
    ts.tv_sec = tms / 1000;
    ts.tv_nsec = (tms % 1000) * 1000000;
    do {
        ret = nanosleep(&ts, &ts);
    }
    while (ret);
    return ret;
}

// make a dot
void SetPixel(int x,int y)
{
    printf("\33[%d;%dH◼", y, x);
    fflush(stdout);
}
// remove a dot
void unSetPixel(int x,int y)
{
    printf("\33[%d;%dH ", y, x);
    fflush(stdout);
}
