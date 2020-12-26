
#include <stdio.h>
int main(void) {
    //
    int i=10,j=20,*p,s=0;
    p = &i; // points to 10 (i)
    i++; // i = 11
    (*p)++; // i = 12
    s = i + j + *p; // s = 12 + 20 + 12 = 44

    printf("%d",s);
    return 0;
}
