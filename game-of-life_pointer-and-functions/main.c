#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


int width = 0;
int height = 0;
int generationCounter = 0;
bool goOn = true;

bool buildArray(bool *ptr_arrayA, bool *ptr_arrayB, bool *ptr_arrayC);

int main()
{

// init random generator
srand(time(NULL));

// clear screen
clearScreen();

// get screen size
width = checkAndSetConsoleDimensions('x');
height = checkAndSetConsoleDimensions('y');

// printf("%d/%d", width, height);

// allocate memory for three pointers to arrays of size bool
bool *ptr_array1 = malloc((width * height) * sizeof(bool));
bool *ptr_array2 = malloc((width * height) * sizeof(bool));
bool *ptr_array3 = malloc((width * height) * sizeof(bool));

 // Arrays mit 0 füllen.
for (int i = 0; i < height; i++)
    {
    for (int j = 0; j < width; j++)
        {
            (*(ptr_array1+((i * width) + j))) = false;
            (*(ptr_array2+((i * width) + j))) = false;
            (*(ptr_array3+((i * width) + j))) = false;
        }
    }

// Array1 in zwei geschachtelten for Schleifen mit zufällig mit 0 und 1 füllen
for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (returnRandom(0,1) == 1)
            {
                (*(ptr_array1+((i * width) + j))) = true;
            }
            else
            {
                (*(ptr_array1+((i * width) + j))) = false;
            }
          // array1[j][i] = returnRandom(0,1);
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
for (int i = 0; i < height; i++)
    {
    for (int j = 0; j < width; j++)
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
    printf("\n");
    }
printf("\33[%d;%dH%d", height-2, width-5, generationCounter);
goOn = buildArray(ptr_array1, ptr_array2, ptr_array3);
}
else
{
//    goto 1/1
printf("\33[%d;%dH", 1, 1);
// printout array2
for (int i = 0; i < height; i++)
    {
    for (int j = 0; j < width; j++)
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
    printf("\n");
    }
printf("\33[%d;%dH%d", height-2, width-5, generationCounter);
goOn = buildArray(ptr_array2, ptr_array1, ptr_array3);
}

// temporarily counter raising
generationCounter++;
// goOn = false;

}
while (goOn == true);

free (ptr_array1);
free (ptr_array2);
free (ptr_array3);
}

bool buildArray(bool *ptr_arrayA, bool *ptr_arrayB, bool *ptr_arrayC)
{
//    iterate through array
//    copy arrayB to arrayC
for (int i = 0; i < height; i++)
    {
    for (int j = 0; j < width; j++)
        {
            *(ptr_arrayC+((i * width) + j)) = *(ptr_arrayB+((i * width) + j));
            // test only needed instead is
            //    fill arrayB
            *(ptr_arrayB+((i * width) + j)) = true;
        }
    }

return true;
}


//bool function(array pointerA, array pointerB)
//    iterate through array
//    copy arrayB to arrayC
//    fill arrayB
//    compare arrayB = arrayC
//        loop
//            if any object != returncode = 0 break else returncode = 1
//
//return returncode;
//*/



