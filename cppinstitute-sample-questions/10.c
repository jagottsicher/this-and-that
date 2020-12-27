#include <stdio.h>
#include <stdlib.h>

//struct of two ints
struct S1 {
    int p1,p2;
    };

// struct of an int, struct of two ints, and another int
struct S2 {
    int p1;
    struct S1 s1;
    int p2;
    };


int main(void) {
    // set an int to 0
    int s = 0;
    // invoke a struct type 2 and fill with 1, 2, 3, 4
    // like:
    // struct S2 {
    // int p1; // = 1
    // struct S1 s1; // = 2,3
    // int p2; // = 4
    // };

    struct S2 s2 = { 1, 2, 3, 4 };
    // prepare a pointer of same type like the struct above
    struct S2 *p;
    // claim memory for the pointer
    p = (struct S2 *)malloc(sizeof(struct S2));

    // point to already filled struct
    *p = s2;

    // the int 1 is replaced with 0
    s2.p1 = 0;

    // s is assembled
    // = 1 + 0 + 4 + 3 = 7
    s = p->p1 + s2.p1 + p->p2 + p->s1.p2; // WHY p->p1 IS 1 AND NOT 0 ???
    // WHY p->p1 IS 1 AND NOT 0 ???
    // pointer p points to the memory reserved for it NOT s2
    // *p = s2 makes copy of s2, NOT a p pointing to s2 itself. That would p = &s2 do!
    // so changing s2 does not affect the pointer p (to it own reserved memory copy of s2
    free(p);

    printf("%d",s);
    return 0;
}
