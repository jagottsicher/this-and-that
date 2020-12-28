
#include <stdio.h>

int main(void) {
    //prepare a file pointer
    FILE *f;
    // a char and a long
    char s[] = "To be or not to be";
    long i;

    // open filepointer for writing
    f = fopen("f","w+b");

    // placing string in file
    fputs(s,f);

    // move forward to 2 before file end
    fseek(f,-2,SEEK_END);

    // assign the spot in the file to a long
    i = ftell(f);

    // close file
    fclose(f);

    // output the long
    printf("%d",i);
return 0;
}
// guessing 16 (correct) - length of string is 18 and minus two means 16
