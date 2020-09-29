#include <stdio.h>
#include <math.h>
#include <time.h>
#include <unistd.h>

#include "myFunctions.h"


int x1 = 10;
int y1 = 25;
int x2 = 185;
int y2 = 4;
int delta_x;
float delta_y;
float steeple = 0.0;
int delta_y_int = 0;
int x;
int y;

int main()
{

// clear screen

// Goto xy
// printf("\33[%d;%dH", 1, 1);
delta_x = x2 - x1; //175
delta_y = y1 - y2; //21
steeple = delta_y / delta_x;
delta_y = 0;

    for (x = 0; x < delta_x; x++) 
    {
        printf("\33[%d;%dH*", y1 - delta_y_int, x1 + x);
        delta_y += steeple;
        delta_y_int = (int)delta_y;
    }  



// main loop
printf("\n");
return 0;

/*  
comment
*/

}