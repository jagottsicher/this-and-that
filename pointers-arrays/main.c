#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    char myString[] = "My String";
    char *ptr_toString = myString;

    printf("Iterating over myString char-by-char:\n");

    for (i = 0 ; i < strlen(myString) ; ++i)
    {
    printf("index: %d myString[%d] \"%c\" (ascii: %03d) @address &myString[%d]: %p, ptr_toString+%d --> %p with value \"%c\"\n",i,i, myString[i], (int)myString[i], i, &myString[i],i,ptr_toString+i,*(ptr_toString+i));
    }

    return 0;
}