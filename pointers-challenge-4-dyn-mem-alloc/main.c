#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    char *text = NULL;

    printf("Length of the text in number of chars: \n");
    scanf("%d", &size);

    text = (char *) malloc(size * sizeof(char)); //allocate size times mem of size of a char
    // text = (char *) calloc();

    // only do something, if allocation worked. if not, text = NULL
    if (text != NULL)
    {
    printf("Enter some text: \n");
    scanf(" ");
    gets(text);

    // Note: no need to dereference the string with "*text".
    // Using %s already makes calling the value stored
    // behind the pointer and not the pointer itself.
    printf("Entered text is: \"%s\"\n", text);

    }
    else
    {
    printf("Could not allocate Memory");
    exit;
    }

    free(text);
    text = NULL;
    return 0;
}