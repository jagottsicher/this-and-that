#include <stdio.h>

// returns two times input
int add(int par) {
par += par;
return par;
}

// returns a sum of two int
int add2(int p1, int p2) {
return p1 + p2;
}

int main(void) {
    int var = 0;
    var = add2(add(2),add(4)); // 4 +8 = 12
    var = add2(var,var); // 12 + 12 = 24
printf("%d",var);
return 0;
}
