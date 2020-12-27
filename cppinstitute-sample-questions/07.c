
#include <stdio.h>
#include <string.h>
int main(void) {
    char t[20] = "ABCDEFGHIJK"; // l = 11
    int s = strlen(t); //s = 11
    t[3] = '\0';
    s += strlen(t); // s = 11 + 3 = 14
    strcpy(t,"ABCDEF"); // l = 6
    s += strlen(t); // 14 + 6 = 20
    strcat(t,"ABC"); // 6 + 3 = 9
    s += strlen(t); // 20 + 9 = 29

    printf("%d",s);
    return 0;
}
