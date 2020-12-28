#include <stdio.h>

#define F1(X) X*X
#define F2(X) ((X)*(X))
#define F3(X) ((X)*X)

int main(void) {
    int i = 1;
    int j = 2;
    int k = 3;
    int s;

    // F1(3) + F2(-1) + F3(4), precompiler turns that into 5 + 1 + 7
    // 1 + 2 * 1 + 2 F1 = 1+2+2 = 5
    // (1 -2) * (1 - 2) F2 = -1 * -1 = 1
    // ((1 + 3) * 1 + 3) F3 = 4 * 1 + 3 = 7
    // sum = 13 (!)
    s =  F1(i + j) + F2(i - j) + F3(i + k);

printf("%d",s);
return 0;
}


