#include <stdio.h>
#include <stdlib.h>

void CopyStringToString(char from[], char to[]);

int main(void)
{
    char stringOne[] = "This is the SOURCE string.";
    char stringTwo[] = "This is the DESTINATION String.";

    printf("Before using CopyStringToString()-function\nSource: \"%s\"\nDestination: \"%s\"\n\n", stringOne, stringTwo);
    CopyStringToString(stringOne, stringTwo);
    printf("After using CopyStringToString()-function\nSource: \"%s\"\nDestination: \"%s\"\n", stringOne, stringTwo);
}

// version without any pointer, just strings (so arrays of chars)
//void CopyStringToString(char from[], char to[])
//{
//int i;
//
//for (i = 0; from[i] != '\0'; i++)
//    to[i] = from[i];
//
//to[i] = '\0';
//}

// version with pointers
//void CopyStringToString(char *from, char *to)
//{
//for (; *from != '\0'; from++, to++)
//    *to = *from;
//
//*to = '\0';
//}

// more sophisticated version with pointers in a while loop
//void CopyStringToString(char *from, char *to)
//{
//while (*from != '\0')
//    *to++ = *from++;
//
//*to = '\0';
//}

// even more sophisticated version with pointers in a while loop, NOT  '\0' means TRUE, so 0 means FALSE
void CopyStringToString(char *from, char *to)
{
while (*from)
    *to++ = *from++;

*to = '\0';
}
