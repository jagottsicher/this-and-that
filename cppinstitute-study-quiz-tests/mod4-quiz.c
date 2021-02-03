#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, t[5];
    for (i = 0; i < 5; i++) {
        t[i] = 2 * i;
        printf("%d %d\n",i, t[i]);
    }

    i = 0;
    printf("\n\n");

    for (i = 0; i < 5; i++) {
        i += t[i];
        printf("%d \n",i);
    }

    printf("%d\n",i);
    return 0;
}
