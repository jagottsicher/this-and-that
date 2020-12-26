#include <stdio.h>
#include <string.h>

int main(void) {
    char t[20] = "ABCDEFGHIJK";
    int s = strlen(t); // s = 11
    t[3] = '\0';
    s = strlen(t); // s = 3

    // strlen counts the length of an char array (string) without the '\0' character!!!

printf("%d",s);
return 0;
}
