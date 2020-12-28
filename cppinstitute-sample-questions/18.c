
#include <stdio.h>
int main(void) {
    FILE *f;

    // creat a string, set a pointer to address where 'a' is stored in string (Position 2)
    char s[] = "Mary had a little lamb", *p = s + 2;
    // address pointer like an array and go 4 position forward, add termination sequence
    p[4] = '\0';

    printf("%s\n",s); // "Mary h" cause with referencing pointer terminated after 6 chars
    printf("%s\n",p); // "ry h" cause the pointer points to position 2 and is output to termination char only

    f = fopen("f","wb");
    fputs(s,f);
    fclose(f);
return 0;
}

// six bytes are written
