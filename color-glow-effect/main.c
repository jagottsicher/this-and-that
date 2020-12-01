#include <stdio.h>
#include <stdlib.h>

// some little helpers
#define hideCursor() printf("\e[?25l")
#define showCursor() printf("\e[?25h")
#define clearScreen(); printf("\033[H\033[J")

// colorcodes
#define default 39
#define black 30
#define red 31
#define green 32
#define yellow 33
#define blue 34
#define magenta 35
#define cyan 36
#define lightGrey 37
#define darkGrey 90
#define lightRed 91
#define lightGreen 92
#define lightYellow 93
#define lightBlue 94
#define lightMagenta 95
#define lightCyan 96
#define white 97

int msleep(long tms);

char color[16][20] = {"black", "red", "green", "yellow", "blue", "magenta", "cyan", "lightGrey", "darkGrey", "lightRed", "lightGreen", "lightYellow", "lightBlue", "lightMagenta", "lightCyan", "white"};

int main()
{
    hideCursor();
    int x = 3, y = 3
    clearScreen();

printf("\e[0mNormal Text\e[0m \e[1mbold/bright (depending on Terminal Settings)\e[0m \e[2mDimmed Text\e[0m\n\n\e[4mUnderlined Text\e[0m \e[5mBlinking Text (on Xterm)\e[0m \e[7m Reverse / inverted \e[0m \e[8mHidden\e[0m<=Hidden\n\n\e[5m\e[7m Reverse / inverted and blinking \e[0m \e[1m\e[2m\e[4m\e[5m\e[7m colored bold dimmed underlined blinking reversed /inverted Text\e[0m\n\n\e[1m\e[2m\e[4m\e[5m\e[7m\e[31m colored bold dimmed underlined blinking reversed /inverted Text\e[0m \e[1m\e[4m\e[32m colored bold underlined\e[0m");

for (int i = 1 ; i < 10 ; i++) {
    printf("\33[%d;%dH\e[31m█\n", 9,1);
    msleep(200);
    printf("\33[%d;%dH\e[91m█\n", 9,1);
    msleep(300);
    printf("\33[%d;%dH\e[93m█\n", 9,1);
    msleep(400);
    printf("\33[%d;%dH\e[91m█\n", 9,1);
    msleep(300);
    printf("\33[%d;%dH\e[31m█\n", 9,1);
    msleep(200);
}

for (int i = 1 ; i < 10 ; i++) {
    printf("\33[%d;%dH\e[2mGLOWING\n", 9,4);
    msleep(200);
    printf("\33[%d;%dH\e[0mGLOWING\n", 9,4);
    msleep(300);
    printf("\33[%d;%dH\e[1mGLOWING\n", 9,4);
    msleep(400);
    printf("\33[%d;%dH\e[0mGLOWING\n", 9,4);
    msleep(300);
    printf("\33[%d;%dH\e[2mGLOWING\n", 2,4);
    msleep(200);
}

    showCursor();
    printf("\e[0m");
    return 0;
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
