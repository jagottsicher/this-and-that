#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 2 * 2 / 2 + 2 * 2 - 1 / 2 % 2;
    printf("Ergebnis: %d\n", i);
    char c;
    c = ('z' - 'a');
    printf("Ergebnis: %c\n", c);
    int j = 100;
    if (j >= 100)
        j++;
    if (j > 101);
        j++;
    printf("Ergebnis: %d\n", j);

    return 0;
}
