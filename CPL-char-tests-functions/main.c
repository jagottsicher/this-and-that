#include <stdio.h>
#include <stdlib.h>

int main()
{
int c;
c = 97; // c represents an 'a'
if (isalpha(c) != 0) {
        printf("isalpha(): c is %d and represents the character \'%c\'\n", c, c);
    }
c = c - 32;
if (isupper(c) != 0) {
        printf("isupper(): c is now %d and represents the character \'%c\'\n", c, c);
    }
c = tolower(c); // convert to lower case (subtracts 32) if char isalpha
printf("tolower(): c is now %d and represents the character \'%c\'\n", c, c);

c = c - 48; // make is ANSI '1'
if (isdigit(c) != 0) {
        printf("isdigit(): c is %d and represents the character \'%c\'\n", c, c);
    }
c = c + 16; // is 65 again
if (isalnum(c) != 0) {
        printf("isalnum(): c is %d and represents the character \'%c\'\n", c, c);
    }
c = c -33; // is SPACE now
if (isspace(c) != 0) {
        printf("isspace(): c is %d and represents the character \'%c\'\n", c, c);
    }



return 0;
}
