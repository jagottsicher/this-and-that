#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *ptr_aCharPointer; // declaration of a simple char pointer

    // initial memory allocation
    ptr_aCharPointer = (char *) malloc(15 * sizeof(char)); // reserve memory for this pointer, casting char malloc 15 chars
    strcpy(ptr_aCharPointer, "jens-schendel"); //copy content to string
    printf("Aktuell lautet der String: \"%s\", Addresse: %p, Length: %d\n", ptr_aCharPointer, ptr_aCharPointer, (int)strlen(ptr_aCharPointer) );

    //  memory re-allocation
    ptr_aCharPointer = (char *) realloc(ptr_aCharPointer, 20 * sizeof(char)); // reserve memory for this pointer, casting char malloc 15 chars
    strcat(ptr_aCharPointer, ".com"); //add content to string
    printf("Nun lautet der String: \"%s\", Addresse: %p, Length: %d\n", ptr_aCharPointer, ptr_aCharPointer, (int)strlen(ptr_aCharPointer) );

    free(ptr_aCharPointer);
    return 0;
}
