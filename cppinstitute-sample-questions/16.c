
#include <stdio.h>
int main(void) {
    FILE *f;
    int i;
    f = fopen("f","w+b");
    fputs("123",f);

    //move to beginning
    rewind(f);

    // place a 3 here
    fputs("3",f);
    fclose(f);

    // open again for reading only, read content aus an int
    f = fopen("f","rt");
    fscanf(f,"%d",&i);
    fclose(f);

printf("%d",i);
return 0;
}

// output should be 323 (overwriting 1 in 123 with a 3)
