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

char color[16][20] = {"black", "red", "green", "yellow", "blue", "magenta", "cyan", "lightGrey", "darkGrey", "lightRed", "lightGreen", "lightYellow", "lightBlue", "lightMagenta", "lightCyan", "white"};


int main()
{
    hideCursor();
    int x = 3, y = 3
    clearScreen();
    printf(" FG    BG+Colorname\n");
    for (int i = 30 ; i <= 37 ; i++) {
        printf("\e[%dm███ \e[%dm ",i, i+10);
        printf("\e[39m%s \n", color-30+i);
        printf("\e[0m");
    }
    for (int i = 90 ; i <= 97 ; i++) {
        printf("\e[%dm███ \e[%dm ",i, i+10);
        printf("\e[30m%s \n", color+8-90+i);
        printf("\e[0m");
    }

    showCursor();
    printf("\e[0m");
    return 0;
}
