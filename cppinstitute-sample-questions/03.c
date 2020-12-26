#include <stdio.h>

int main(void) {
    int i = -1,j = -i; // i=-1  j=1
    int w1,w2;
    w1 = (i > 0) && (j < 0) || (i < 0) && (j > 0); // false AND false OR true AND true = true
    w2 = (i <= 0) || (j >= 0) && (i >= 0) || (j <= 0); // true OR true AND false OR false = true
    printf("%d",w1 == w2); // true = true ? true!
    return 0;
}
