#include <stdio.h>
int vr = 10;

int fun1(int param) {
    int vr = 1;
    vr++;
    return vr + param;
}

int main(void) {
    printf("%d", fun1(1) + fun1(1));
return 0;
}

// output is 6, in fun1 vr is not the global vr and is with every call "reset" to 1,
