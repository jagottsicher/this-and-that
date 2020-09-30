#include <stdio.h>
#include <math.h>
#include <time.h>
#include <unistd.h>

#include "myFunctions.h"


int x1 = 10;
int y1 = 4;
int x2 = 187;
int y2 = 25;
int delta_x;
float delta_y;
float steeple = 0.0;
int delta_y_int = 0;
int x;
int y;

int main()
{

// clear screen
// gegeben x1,y1 und x2,y2
// finde kleineren X-Wert
// finde kleiner y-wert

// berechne  delta_x und delta_y
delta_x = x1 - x2; // -175
delta_y = y1 - y2; // 21

// Berechne Steigung aus delta_y über delta_X
steeple = delta_y / delta_x; // -0.12
// Setze delta_y auf Null
delta_y = 0;

// Goto xy
// printf("\33[%d;%dH", 1, 1);
// Funktion, immer von linkns nach rechts, daher muss der punkt mit der kleineren x-koordinate gefunden werden. 
    for (x = 0; x < abs(delta_x); x++) 
    {
        printf("\33[%d;%dH*", y1 + delta_y_int, x1 + x);
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