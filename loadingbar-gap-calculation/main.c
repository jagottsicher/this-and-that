#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char teststring[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
int parts, length;
char *worksOrNot = "undef!";

int main()
{
    printf("String: %s\n",teststring);
    printf("Length: %d\n",length);
    for (int parts = 2; parts < 6; parts++)
    *worksOrNot = (((strlen(teststring) - (parts - 1)) % parts) == 0) ? "Works!" : "Fails!";

    printf("Result: %s\n", worksOrNot);
    return 0;
}
