#include <stdio.h>
int vr = 10;

int fun1(int param) {
    int vr;
    vr = 2;
    return vr + param;
}

int fun2(int param) {
    vr += param;
    return param + 1;
}

int main(void) {
    int s;
    vr /= 2;
    s = fun1(vr) + fun2(vr);
    printf("%d",s);
return 0;
}

// fun1(5) = 7
// fun2 (5) = 6 (internal vr is autoset to 0, then raised by 5 and 5+1 returned
// Sum = 13 !!!
