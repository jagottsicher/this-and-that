
#include <stdio.h>

int vr = 10;
int fun1(int param) {
    static int vr = 1;
    vr++;
    return vr + param;
}

int main(void) {
    printf("%d", fun1(1) + fun1(1));
    return 0;
}
