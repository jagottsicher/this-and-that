#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


int width = 0;
int height = 0;

int main()
{

// init random generator
srand(time(NULL));

// clear screen
clearScreen();

// get screen size
width = checkAndSetConsoleDimensions('x');
height = checkAndSetConsoleDimensions('y');

printf("%d/%d", width, height);

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
for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
          (returnRandom(0,1) == 1)? {(*(ptr_array1+((i * width) + j))) = true;} : (*(ptr_array1+((i * width) + j))) = false;}
          // array1[j][i] = returnRandom(0,1);
        }
    }

// printout array1
 for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
           ((*(ptr_array1+((i * width) + j))) == true) ? printf("*") : printf(" ")
        }
    printf("\n");
    }
 
 


/*
function allocate memory
init three pointers to arrays
counter = 0

fill array1 with random numbers

clear screen

do
 if counter = even do
    show array1
    go_on = function pointer array1 pointer array2
 else
    show array2
    go_on = function pointer array2 pointer array1

while bool go_on true
}

bool function(array pointerA, array pointerB)
    iterate through array
    copy arrayB to arrayC
    fill arrayB
    compare arrayB = arrayC
        loop
            if any object != returncode = 0 break else returncode = 1

return returncode;


*/
free (ptr_array1);
free (ptr_array2);
free (ptr_array3);
}
