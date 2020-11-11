#ifndef MYFUNCTIONS_H_INCLUDED
#define MYFUNCTIONS_H_INCLUDED

// sleep in milliseconds
int msleep(long tms);

// get an interger randlomly between lower and upper bounderies
int returnRandom(int lower, int upper);

// get width ('x') or height ('anykey') of the console
int checkAndSetConsoleDimensions(char xy);

//clear screen
void clearScreen();

#endif // MYFUNCTIONS_H_INCLUDED
