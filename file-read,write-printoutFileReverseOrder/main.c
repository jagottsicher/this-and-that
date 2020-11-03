#include <stdio.h>
#include <stdlib.h>

#define FILENAME "test.txt"

int main()
{
    FILE *ptr_file = NULL;

    int counter = 0;
    int i = 0;

    ptr_file = fopen(FILENAME, "r");

    if (ptr_file == NULL)
            return -1;

    // move to the end of the file
    fseek(ptr_file, 0, SEEK_END);

    // get the position of the filecounter and store it to counter
    counter = ftell(ptr_file);

    // As long i isn't as big as counter (filelength)
    while (i < counter)
    {
        // raise i by 1
        i++;
        // move to the end of the file minus 1, 2, 3 and so on ... so, from the end to the beginning
        fseek(ptr_file, -i, SEEK_END);
        // at each position print a char, which is read at the actual position
        printf("%c", fgetc(ptr_file));
    }

    printf("\n");
    fclose(ptr_file);
    ptr_file = NULL;


    return 0;
}
