#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


int width = 0;
int height = 0;
int generationCounter = 0;
bool goOn = true;

bool buildArray(bool *ptr_arrayA, bool *ptr_arrayB);

int main()
{

// init random generator
srand(time(NULL));

// clear screen
clearScreen();

// get screen size
width = checkAndSetConsoleDimensions('x')+2;
height = checkAndSetConsoleDimensions('y')+2;

// printf("%d/%d", width, height);

// allocate memory for three pointers to arrays of size bool
bool *ptr_array1 = malloc(((width) * (height)) * sizeof(bool));
bool *ptr_array2 = malloc(((width) * (height)) * sizeof(bool));
// bool *ptr_array3 = malloc(((width) * (height)) * sizeof(bool));

 // Arrays mit 0 füllen.
for (int i = 0; i < (height); i++)
    {
    for (int j = 0; j < (width); j++)
        {
            (*(ptr_array1+((i * (width)) + j))) = false;
            (*(ptr_array2+((i * (width)) + j))) = false;
//            (*(ptr_array3+((i * (width)) + j))) = false;
        }
    }

// Array1 in zwei geschachtelten for Schleifen mit zufällig mit 0 und 1 füllen
for (int i = 0; i < (height); i++)
    {
    for (int j = 0; j < (width); j++)
        {
           if (returnRandom(0,1) == 1)
           {
            (*(ptr_array1+((i * width) + j))) = true;
           }
           else
           {
            (*(ptr_array1+((i * width) + j))) = false;
           }
        }
    }

// upper lower bounds zero
for (int i = 0; i < (height); i = i + height - 1)
    {
    for (int j = 0; j < (width); j++)
        {
            (*(ptr_array1+((i * width) + j))) = false;
        }
    }

// left right bounds zero
for (int i = 0; i < (height); i++)
    {
    for (int j = 0; j < (width); j = j + width - 1)
        {
            (*(ptr_array1+((i * width) + j))) = false;
        }
    }

clearScreen();

do
{
if (generationCounter % 2 == 0)
{
//    goto 1/1
printf("\33[%d;%dH", 1, 1);
// printout array1
for (int i = 1; i < (height-1); i++)
    {
    for (int j = 1; j < (width-1); j++)
        {
            if ((*(ptr_array1+((i * width) + j))) == true)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
    // printf("\n");
    }
printf("\33[%d;%dH%d", height-4, width-10, generationCounter);
goOn = buildArray(ptr_array1, ptr_array2);
}
else
{
//    goto 1/1
printf("\33[%d;%dH", 1, 1);
// printout array2
for (int i = 1; i < (height-1); i++)
    {
    for (int j = 1; j < (width-1); j++)
        {
            if ((*(ptr_array2+((i * width) + j))) == true)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
    // printf("\n");
    }
printf("\33[%d;%dH%d", height-4, width-10, generationCounter);
goOn = buildArray(ptr_array2, ptr_array1);
}
msleep((generationCounter/5));
generationCounter++;
if (generationCounter == 1501)
    goOn = false;
}
while (goOn == true);

free (ptr_array1);
free (ptr_array2);
// free (ptr_array3);
}

bool buildArray(bool *ptr_arrayA, bool *ptr_arrayB)
{
for (int i = 1; i < (height-1); i++)
    {
    for (int j = 1; j < (width-1); j++)
        {
//            *(ptr_arrayC+((i * width) + j)) = *(ptr_arrayA+((i * width) + j));

            int living_cells_around = 0;

            if (*(ptr_arrayA+(((i-1) * width) + (j-1))) == true)
                living_cells_around++;
            if (*(ptr_arrayA+(((i-1) * width) + j)) == true)
                living_cells_around++;
            if (*(ptr_arrayA+(((i-1) * width) + (j+1))) == true)
                living_cells_around++;
            if (*(ptr_arrayA+((i * width) + (j-1))) == true)
                living_cells_around++;
            if (*(ptr_arrayA+((i * width) + (j+1))) == true)
                living_cells_around++;
            if (*(ptr_arrayA+(((i+1) * width) + (j-1))) == true)
                living_cells_around++;
            if (*(ptr_arrayA+(((i+1) * width) + j)) == true)
                living_cells_around++;
            if (*(ptr_arrayA+(((i+1) * width) + (j+1))) == true)
                living_cells_around++;

            // conclusion and actions
            if (*(ptr_arrayA+((i * width) + j)) == true)
            {
                if (living_cells_around < 2)
                    {
                    *(ptr_arrayB+((i * width) + j)) = false;
                    }
                if (living_cells_around > 3)
                    {
                    *(ptr_arrayB+((i * width) + j)) = false;
                    }
                if ((living_cells_around == 2) || (living_cells_around == 3))
                    {
                    *(ptr_arrayB+((i * width) + j)) = true;
                    }
            }
            else
            {
                *(ptr_arrayB+((i * width) + j)) = false;
            }

            if (*(ptr_arrayA+((i * width) + j)) == false)
            {
                if ((living_cells_around == 3))
                {
                *(ptr_arrayB+((i * width) + j)) = true;
                }
            }

        }
    }

return true;
}
