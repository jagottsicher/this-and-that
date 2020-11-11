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
}
