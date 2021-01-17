#include <stdio.h>
#include <stdlib.h>


struct S1 {
    int p1,p2;
};

struct S2 {
    int p1;
    struct S1 s1;
    int p2;
};

int main(void) {
    // result
    int s = 0;
    // struct s2 with four value, 2 and three should be type strct s1
    struct S2 s2 = { 1, 2, 3, 4 };
    // pointer p defined of struct
    struct S2 *p;
    // pointer p get its own memory
    p = (struct S2 *)malloc(sizeof(struct S2));
    // pointer p spoints to structure s2 (first element)
    *p = s2;
    // first element of struct (1) is set to zero (pointer has copy!!!)
    s2.p1 = 0;
    // 1 + 0 + 4 + 3 = 8
    s = p->p1 + s2.p1 + p->p2 + p->s1.p2;

    free(p);
    printf("%d",s);
    return 0;
}





//#include <stdio.h>
//
//int fun (int n) {
//    if (n == 0)
//        return 0;
//    return n + fun(n - 1);
//}
//
//int main(void) {
//    printf("%d", fun(3));
//    return 0;
//}