#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/ioctl.h>
#include <string.h>
#include <termios.h>

int msleep(long tms);

void fancyOutput(char inputToOutput[]);

void clearScreen();

int returnRandom(int lower, int upper);

int checkAndSetConsoleDimensions(char xy);

void goToXY(int *x, int *y);

int calculateMenuItemWidth(int maxWidth, int numberMenuItems);

void printMenu(int numberMenuItems, int menuItemMaxWidth);

int mygetch (void);
