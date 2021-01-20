#include <stdio.h>
#include <string.h>

int main(void) {
    char tt[20] = "9081726354";
    strcpy(tt, tt + 3);
    printf("%s\n", tt);
    //printf("%s, %d\n"), tt[9], -tt[9];


    printf("%d\n",'5');

    printf("%d - %d + %d\n", strlen(tt),tt[9],'5');
    return 0;
}
9081726354
1726354\0
