#include <stdio.h>

int main(void) {
    int i,t[5];
    for(i = 0; i < 5; i++) {
        t[i] = 2 * i; // fillling t[0] to t[4] with {0, 2, 4, 6, 8}
        printf("%d\t%d",i,t[i]);
        }

    i = 0;
    for(i = 0; i < 5; i++) {
    printf("%d\t",i);
        i += t[i];
    printf("%d\n",i);
    }
    // 0 + 0 = 0
    // 1 + 2 = 3
    // 2 + 4 = 6
    // 3 + 6 = 9
    // 4 + 8 = 12
    // 12 + 1 = 13 needed to incremented i make it possible to test the condition expression i < 5 ???
    printf("%d",i);
return 0;
}
