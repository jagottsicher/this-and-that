// TODO (jens#1#11/07/20): working, but should check for identical arrays only switching (dynamically balance) in that case: stop

// TODO (jens#1#11/07/20): Put repeated output and copying arrays in functions

// TODO (jens#1#11/07/20): Make that functions accepting not arrays, but pointers. to speedup things

// TODO (jens#1#11/08/20): Read env-variables: LINES and COLUMNS and move output to the last three bottom lines ...

// TODO (jens#1#11/08/20): Make output at last 3 bottom lines scrolling up properly ...

//Linefeed  to put separated next words to new line if thxt longer than COLUMNS

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>

#include "myFunctions.h"


// Breite und Höhe des Arrays definieren
//#define WIDTH = 30;
//#define HEIGHT = 30;
int width = 200;
int height = 50;
int array1[200][50];
int array2[200][50];
int arrayTemp[200][50];
int i;
int j;
int living_cells_around = 0;
int go_on = true;
int generation_counter = 0;

// int not_same = 1;

void main(void)
{

// Arrays mit 0 füllen.
for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            array1[j][i] = 0;
            array2[j][i] = 0;
            arrayTemp[j][i] = 0;
        }
    }

// Array1 in zwei geschachtelten for Schleifen mit zufällig mit 0 und 1 füllen
srand(time(NULL));
for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            array1[j][i] = returnRandom(0,1);
        }
    }

// anykey and clear screen
clear();

// main loop
while (go_on)
{

//    goto 1/1
printf("\33[%d;%dH", 1, 1);

// if generation odd
if (generation_counter % 2 == 0)
{
    //    output array1
    //    fill array+2
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
        if (array1[j][i] == 1)
            {
            printf("*");
            }
            else
            {
            printf(" ");
            }
        }
        printf("\n");
    }
    // array2 in zwei geschachtelten schleifen entlangehen und nach regel befüllen
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
        // anzahl lebender nachbarn auf 0
        living_cells_around = 0;

        // rundum lebende nachbarn zählen, ränder werden ignoriert
            if (array1[j-1][i-1] == 1)
                living_cells_around++;
            if (array1[j][i-1] == 1)
                living_cells_around++;
            if (array1[j+1][i-1] == 1)
                living_cells_around++;
            if (array1[j-1][i] == 1)
                living_cells_around++;
            if (array1[j+1][i] == 1)
                living_cells_around++;
            if (array1[j-1][i+1] == 1)
                living_cells_around++;
            if (array1[j][i+1] == 1)
                living_cells_around++;
            if (array1[j+1][i+1] == 1)
                living_cells_around++;
            if (array1[j][i] == 1)
            {
                if (living_cells_around < 2)
                    {
                    array2[j][i] = 0;
                    arrayTemp[j][i] = 0;
                    }
                if (living_cells_around > 3)
                    {
                    array2[j][i] = 0;
                    arrayTemp[j][i] = 0;
                    }
                if ((living_cells_around == 2) || (living_cells_around == 3))
                    {
                    array2[j][i] = 1;
                    arrayTemp[j][i] = 0;
                    }
            }
            else
            {
                array2[j][i] = 0;
                arrayTemp[j][i] = 0;
            }

            if (array1[j][i] == 0)
            {
                if ((living_cells_around == 3))
                {
                array2[j][i] = 1;
                arrayTemp[j][i] = 0;
                }
            }
        }
    }
}
else
{
    //    output array2
    //    fill array+1
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
        if (array2[j][i] == 1)
            {
            printf("*");
            }
            else
            {
            printf(" ");
            }
        }
        printf("\n");
    }
    // array1 in zwei geschachtelten schleifen entlangehen und nach regel befüllen
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
        // anzahl lebender nachbarn auf 0
        living_cells_around = 0;
        // rundum lebende nachbarn zählen, ränder werden ignoriert
            if (array2[j-1][i-1] == 1)
                living_cells_around++;
            if (array2[j][i-1] == 1)
                living_cells_around++;
            if (array2[j+1][i-1] == 1)
                living_cells_around++;
            if (array2[j-1][i] == 1)
                living_cells_around++;
            if (array2[j+1][i] == 1)
                living_cells_around++;
            if (array2[j-1][i+1] == 1)
                living_cells_around++;
            if (array2[j][i+1] == 1)
                living_cells_around++;
            if (array2[j+1][i+1] == 1)
                living_cells_around++;
            if (array2[j][i] == 1)
            {
                if (living_cells_around < 2)
                    array1[j][i] = 0;
                if (living_cells_around > 3)
                    array1[j][i] = 0;
                if ((living_cells_around == 2) || (living_cells_around == 3))
                    array1[j][i] = 1;
            }
            else
            {
                array1[j][i] = 0;
            }
            if (array2[j][i] == 0)
            {
                if ((living_cells_around == 3))
                {
                    array1[j][i] = 1;
                }
            }
        }
    }
}
printf("Generation #%d\n", generation_counter);
msleep(50);
generation_counter++;
}

/*
Dead code as a reminder of the rules
Any live cell with fewer than two live neighbours dies, as if caused by underpopulation.
Any live cell with more than three live neighbours dies, as if by overcrowding.
Any live cell with two or three live neighbours lives on to the next generation.
Any dead cell with exactly three live neighbours becomes a live cell.


for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
        if (array1[j][i] == arrayTemp[j][i])
            go_on = false;
        }
    }
*/

}
