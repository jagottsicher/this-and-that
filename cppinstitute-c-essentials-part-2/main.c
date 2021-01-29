//// ### Part 2F
//
///* ######################################## */
//
//// ### 6.2.1 Module 6 - Quiz
//// found by chance
//#include <stdio.h>
//
//int f1(int v) {
//    v *= v;
//    return v;
//}
//
//int f2(int p1, int p2) {
//    return p1 / p2;
//}
//
//int main(void) {
//    int v = 0;
//    // f2 takes two ints 2/4 = 0.5 as int: 0
//    // f1 of zero = anyway zero, but v different scope so stays 0
//    // f1 of zero: same result
//    f1(f1(f2(2,4)));
//
//    printf("%d",v);
//    return 0;
//}

//// ### QUESTION 1
//#include <stdio.h>
//
//struct S1 {
//    int p1;
//};
//
//struct S2 {
//    int p1;
//    struct S1 s1;
//};
//
//int main(void) {
//    struct S2 s2 = { 4, 5 };
//
//    printf("%d",s2.p1 + s2.s1.p1);
//    return 0;
//}
//
//// ### QUESTION 2
//#include <stdio.h>
//#include <stdlib.h>
//
//struct S1 {
//    int p1,p2;
//};
//
//struct S2 {
//    int p1;
//    struct S1 s1;
//    int p2;
//};
//
//int main(void) {
//    int s = 0;
//    struct S2 s2 = { 1, 2, 3, 4 };
//    struct S2 *p;
//    p = (struct S2 *)malloc(sizeof(struct S2));
//    *p = s2;
//    s2. p1 = 0;
//    s = p->p1 + s2.p1 + p->p2 + p->s1.p2;
//    free(p);
//
//    printf("%d",s);
//    return 0;
//}
//
//// ### QUESTION 3
//#include <stdio.h>
//#include <stdlib.h>
//
//struct S1 {
//    int p1,p2;
//};
//
//struct S2 {
//    int p1;
//    struct S1 s1;
//    int p2;
//};
//
//int main(void) {
//    int s = 0;
//    struct S2 s2 = { 1, 2, 3, 4 };
//    struct S2 *p;
//    p = (struct S2 *)malloc(sizeof(struct S2));
//    *p = s2;
//    s2. p1 = 0;
//    s = p->p1 + s2.p1 + p->p2 + p->s1.p2;
//    free(p);
//
//    printf("%d",s);
//    return 0;
//}
//
//// ### QUESTION 4
//#include <stdio.h>
//#include <string.h>
//
//void f(char *s) {
//    s[1] = '\0';
//}
//
//int main(void) {
//    char p1[] = "ABC", p2[] = "XYZ";
//    f(p1);
//    f(p2);
//
//    printf("%d",strlen(p1) + strlen(p2));
//    return 0;
//}
//
//// ### QUESTION 5
//#include <stdio.h>
//#include <string.h>
//
//void cp(char *p1,char *p2) {
//    int i,j;
//
//    j = 0;
//    for(i = 0; i < strlen(p2); i += 2)
//        p1[j++] = p2[i];
//    p1[j] = '\0';
//}
//
//int main(void) {
//    char str[100];
//
//    cp(str,"ABCD");
//
//    printf("%s",str);
//    return 0;
//}
//
//// ### QUESTION 6
//#include <stdio.h>
//int fun(int n) {
//    return n - 1;
//}
//
//int main(void) {
//    printf("%d",fun(fun(fun(fun(fun(3))))));
//    return 0;
//}

// ### QUESTION 7
//#include <stdio.h>
//int fun(int n) {
//    if(n == 0)
//      	return 0;
//    return n + fun(n - 1);
//}
//
//int main(void) {
//    printf("%d",fun(3));
//    return 0;
//}

//// ### QUESTION 8
////prog MARY HAD A LITTLE LAMB
//
//#include <stdio.h>
//#include <string.h>
//
//int main(int argc, char *argv[]) {
//    printf("%d", argc + strlen(argv[1]));
//    return 0;
//}
//
//// ### QUESTION 9
//#include <stdio.h>
//
//char fun(char *n, int m) {
//    return *(n + 2 * m);
//}
//
//int main(void) {
//    printf("%c",fun("aAbBcCdD",1));
//    return 0;
//}
//
//// ### QUESTION 10
//#include <stdio.h>
//char fun(char *n, int m) {
//    // You are NOT handling over a String, but a pointer to the first char of a string
//    // to that pointer (!) is added 2, so pointer arithmetric. makes it pointing to 'b'
//    // you have a pointer to "bBcCdD" now. From this not element zero, but the single element 1,
//    // means the char the pointer points to, so B (not b) is returned
//    return (m+2)[n];
//}
//
//int main(void) {
//    printf("%c",fun("aAbBcCdD",1));
//    return 0;
//}
//
//// ### 6.3.1 Module 6 - Test
//// found by chance
//#include <stdio.h>
//
//int i = 1;
//int *f(void) {
//    return &i;
//}
//
//int main(void) {
//    int i = 0;
//    i = *f();
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//
//int f(int t[]) {
//    return t[0] + t[2];
//}
//
//int main(void) {
//    int i,a[] = { -2,-1,0,1,2 };
//    i = f(a + 2);
//
//    printf("%d",i);
//    return 0;
//}
//
//#include <stdio.h>
//
//struct S {
//    int a[2];
//};
//
//int main(void) {
//    struct S S[2];
//    int i;
//    for(i = 0; i < 2; i++)
//      	S[i].a[1-i] = 4 * !i;
//    printf("%d",S[0].a[1]);
//    return 0;
//}

//#include <stdio.h>
//int f(int t[2][]) {
//    return t[0][0] + t[1][0];
//}
//
//int main(void) {
//    int i,a[2][2] = { {-2,-1},{1,2} };
//    i = f(a + 2);
//
//    printf("%d",i);
//    return 0;
//}
//

//#include <stdio.h>
//
//int f(int t[][]) {
//    return t[0][0] + t[1][0];
//}
//
//int main(void) {
//    int i,a[2][2] = { {-2,-1},{1,2} };
//    i = f(a + 2);
//
//    printf("%d",i);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//void f(char *s,int i) {
//    *(s + i) = '\0';
//}
//
//int main(void) {
//    char a[] = { 'a','b','c','d' };
//    f(a+1,1);
//
//    printf("%d",strlen(a));
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//void f(char *s,int i) {
//    *(s + i) = '\0';
//}
//
//int main(void) {
//    char a[] = { 'a','b','c','d' };
//    f(a[1],1);
//
//    printf("%d",strlen(a));
//    return 0;
//}
//SEG FAULT!!!

//#include <stdio.h>
//int i = 2;
//int *f(void) {
//    return &i;
//}
//
//int main(void) {
//    int *i;
//    i = f();
//
//    printf("%d",++(*i));
//    return 0;
//}

//// ### QUESTION 1
//#include <stdio.h>

// definition of a data type struct with one int member of same same
//struct S {
//    int S;
//};
//
//int main(void) {
//    // struct of same name
//    struct S S;
//    // in the member is stored the size of struct and size of implemenation = 1
//    S.S = sizeof(struct S) / sizeof(S);
//
//    printf("%d", S.S);
//    return 0;
//}

//
//// ### QUESTION 2
//#include <stdio.h>
//
//// struct holding one pointer to char
//struct S {
//    char *p;
//};
//
//int main(void) {
//    // pointer to string "abcd"
//    char *p = "abcd";
//    // 3 times struct in an array of pointer
//    struct S S[2];
//        int i;
//    //
//    //  i       0       1       2
//    //  S[].p   a       b       c (pointer to)
//    for(i = 0; i < 2; i++)
//      	S[i].p = p + i;
//    // returns pointer at struct S[1] = b
//    printf("%c",S[1].p[0]);
//    return 0;
//}

//// ### QUESTION 3
//#include <stdio.h>
//#include <string.h>
//// struct definition of an array of 4 other structs
//struct Q {
//    char S[3];
//};
//
//// struct definition of a struct of struct
//struct S {
//    struct Q Q;
//};
//
//int main(void) {
//    struct S S = { '\0', '\0','\0' };
//    // first and last Char are set, but second is still \0 so length reportet by strlen = 1
//    S.Q.S[0] = 'A';
//    S.Q.S[2] = 'B';
//
//    printf("%d",strlen(S.Q.S));
//    return 0;
//}
//
//// ### QUESTION 4
//#include <stdio.h>
//
//// struct type S with one member int S
//struct S {
//    int S;
//};
//
//// a function receiving struct type S
//// changing strcut's member -1
//int f(struct S s) {
//    return --s.S;
//}
//
//// main
//int main(void) {
//    int i;
//    // setting up a struct and filling the (int) member inside with a 2
//    struct S S = { 2 };
//    // int equals return of function so: !
//    i = f(S);
//
//    printf("%d",i);
//    return 0;
//}
//
//// ### QUESTION 5
//#include <stdio.h>
//#include <string.h>
//
//struct Q {
//    char S[3];
//};
//
//struct S {
//    struct Q Q;
//};
//
//int main(void) {
//    struct S S = { '\0', '\0','\0' };
//    S.Q.S[0] = 'A';
//    S.Q.S[1] = 'B';
//
//    // strlen = 2 because member 0 and 1 changed to non-'\n'
//    printf("%d",strlen(S.Q.S));
//    return 0;
//}
//
//// ### QUESTION 6
//#include <stdio.h>
//int f(char t[]) {
//    return t[0] - t[-1];
//}
//
//int main(void) {
//    int i = 2;
//    i -= f("ABDGK" + 1); // i = 2 - 'B' - 'A' = 2 - 1 = 1
//
//    printf("%d",i);
//    return 0;
//}
//
//// ### QUESTION 7
//#include <stdio.h>
//#include <stdlib.h>
//
//struct S {
//    int	  a;
//    struct S *b;
//};
//
//int main(void) {
//    struct S *x = malloc(sizeof(struct S)); // pointer of type struct S allocating memory
//    struct S *y = malloc(sizeof(struct S)); // another pointer of type struct S allocating memory
//    // small circling list, b->b->b-> has same meaning as one time b-> so x->b->a, so x referencing to y to its a equals 4
//    x->a = 2;
//    x->b = y;
//    y->a = 4;
//    y->b = x;
//
//    printf("%d",x->b->b->b->a);
//    free(x); free(y);
//    return 0;
//}
//
//// ### QUESTION 8
//#include <stdio.h>
//
//struct Q {
//    int a,b,c;
//};
//
//struct S {
//    int a,b,c;
//    struct Q Q;
//};
//
//int main(void) {
//    struct Q Q = { 3,2,1 };
//    struct S S = { 4,5,6 };
//    S.Q = Q;
//
//    printf("%d",S.b - S.Q.b);
//    return 0;
//}
//
//// ### QUESTION 9
//#include <stdio.h>
//
//int f(char t[]) {
//    return t[1] - t[0];
//}
//
//int main(void) {
//    int i = 2;
//    // pointer to 'B" given into function, 'D' - 'B' = 2, 2 - 2 = 0
//    i -= f("ABDGK" + 1);
//
//    printf("%d",i);
//    return 0;
//}

//// ### QUESTION 10
// same like above
//#include <stdio.h>
//
//struct Q {
//    int a,b,c;
//};
//
//struct S {
//    int a,b,c;
//    struct Q Q;
//};
//
//int main(void) {
//    struct Q Q = { 3,2,1 };
//    struct S S = { 4,5,6 };
//    S.Q = Q;
//
//    printf("%d",S.b - S.Q.b);
//    return 0;
//}
//
//// ### QUESTION 11
//#include <stdio.h>
//
//struct S {
//    int S;
//};
//
//int main(void) {
//    struct S S;
//    S.S = sizeof(struct S) / sizeof(S);
//
//    printf("%d", S.S);
//    return 0;
//}
//
//// ### QUESTION 12
//#include <stdio.h>
//#include <stdlib.h>
//
//struct S {
//    int	  a;
//    struct S *b;
//};
//
//int main(void) {
//    struct S *x = malloc(sizeof(struct S));
//    struct S *y = malloc(sizeof(struct S));
//    x->a = 2;
//    x->b = y;
//    y->a = 4;
//    y->b = x;
//
//    printf("%d",x->b->b->b->a);
//    free(x); free(y);
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct S {
//    int	  a;
//    struct S *b;
//};
//
//int main(void) {
//    struct S *x = malloc(sizeof(struct S));
//    struct S *y = malloc(sizeof(struct S));
//    struct S *p;
//    x->a = 2;
//    x->b = y;
//    y->a = 4;
//    y->b = x;
//    p = x;
//    p = p->b->b->b->b;
//    // dont check too deep. all the mess above doesn't matter!
//    printf("%d",p->a);
//    free(x); free(y);
//    return 0;
//}

//
//// ### QUESTION 13
//#include <stdio.h>
//#include <string.h>
//
//void f(char *s,int i) {
//    // *('c') = '\0', so String is now "ab\0d"
//    *(s + i) = '\0';
//}
//
//int main(void) {
//    char a[] = { 'a','b','c','d' }; // String "abcd"
//    f(a+1,1); // f('b',1)
//
//    printf("%d",strlen(a)); // 2
//    return 0;
//}
//
//// ### QUESTION 14
//#include <stdio.h>
//
//int f(int t[][]) {
//    return t[0][0] + t[1][0];
//}
//
//int main(void) {
//    int i,a[2][2] = { {-2,-1},{1,2} };
//    i = f(a + 2);
//
//    printf("%d",i);
//    return 0;
//}
//
//// ### QUESTION 15
//#include <stdio.h>
//
//int f(int t[]) {
//    return t[0] + t[2];
//}
//
//int main(void) {
//    int i,a[] = { -2,-1,0,1,2 };
//    i = f(a + 2);
//    // 0 given into function, returning 2
//    printf("%d",i);
//    return 0;
//}
//
//// ### QUESTION 16
//#include <stdio.h>
//// global value for i
//int i = 2;
//// printf("global i = %d\n",i);
//
//// f is a pointer to function and will return value 2
//int *f(void) {
//    printf("in f() = %d\n",i);
//    return &i;
//}
//
//int main(void) {
//    // a pointer i is created, NOT a pointer to the global char i
//    int *i;
//    // i = 0, because here i is a pointer???
//    printf("in main i =  %d\n",i);
//    i = f();
//    // now i (here) is 2
//    printf("after f() i = %d\n",i);
//    printf("*i = %d\n",*i);
//
//    // value of pointer raised by 1 = 3
//    printf("%d",++(*i));
//    return 0;
//}
//
//// ### QUESTION 17
//#include <stdio.h>
//
//// This i is in global scope
//int i = 1;
//// f returns the value if the global i so 1
//int *f(void) {
//    return &i;
//}
//
//int main(void) {
//    // i is local to main!
//    int i = 0;
//    // Returnvalue!
//    i = *f(); // i is set to 1
//    printf("%d",i);
//    return 0;
//}
//
//// ### QUESTION 18
//#include <stdio.h>
//int f(char t[]) {
//    return t[0] - t[-1];
//}
//
//int main(void) {
//    int i = 2;
//    // 2 - f('B') = 2 - ('B' - 'A') = 2 - 1 = 1
//    i -= f("ABDGK" + 1);
//
//    printf("%d",i);
//    return 0;
//}
//
//// ### QUESTION 19
//#include <stdio.h>
//
//struct S {
//    int S;
//};
//
//int f(struct S s) {
//    return --s.S;
//}
//
//int main(void) {
//    int i;
//    struct S S = { 2 };
//    // f(2) struct member is decremented by 1: 2 - 1 = 1
//    i = f(S);
//
//    printf("%d",i);
//    return 0;
//}
//
//// ### QUESTION 20
//#include <stdio.h>
//
//struct S {
//    int a[2];
//};
//
//int main(void) {
//    // an array of structs type S (with two integer in)
//    struct S S[2];
//
//    int i;
////        a0 a1
////    S 0  ?  4 <--- This is the value looking for
////    S 1  0  ?
//    for(i = 0; i < 2; i++)
//      	S[i].a[1-i] = 4 * !i;
//
//    printf("%d",S[0].a[1]); // is 4
//    return 0;
//}
//
///* ######################################## */
//
//// ### 7.2.1 Module 7 - Quiz
//// ### QUESTION 1
//#include <stdio.h>
//
//int main(void) {
//    FILE *f;
//    char s[] = "Mary had a little lamb", *p = s + 2;
//    p[4] = '\0';
//
//    f = fopen("f", "wb");
//    fputs(s, f);
//    fclose(f);
//    return 0;
//}
//
//// ### QUESTION 2
//#include <stdio.h>
//
//int main(void) {
//    FILE *f;
//    int  i;
//
//    f = fopen("f", "w+b");
//    fputs("123", f);
//    rewind(f);
//    fputs("3", f);
//    fclose(f);
//    f = fopen("f", "rt");
//    fscanf(f, "%d", &i);
//    fclose(f);
//
//    printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 3
//what to do to use errno?
//declare function
//include proper headerfile
//declare variable
//
//// ### QUESTION 4
//#include <stdio.h>
//
//int main(void) {
//    FILE *f;
//    char s[] = "To be or not to be";
//    long i;
//
//    f = fopen("f", "w+b");
//    fputs(s, f);
//    fseek(f, -2, SEEK_END);
//    i = ftell(f);
//    fclose(f);
//
//    printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 5
//FILE *f = fopen("f", "w");
//what allowed?
//write
//read
//update
//
//// ### QUESTION 6
//#include <stdio.h>
//
//int main(void) {
//    FILE *f;
//    int  i;
//
//    f = fopen("f", "wb");
//    fputs("123", f);
//    fclose(f);
//    f = fopen("f", "rt");
//    fscanf(f, "%d", &i);
//    fclose(f);
//
//    printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 7
//#include <stdio.h>
//
//int main(void) {
//    FILE *f;
//    int  i;
//
//    f = fopen("f", "wb");
//    fclose(f);
//    f = fopen("f", "rb");
//    fseek(f, 0, SEEK_END);
//    i = ftell(f);
//    fclose(f);
//
//    printf("%d",i);
//    return 0;
//}
//
//// ### QUESTION 8
//#include <stdio.h>
//
//int main(void) {
//    FILE *f;
//    int  i;
//
//    f = fopen("f", "wb");
//    fwrite(f, 2, 1, f);
//    fclose(f);
//    f = fopen("f", "rb");
//    fseek(f, 0, SEEK_END);
//    i = ftell(f);
//    fclose(f);
//
//    printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 9
//stderr is shown where?
//screen
//stderr.log
//nowhere
//
// ### QUESTION 10
//#include <stdio.h>
//
//int main(void) {
//    FILE *f;
//    char s[] = "ABC";
//    char *p = "DEF";
//    int i=123;
//    char c='\'';
//    int size;
//
//    f = fopen("f", "wb");
//    // writing binary: so i is 3 byte, String ABC\0 i= 5 bytes, value pointer to DEF = 3 Bytes, string \' = 2 byte
//    fprintf(f,"%d %s %s %s",i,s,p,c);
//    fseek(f, 0, SEEK_END);
//    size = ftell(f);
//    printf("%d",size);
//    fclose(f);
//    return 0;
//}
//
//// ### 7.3.1 Module 7 - Test

//#include <stdio.h>
//
//int main(void) {
//    FILE *f;
//    int i = fprintf(f, "Hello!");
//
//    printf("%d", i == EOF);
//    return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//    FILE f;
//    f = fopen("file", "wb");
//
//    printf("%d", f != NULL);
//    fclose(f);
//    return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//    FILE *f = fopen("file", "w");
//    int i;
//
//    fputs("12A",f);
//    fclose(f);
//
//    f = fopen("file", "r");
//    fseek(f, 0, SEEK_END);
//    i = ftell(f);
//    fclose(f);
//
//    printf("%d", i);
//    return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//    int i;
//    i = fprintf(stderr, "Hello!");
//
//    printf("%d", i == EOF);
//    return 0;
//}
//
//#include <stdio.h>
//
//int i = 0;
//
//int *f(int *i) {
//    (*i)++;
//    return i;
//}
//
//int main(void) {
//    int i = 1;
//    i = *f(&i);
//
//    printf("%d", i);
//    return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//    FILE *f = fopen("file", "w");
//    int i = fputs("Hello!", f);
//
//    printf("%d", i != EOF);
//    return 0;
//}

//int main(void) {
//    FILE *f;
//
//    f = fopen("file", "wb");
//    printf("%d", f != NULL);
//    fclose(f);
//    return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//    char s[20];
//    FILE *f = fopen("file", "w");
//    int i = fputs("12A", f);
//    fclose(f);
//
//    f = fopen("file", "r");
//    fgets(s, 20, f);
//    puts(s);
//    fclose(f);
//    return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//    FILE *f;
//    f = fopen("file", "wb");
//
//    printf("%d", f != NULL);
//    fclose(f);
//    return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//    FILE *f = fopen("file", "w");
//    float f;
//
//    fputs("12A", f);
//    fclose(f);
//    f = fopen("file", "r");
//    fscanf(f, "%f", &f);
//    fclose(f);
//
//    printf("%f", f);
//    return 0;
//}
//
//#include <stdio.h>
//
//int main(void) {
//    FILE *f = fopen("file", "w");
//    char c;
//
//    fputs("12A", f);
//    fclose(f);
//    f = fopen("file", "r");
//    fscanf(f, "%c", &c);
//    fclose(f);
//
//    printf("%c", c);
//    return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//    FILE *f = fopen("file", "w");
//    int i;
//
//    fputs("12A", f);
//    fclose(f);
//    f = fopen("file", "r");
//    fseek(f);
//    i = ftell(f, 0, SEEK_END);
//    fclose(f);
//
//    printf("%d", i);
//    return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//    int i;
//    i = fprintf(stdin, "Hello!");
//
//    printf("%d", i == EOF);
//    return 0;
//}


//// ### QUESTION 1
//#include <stdio.h>
//
//int main(void) {
//    FILE *f = fopen("file", "w");
//    char c;
//
//    fputs("12A", f);
//    fclose(f);
//    f = fopen("file", "r");
//    fscanf(f, "%c", &c);
//    fclose(f);
//
//    printf("%c", c);
//    return 0;
//}
//
//// ### QUESTION 2
//#include <stdio.h>
//
//int main(void) {
//    FILE *f;
//    f = fopen("file", "wb");
//
//    printf("%d", f != NULL);
//    fclose(f);
//    return 0;
//}
//
//// ### QUESTION 3
//#include <stdio.h>
//
//int main(void) {
//    FILE f;
//    f = fopen("file", "wb");
//
//    printf("%d", f != NULL);
//    fclose(f);
//    return 0;
//}
//
//// ### QUESTION 4
//#include <stdio.h>
//
//int main(void) {
//    FILE *f = fopen("file", "w");
//    int i = fputs(f, "Hello!");
//
//    printf("%d", i != EOF);
//    fclose(f);
//    return 0;
//}
//
//// ### QUESTION 5
//D:\USERDIR\johndoe.txt
//
//MS Windoes systems
//or
//Unix/Linux sytsems
//
//// ### QUESTION 6
//JohnDoe and johndoe on Unix/Linux?
//identical
//different
//
//// ### QUESTION 7
//#include <stdio.h>
//
//int main(void) {
//    char s[20];
//    FILE *f = fopen("file", "w");
//    int i = fputs("12A", f);
//    fclose(f);
//
//	f = fopen("file", "r");
//    fgets(s, 2, f);
//    puts(s);
//    fclose(f);
//    return 0;
//}
//
//// ### QUESTION 8
//#include <stdio.h>
//
//int main(void) {
//    FILE *f = fopen("file", "w");
//    float f;
//
//    fputs("12A", f);
//    fclose(f);
//    f = fopen("file", "r");
//    fscanf(f, "%f", &f);
//    fclose(f);
//
//    printf("%f", f);
//    return 0;
//}
//
//// ### QUESTION 9
//#include <stdio.h>
//
//int f(char t[]) {
//    return t[0] - t[-1];
//}
//
//int main(void) {
//    int i = 2;
//    i -= f("ABDGK" + 1);
//
//    printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 10
//#include <stdio.h>
//
//int main(void) {
//    int i;
//    i = fprintf(stderr, "Hello!");
//
//    printf("%d", i == EOF);
//    return 0;
//}
//
//// ### QUESTION 11
//#include <stdio.h>
//
//int main(void) {
//    char s[20];
//    FILE *f = fopen("file", "w");
//    int i = fputs("12A", f);
//    fclose(f);
//
//    f = fopen("file", "r");
//    fgets(s, 20, f);
//    puts(s);
//    fclose(f);
//    return 0;
//}
//
//// ### QUESTION 12
//#include <stdio.h>
//
//int main(void) {
//    int i;
//    i = fprintf(stdin, "Hello!");
//
//    printf("%d", i == EOF);
//    return 0;
//}
//
//// ### QUESTION 13
//JohnDoe a valid string on
//Unix/Linux and MS windows
//Unix/Linux only
//MS Windows only
//
//// ### QUESTION 14
//int main(void) {
//    FILE *f;
//
//    f = fopen("file", "wb");
//    printf("%d", f != NULL);
//    fclose(f);
//    return 0;
//}
//
//// ### QUESTION 15
//#include <stdio.h>
//
//int main(void) {
//    FILE *f;
//    int i = fprintf(f, "Hello!");
//
//    printf("%d", i == EOF);
//    return 0;
//}
//
//// ### QUESTION 16
//#include <stdio.h>
//
//int main(void) {
//    FILE *f = fopen("file", "w");
//    int i = fputs("Hello!", f);
//
//    printf("%d", i != EOF);
//    return 0;
//}
//
//// ### QUESTION 17
//#include <stdio.h>
//
//int main(void) {
//    FILE *f = fopen("file", "w");
//    int i;
//
//    fputs("12A", f);
//    fclose(f);
//    f = fopen("file", "r");
//    fseek(f);
//    i = ftell(f, 0, SEEK_END);
//    fclose(f);
//
//    printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 18
//#include <stdio.h>
//
//int i = 0;
//
//int *f(int *i) {
//    (*i)++;
//    return i;
//}
//
//int main(void) {
//    int i = 1;
//    i = *f(&i);
//
//    printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 19
//Is the string
//HomeDir/HomeFile
//valid in
//
//MS Windows
//Unix/Linux
//
//// ### QUESTION 20
//#include <stdio.h>
//
//int main(void) {
//    FILE *f = fopen("file", "w");
//    int i;
//
//    fputs("12A",f);
//    fclose(f);
//
//    f = fopen("file", "r");
//    fseek(f, 0, SEEK_END);
//    i = ftell(f);
//    fclose(f);
//
//    printf("%d", i);
//    return 0;
//}
//
///* ######################################## */
//
//// ### 8.2.1 Module 8 - Quiz
//// ### QUESTION 1
//#include <stdio.h>
//#define X 2
//#define Y X*X
//#define Z Y+Y
//#define MINUS 2-4
//
//int main(void) {
//    int i = Z;
//    int j = i * MINUS;
//    int k = i + j;
//
//    printf("%d", k);
//    return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//    int X = 1;
//
//#define	X 1
//    int Y = X - 2;
//#undef X
//
//    printf("%d", Y+X);
//    return 0;
//}

//#include <stdio.h>
//#define	ALPHA(x) 2*-x
//
//int main(void) {
//    int i = ALPHA(1-1);
//
//    printf("%d", i);
//    return 0;
//}

//#include <stdio.h>
//#define	ALPHA(x)	2*-x
//
//int main(void) {
//    int i = ALPHA((1-1));
//
//    printf("%d", i);
//    return 0;
//}

//
//// ### QUESTION 2
//#include <stdio.h>
//
//#define F1(X) X*X
//#define F2(X) ((X)*(X))
//#define F3(X) ((X)*X)
//
//int main(void) {
//    int i = 1;
//    int j = 2;
//    int k = 3;
//    int s;
//    s = F1(i + j) + F2(i - j) + F3(i + k);
//
//	printf("%d", s);
//    return 0;
//}
//
//// ### QUESTION 3
//#include <stdio.h>
//int main(void) {
//    int X = 200;
//    int a = X;
//    a += X;
//
//#define X 200
//    a += X;
//
//#undef X
//    printf("%d",a);
//    return 0;
//}
//
//// ### QUESTION 4
//#include <stdio.h>
//int X = 0;
//
//#define X 100;
//int fun1(void) {
//    return X;
//}
//
//#undef X
//int fun2(void) {
//    return X;
//}
//
//int main(void) {
//    int s;
//    s = fun1() + fun2();
//    printf("%d", s);
//    return 0;
//}
//
//// ### QUESTION 5
//#include <stdio.h>
//#define CIT(X) #X;
//#define CNC(X,Y,Z) X##Y##Z
//#define VAL 641221
//
//int main(void) {
//    int i = CNC(64,12,21);
//    int j = i + VAL;
//    char *s = CIT(i);
//
//    printf("%d%s",j,s);
//    return 0;
//}
//
//// ### QUESTION 6
//#include <stdio.h>
//#define SYM
//#define BOL    100
//#define SMB SYM##BOL
//#define SBL #BOL
//#undef    SYM
//int main(void) {
//#ifdef SYM
//    int i = 100;
//#ifdef SYMBOL
//    int j = i + 200;
//#else
//    int j = i + 222;
//#endif
//#else
//    int i = 200;
//#ifdef SYMBOL
//    int j = i + 100;
//#else
//    int j = i + 111;
//#endif
//#endif
//    printf("%d",i+j);
//    return 0;
//}
//
//// ### QUESTION 7
//#include <stdio.h>
//#define X 3
//#define Y X * X
//#define Z Y + X
//#define F(A)    A * (A + 2)
//
//int main(void) {
//#if F(3) + (Z) == 27
//    int i = 27 + F(5);
//#else
//    int i = F(5);
//#endif
//    printf("%d",i);
//    return 0;
//}
//
//// ### QUESTION 8
//#include <stdio.h>
//
//int vr = 10;
//int fun1(int param) {
//    int vr;
//
//    vr = 2;
//    return vr + param;
//}
//
//int fun2(int param) {
//    vr += param;
//    return param + 1;
//}
//
//int main(void) {
//    int s;
//    vr /= 2;
//    s = fun1(vr) + fun2(vr);
//    printf("%d", s);
//    return 0;
//}
//
//// ### QUESTION 9
//#include <stdio.h>
//
//int vr = 10;
//int fun1(int param) {
//    static int vr = 1;
//    vr++;
//    return vr + param;
//}
//
//int main(void) {
//    printf("%d", fun1(1) + fun1(1));
//    return 0;
//}
//
//// ### QUESTION 10
//#include <stdio.h>
//int vr = 10;
//
//int fun1(int param) {
//    int vr = 1;
//    vr++;
//    return vr + param;
//}
//
//int main(void) {
//    printf("%d", fun1(1) + fun1(1));
//    return 0;
//}
//
//// ### 8.3.1 Module 8 - Test

//#include <stdio.h>
//#define A(x) ((x)?-1:0)
//#define B(a) !(a)
//
//int main(void) {
//    int i = 2;
//    int i2 = A(B(i));
//
//    printf("%d", i2);
//    return 0;
//}

//#include <stdio.h>
//#define A(x) ((x)?-1:0)
//
//int main(void) {
//    int i = 2;
//    int i2 = A(i) * i;
//    printf("%d", i2);
//    return 0;
//}

//#include <stdio.h>
//#define	ALPHA -1
//#define BETA - ALPHA
//
//int main(void) {
//    int i = ALPHA + BETA * ALPHA * BETA;
//    printf("%d", i);
//    return 0;
//}

//// ### QUESTION 1
//#include <stdio.h>
//#define	ALPHA(x, y) x##2-y
//
//int main(void) {
//    int i = -1;
//    int i2 = -2;
//
//    printf("%d", ALPHA(i, i2));
//    return 0;
//}
//
//// ### QUESTION 2
//#include <stdio.h>
//
//int main(void) {
//#undef X
//    int X = 1;
//    int Y = X - 2;
//
//#define	X -2
//    printf("%d",Y+X);
//    return 0;
//}
//
//// ### QUESTION 3
//#include <stdio.h>
//#define	ALPHA(x)	2*-x
//
//int main(void) {
//    int i = ALPHA((1-1));
//
//    printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 4
//#include <stdio.h>
//#define	ALPHA(x, y)	x+y
//
//int main(void) {
//    int i = -1;
//    int i2 = -2;
//    // --1+-2 = 1-2 = -1
//    printf("%d", -ALPHA(i, i2));
//    return 0;
//}
//
//// ### QUESTION 5
//#include <stdio.h>
//#define  B
//#define  C
//
//int main(void) {
//    int i =
//#ifdef A
//#ifdef C
//    -1
//#else
//    -2
//#endif
//#else
//    -3
//#endif
//    ;
//
//    printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 6
//#include <stdio.h>
//#define	X 1
//#define Y 2
//
//int main(void) {
//    int i =
//
//#if X<<Y > 0
//    -X
//#else
//    -Y
//#endif
//    ;
//
//    printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 7
//#include <stdio.h>
//#define	ALPHA -1
//#define BETA - ALPHA
//
//int main(void) {
//    int i = ALPHA + BETA * ALPHA * BETA;
//    printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 8
//#include <stdio.h>
//#define	ALPHA -2
//
//int main(void) {
//    int i = -1;
//    i += ALPHA;
//
//	printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 9
//#include <stdio.h>
//#define	ALPHA (-1-2)
//
//int main(void) {
//    int i = -1;
//    i = -i * ALPHA;
//
//    printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 10
//#include <stdio.h>
//#define A(x) ((x)?-1:0)
//#define B(a) !(a)
//
//int main(void) {
//    int i = 2;
//    int i2 = A(B(i));
//
//    printf("%d", i2);
//    return 0;
//}
//
//// ### QUESTION 11
//#include <stdio.h>
//#define  A
//#define  C
//
//int main(void) {
//    int i =
//#ifdef A
//#ifdef B
//    -1
//#else
//    -2
//#endif
//#else
//    -3
//#endif
//    ;
//
//    printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 12
//#include <stdio.h>
//#define A(x) #x
//
//int main(void) {
//    int i = -1;
//    char *s = A(i);
//    i = -(s[0] == 'i');
//
//    printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 13
//#include <stdio.h>
//
//int main(void) {
//    int X = 1;
//
//#define	X 1
//    int Y = X - 2;
//#undef X
//
//    printf("%d", Y+X);
//    return 0;
//}
//
//// ### QUESTION 14
//#include <stdio.h>
//#define	X 1
//#define Y 2
//
//int main(void) {
//    int i =
//
//#if X>>Y > 0
//    -X
//#else
//    -Y
//#endif
//    ;
//
//    printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 15
//#include <stdio.h>
//#define	ALPHA -1+2
//
//int main(void) {
//    int i = -1;
//    i += ALPHA;
//
//    printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 16
//#include <stdio.h>
//#define  A
//#define  C
//
//int main(void) {
//    int i =
//#ifdef A
//#ifdef C
//    -1
//#else
//    -2
//#endif
//#else
//    -3
//#endif
//    ;
//
//    printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 17
//#include <stdio.h>
//#define	ALPHA(x) 2*-x
//
//int main(void) {
//    int i = ALPHA(1-1);
//
//    printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 18
//#include <stdio.h>
//#define	ALPHA(x) -x
//
//int main(void) {
//    int i = ALPHA(2-1);
//    printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 19
//#include <stdio.h>
//#define	ALPHA	-1-2
//
//int main(void) {
//    int i = -1;
//    i = i * ALPHA;
//
//	printf("%d", i);
//    return 0;
//}
//
//// ### QUESTION 20
//#include <stdio.h>
//#define A(x) ((x)?-1:0)
//
//int main(void) {
//    int i = 2;
//    int i2 = A(i) * i;
//    printf("%d", i2);
//    return 0;
//}
//
///* ######################################## */
//
//// ### 8.4.1 SUMMARY (Part 2) - Test
//// ### All mixed
//#include <stdio.h>
//#include <string.h>
//
//int main(void) {
//    // creating a String of 20 elements (0-19)
//    char tt[20] = "9081726354";
//    // Copy to tt 1726354 to the char \
//        9081726354\0  \
//        1726354\0   \
//        ============ \
//        1726354\054\0 is the real content of tt
//    strcpy(tt, tt + 3);
//    // 7 - '4' + '5' = 7 + 1 = 8
//    printf("%d\n", strlen(tt) - tt[9] + '5');
//    return 0;
//}
//// 8

//#include <stdio.h>
//int main(void) {
//    int i = 1, j = 0, k;
//    //      1   +       0   +   0       +   0
//    k = (i >> j) + (j >> i) + (i >> i) + (j >> j);
//    // 1 << by 1 is 2
//    k <<= i;
//
//    printf("%d", k);
//    return 0;
//}
//// 2

//#include <stdio.h>
//
//int main(void) {
//    char s[20] = "?";
//    //789 is written to f
//    FILE *f = fopen("fopen","w");
//    int i = fputs("789",f);
//    fclose(f);
//    // to "?" are written 2 chars from f    \
//        "?" turns into "?78"
//    f = fopen("fopen","r");
//    fgets(s + 1,3,f);
//    // 8 - 0 = 8 s[3] = "null" = 0 in a char array
//    printf("%s\n", s[3]);
//    printf("%c\n", s[2] - s[3]);
//    fclose(f);
//    return 0;
//}
//// 8

//#include <stdio.h>
//struct S {
//    int S[3];
//};
//
//// 4 + 2 -4
//void f(struct S S) {
//    printf("Entering function f\n");
//    printf("%d %d %d\n",S.S[0], S.S[1], S.S[2]);
//    S.S[0] = S.S[1] + S.S[2] - 4;
//    printf("%d %d %d\n",S.S[0], S.S[1], S.S[2]);
//    printf("Leaving function f\n");
//}
//
//int main(void) {
//    struct S S = { { 1, 4, 2 } };
//    f(S);
//    printf("Entering main again after leaving f\n");
//    printf("%d %d %d\n",S.S[0], S.S[1], S.S[2]);
//    // in main the value stays 1, 4, 2  \
//        4 * 1 = 1
//    printf("%d",S.S[1] * S.S[0]);
//    return 0;
//}
//// 4

//#include <stdio.h>
//
//int main(void) {
//    int x = 1, y = 1;
//    float k = -1e0, m = 2e1;
//    printf("%d %d %f %f\n", x,y,k,m);
//    printf("%d %d %d %d %d\n", (x >= y), (x >= y), (k >= y), (m >= k), ('q' <= 'z'));
//
//    //                  1       1           0           1           1 = 4
//    printf("%d\n", (x >= y) + (x >= y) + (k >= y) + (m >= k) + ('q' <= 'z'));
//    return 0;
//}
//// 4

//ptr pointer to pointer to pointer to a double
//// double ***ptr;

//#include <stdio.h>
//int main(void) {
//
//int X = 1; // 1
//int Y = X + 2; // 3
//// X = 1 0
//// Y = 3 4 3
//// Z = 4 0 / anything = 0
//Y++;
//int Z = Y;
//--X;
//Y--;
//Z = X / Y * X * Y;
//printf("%d", Z);
//}
////0

//017 as dec
////15

//0x17
////23

//#include <stdio.h>
//
//char *f(char *p) {
//    return p += 2;
//}
//
//char *g(char *p) {
//    return --p;
//}
//
//int main(void) {
//    char *s = "ABCDEFGHIJ";
//    char  p = *f(g(f(s + 1)));
//    // character is char value of f of g of f of 'B' = 'E'
//    //'E' - 'A' equals 5 - 1 = 4
//    printf("%d",p - 'A');
//    return 0;
//}
//// 4

//#include <stdio.h>
//int main(void) {
//    int i = 1, j = 0;
//
//    do {
//     	i *= 2;
//       	j += i / 2;
//    } while(j < 1);
//
//    printf("%d", i + j);
//    return 0;
//}
//// 3
//
//#include <stdio.h>
//
//int main(void) {
//    int i = 1, j;
//
//    for(j = 0; j ; j--)
//      	i *= 2;
//
//    // 2 + - 1 = 1
//    printf("%d", i + j);
//    return 0;
//}
//// 1

//#include <stdio.h>
//
//int main(void) {
//float X = 2.0;
//    printf("%f\n", X);
//
//X = X + X * 4; // 10
//    printf("%f\n", X);
//
//X = X / X * X; // 10
//    printf("%f\n", X);
//
//X = X / X + X; // 11 , beacuxse 1 + 10 = 11
//    printf("%f\n", X);
//    return 0;
//}
//// 11.00000

//#include <stdio.h>
//
//float f(float v) {
//  	v = v / 2.0;
//    return v + v;
//}
//
//int main(void) {
//    float x = 4;
//    // returns somthing, BUT IS NOT RECEIVED, SO x stays 4
//    f(x);
//
//    printf("%f", x);
//    return 0;
//}
//// 4.00000

//#include <stdio.h>
//#include <string.h>
//
//int main(void) {
//    char tt[20] = "0123456789";
//    strcat(tt + 11, "123");
//    // 0123456789
//    // 0123456789\0123\0
//    // 10 - '8' + '0' = 2
//    printf("%d\n", strlen(tt) - tt[8] + '0');
//    return 0;
//}
////2

//#include <stdio.h>
//
//int main(void) {
//    int i = -1, j = 1;
//
//    for(i++; i++; i++)
//      	j++;
//
//    printf("%d", i + j);
//    return 0;
//}
//// 2

//float *f(int);
//// f is a pointer to a function (int) returning float

//#include <stdio.h>
//int main(void) {
//    int i, s = 0, t[] = {16, 8, 4, 2, 1, 0};
//    //i = 1;
//    printf("i = %d, t[%d] = %d, s = %d\n",i,i, t[i],s);
//    // Understand Value at t[5] = 0 so 0 > 2 is FALSE, so loop never entered!
//    for(i = 5; t[i] > 2; i /= 2) {
//      	s += t[i];
//        printf("i = %d, t[%d] = %d, s = %d\n",i,i, t[i],s);
//    }
//    printf("%d\n", s);
//    return 0;
//}
//// 0

//#include <stdio.h>
//
//int main(void) {
//    int i = 5, j = 16;
//    while(j >= 0) {
//       	i /= 2;
//       	j -= i / 2;
//    }
//
//    printf("%d", i + j);
//    return 0;
//}
//// infinite loop

//#include <stdio.h>
//
//int main(void) {
//    int i = 1;
//
//    if(i = 0)
//        i = 2;
//    else
//        i = 3;
//
//	printf("%d\n", i);
//    return 0;
//}
//// 3

//#include <stdio.h>
//
//struct S {
//    int S[3];
//};
//
//void f(struct S *S) {
//    S->S[2] = 6 * S->S[0] + S -> S[1];
//}
//
//int main(void) {
//    struct S S = { { 1, 2 } }, *P = &S;
//    f(P);  // Values now 1,2,0
//    // so, 8 / 1 = 8
//    printf("%d",S.S[2] / S.S[0]);
//    return 0;
//}
//// 8

//legal float?
////float floating;

//#include <stdio.h>
//int main(void) {
//int X;
//// 1 time something below 1 = 0 (for any int)
//X = ('r' - 's') * ('A' / 'Z');
//    printf("%d",X);
//}
//// 0

//#include <stdio.h>
//int main(void) {
//    char t[] = { 'x', 'z', 'Y', 'Z', '2' , '0'};
//    // t[z - x - Z - Y + 3] - '0' = t[4] - '0' =  '2' - = '0' = 2
//    printf("%d\n", t[t[1] - t[0] - t[3] + t[2] + 3] - t[5]);
//    return 0;
//}
//// 2

//legal var name?
//// anti_world

//correct floating point ?
//// 3E8

//#include <stdio.h>
//
//int main(void) {
//    int i = 3, j = i - 2 * i;
//    // 3 / -3 = -1
//    switch(i / j) {
//      	case  1: j++;
//       	case  2: j--;
//       	case  0: j++; break;
//       	default: j = 0;
//    }
//    // coming with j=0 of the switch
//    printf("%d", ++j); // j=1
//    return 0;
//}
//// propbably 1

// TODO (jens#1#01/29/21): Understand the following
// ???
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//    // pointer to 1 (cast to float pointer) memory for float squared
//    float *t = 1 + (float *) malloc(sizeof(float) * sizeof(float));
//    // pointer to 1 byte + 2 floats
//    printf("%f %f %f %f\n", *t, t[0], t[1], t[2]);
//    // goto pointer -1
//    t--;
//    printf("%f %f %f %f\n", *t, t[0], t[1], t[2]);
//    // Value at t = 8
//    *t = 8.0;
//    printf("%f %f %f %f\n", *t, t[0], t[1], t[2]);
//    // at t1 value = 2
//    t[1] = *t / 4.0;
//    printf("%f %f %f %f\n", *t, t[0], t[1], t[2]);
//
//    t++;
//    printf("%f %f %f %f\n", *t, t[0], t[1], t[2]);;
//    t[-1] = *t / 2.0;
//
//    printf("%f\n", *t);
//    free(--t);
//    return 0;
//}
// 2.00000

//#include <stdio.h>
//
//int main(void) {
//    char t[4][4];
//    //              16 bytes / 4 bytes = 4  size of a member = 1 to 4/1 = 4
//    printf("%d\n",sizeof(t) / sizeof(t[0]) / sizeof(t[0][0]));
//    return 0;
//}
//// 4

//#include <stdio.h>
//
//struct S {
//    int Var;
//    struct S *Str;
//};
//
//int main(void) {
//    // an Array with 3 members S0 S1 S2, organized as a list
//    struct S S[] = { { 8, NULL }, { 4, &S[0] }, { 2, &S[1] } };
//    // referencing from last's to first's structs' var value that is 8
//    printf("%d", S[2].Str->Str->Var);
//    return 0;
//}
//// 8

//int main(void) {
//int X = 8;
//X = X - X / 2;
//X = X * X / 4;
//X = X + 2 * X;
//    printf("%d",X);
//}
//// probably 12

//#include <stdio.h>
//#define  ONE    1
//#define  TWO 	ONE + ONE
//
//int main(void) {
//    int i = 2;
//    i = i - 2 * TWO;
//    // just calculate 2 - 2 * 1 + 1 like 2 - (2 * 1) + 1
//    printf("%d\n", i);
//    return 0;
//}
//// 1

//#include <stdio.h>
//
//int main(void) {
//    char *p = "\0\2\1\3\4";
//    // pointer to     2    +    2     +  0
//	printf("%d\n", p[p[2]] + *(p + 1) + p[0]);
//    return 0;
//}
//// 4



//#include <stdio.h>
//int main(void) {
//    float a = 3.14E0, *b = &a, **c = &b;
//    **c = a + (a == *b);
//
//    printf("%f", a);
//    return 0;
//}
//// 4.14000

//#include <stdio.h>
//
//int main(void) {
//    int i = 5, j = i - 4 * i;
//    // j = -15 !!!, then default and line after default executed, becuase of missing a break
//    printf("%d\n", j);
//    switch(j) {
//       	printf("%d\n", j);
//       	default: j = 2;
//       	printf("%d\n", j);
//       	case  1: j--; break;
//       	printf("%d\n", j);
//       	case  2: j++;
//       	printf("%d\n", j);
//       	case  0: j--; break;
//       	printf("%d\n", j);
//    }
//
//    printf("%d", j++);
//    return 0;
//}
//// 1

//#include <stdio.h>
//#include <string.h>
//
//char *f(int p, char *s) {
//    s[p + 2] = '\0';
//    return s - 1;
//}
//
//int main(void) {
//    char s[] = "ABCDEF";
//    int i = strlen(f(1, s + 2));
//    // f(1, pointer to 'C') , returns pointer to 'B' after setting setting C +1+2, so 'F' to '\0’, returned is a pointer to "BCDE", means strlen = 4
//    printf("%d\n", i);
//    return 0;
//}
////4

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct S {
//    char *S;
//};
//
//int main(void) {
//    struct S *S = (struct S *) malloc(sizeof(struct S));
//    S -> S = "123\0""45678";
//    // 123\045678 strlen("5678") + Value at s[3] =  4 + 0 = 4
//    printf("%d", strlen(S -> S + 5) + S -> S[3]);
//    free(S);
//    return 0;
//}
//// 4

//#include <stdio.h>
//#include <string.h>
//
//struct S {
//    char S[8];
//};
//
//int main(void) {
//    struct S S = { 'a', 'b', 'c', 'd' };
//    // S[0] to S[3] "abcd",
//    // size of 8 bytes - 4 + '\0' or 0 = 8-4 = 4
//    printf("%d", sizeof(S.S) - strlen(S.S) + S.S[4]);
//    return 0;
//}
////4

//#include <stdio.h>
//int main(void) {
//    int i, t[4];
//
//    for(i = 0; i < 3; i++) {
//      	t[i] = 4 - i;
//       	t[i + 1] = 2 * t[i];
//    }
//    // Value at t[2] = 2 after loop, loop never executed with i = 3
//    printf("%d\n", t[2]);
//    return 0;
//}
////// 2

//#include <stdio.h>
//
//int fun(int *t) {
//    return *(t + 3);
//}
//
//int main(void) {
//    int arr[] = { 3, 2, 1, 0 };
//    // Stelle -2 + 3 = 1, Value an arr[1] = 2
//    printf("%d\n", fun(arr - 2));
//    return 0;
//}
////2

//
///* ######################################## */
//
//// ### 8.5.1 SUMMARY (Part 1 & 2) - Test
//// ### QUESTION 1
//

//#include <stdio.h>
//int main(void) {
//    int i, s = 0, t[] = {16, 8, 4, 2, 1, 0};
//
//    for(i = 5; t[i] > 2; i /= 2)
//      	s += t[i];
//
//    printf("%d\n", s);
//    return 0;
//}
//// 0

//#include <stdio.h>
//int main(void) {
//    int i, s = 0, t[] = {16, 8, 4, 2, 1, 0};
//
//    for(i = 5; t[i] > 2; i /= 2)
//      	s += t[i];
//
//    printf("%d\n", s);
//    return 0;
//}
//// 0

//#include <stdio.h>
//
//int main(void) {
//    char s[20] = "?";
//    printf("%s\n", s);
//    //String = "?"
//    FILE *f = fopen("fopen","w");
//    int i = fputs("789",f);
//    fclose(f);
//    printf("Returnvalue i = %d\n", i);
//    printf("%s\n", s);
//    //Stream = "789"
//    f = fopen("fopen","r");
//    printf("%s\n", s);
//    // fgets read size -1 chars and adds \0
//    // this means at the Destination s +1, it read 2 bytes ("78") from stream f and adds \0
//    // String s = "?78\0" char s[2] = '8' minus char s[3] = '\0' = 8
//    fgets(s + 1,3,f);
//    printf("%s\n", s);
//    printf("%c\n", s[2]);
//    printf("%c\n", s[3]);
//    printf("%c\n", s[2] - s[3]);
//    fclose(f);
//    return 0;
//}
//// 8


//#include <stdio.h>
//
//int main(void) {
//    int i = 1, j = i + 2 * i;
//    switch(j) {
//        default: j = 0;
//        case  1: j++; break;
//        case  2: j--;
//        case  0: j++; break;
//    }
//
//	printf("%d", ++j);
//    return 0;
//}
//// 2



//// ### QUESTION 2
//#include <stdio.h>
//#include <string.h>
//
//struct S {
//    char S[4];
//};
//
//int main(void) {
//    struct S S = { 'a', 'b' };
//
//    printf("%d", sizeof(S.S) - strlen(S.S) + S.S[3]);
//    return 0;
//}
//// 2

//// ### QUESTION 3
//ptr is a pointer to void
//void *ptr;
//void ptr;
//void **ptr;
//not possible in C
//

//
//// ### QUESTION 4
//#include <stdio.h>
//
//int main(void) {
//    int i = 16, j = 6;
//    while(j > 0) {
//        i /= 2;
//        j -= i / 2;
//    }
//
//	printf("%d", i + j);
//    return 0;
//}
//// 4


//// ### QUESTION 5
//#include <stdio.h>
//int main(void) {
//
//    int i = 0;
//    if(i = 1)
//        i = 2;
//    else
//        i = 3;
//
//	printf("%d\n", i);
//    return 0;
//}
//// 2

//// ### QUESTION 6
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//    int *t = (int *) malloc(sizeof(int) + sizeof(int));
//    t++;
//    *t = 8;
//    t[ 1] = *t / 2;
//    t--;
//    t[1] = *t / 2;
//
//    printf("%d\n", *t);
//    free(t);
//    return 0;
//}
// garbage???

//// ### QUESTION 7
//012 a valid integer literal?
//10
//12
//18
//invalid
//

//// ### QUESTION 8
//#include <stdio.h>
//
//int main(void) {
//int x = 1;
//
//x = x * x + 2;
//x = x / x * 2;
//x = x + 2 + x;
//
//printf("%d\n", x);
//}
//// 6

//// ### QUESTION 9
//#include <stdio.h>
//
//int main(void) {
//
//int x;
//x = 'b' - 'a' * ('\' / '\');
//
//printf("%d\n", x);
//}
// Error!!!

//// ### QUESTION 10
//#include <stdio.h>
//
//int main(void) {
//    int i, t[4];
//
//    for(i = 0; i < 3; i++) {
//        t[i] = i;
//        t[i + 1] = 2 * t[i];
//    }
//
//	printf("%d\n", t[3]);
//    return 0;
//}
//// 4

//// ### QUESTION 11
//#include <stdio.h>
//
//struct S {
//    int S[2];
//};
//
//void f(struct S *S) {
//    S->S[1] = S->S[0] + 2;
//}
//
//int main(void) {
//    struct S S = { { 4, 8 } }, *P = &S;
//    f(P);
//    printf("%d",S.S[1] / S.S[0]);
//    return 0;
//}
//// 1

//// ### QUESTION 12
//Legal variable names?
//R2D2
//_2R2D_
//_R2D2_
//2R2D
//

//// ### QUESTION 13
//#include <stdio.h>
//
//struct S {
//    int S[2];
//};
//
//void f(struct S *S) {
//    S->S[1] = S->S[0] + 2;
//}
//
//int main(void) {
//    struct S S = { { 4, 8 } }, *P = &S;
//    f(P);
//    printf("%d",S.S[1] / S.S[0]);
//    return 0;
//}
//// 1

//// ### QUESTION 14
//#include <stdio.h>
//
//struct S {
//    int S[2];
//};
//
//void f(struct S *S) {
//    S->S[1] = S->S[0] + 2;
//}
//
//int main(void) {
//    struct S S = { { 4, 8 } }, *P = &S;
//    f(P);
//    printf("%d",S.S[1] / S.S[0]);
//    return 0;
//}
//// 1


//// ### QUESTION 15
//valid integer in C?
//3,141592
//3141592
//3.141592
//3_141_592
//

//// ### QUESTION 16
//0x12 as integer?
//10
//12
//18
//invalid
//

//// ### QUESTION 17
//Legal variable name?
//Alpha:Omega
//Alpha_Omega
//Alpha-Omega
//Alpha@Omega
//

//// ### QUESTION 18
//#include <stdio.h>
//
//int fun(int t) {
//    return ++t;
//}
//
//int main(void) {
//    int arr[] = { 8, 4, 2, 1 };
//
//    printf("%d\n", fun(arr[3]) + arr[2]);
//    return 0;
//}
//// 4


//// ### QUESTION 19
//#include <stdio.h>
//
//int main(void) {
//    int i = 16, j = 8;
//    do {
//        i /= 2;
//        j  = i / 2;
//    } while(j > 0);
//
//	printf("%d", i + j);
//    return 0;
//}
//// 1


//// ### QUESTION 20
//#include <stdio.h>
//
//int main(void) {
//    int i = 1, j = 0, k;
//
//    k = (i << j) + (j << i) + (i << i) + (j << j);
//    k >>= i;
//
//    printf("%d", k);
//    return 0;
//}
//// 1

//// ### QUESTION 21
//#include <stdio.h>
//
//int main(void) {
//    int i = 1, j = i + 2 * i;
//
//    switch(j - i) {
//        case  1: j++;
//        case  2: j--;
//        case  0: j++; break;
//        default: j = 0;
//    }
//
//	printf("%d", ++j);
//    return 0;
//}
//// 4

//// ### QUESTION 22
//#include <stdio.h>
//
//char *f(char *p) {
//    return p++;
//}
//
//char *g(char *p) {
//    return p += 2;
//}
//
//int main(void) {
//    char *s = "ABCDEFGHIJ";
//    char  p = *f(g(f(s + 6)));
//
//    printf("%d", p - 'A');
//    return 0;
//}
//// 8

//// ### QUESTION 23
//#include <stdio.h>
//
//int main(void) {
//int x = 1, y = 2, z;
//z = x / y * --x * y++;
//printf("%d\n",z);
//}
//// 0

//// ### QUESTION 24
//#include <stdio.h>
//
//int fun(int *t) {
//    return *(++t);
//}
//
//int main(void) {
//    int arr[] = { 8, 4, 2, 1 };
//
//    printf("%d\n", fun(arr + 2));
//    return 0;
//}
//// 1

//// ### QUESTION 25
//#include <stdio.h>
//
//int main(void) {
//    char *p = "\0\4\1\3\2";
//
//    printf("%d\n", p[p[1]] + *(p + 1) + p[4]);
//    return 0;
//}
//// 8


//// ### QUESTION 26
//#include <stdio.h>
//int main(void) {
//
//    int a = -1, b = 1;
//    float i = 2.0, j = -2.0;
//
//    printf("%d\n", (a > b) + (b > a) + (i > j) + (j > i) + ('z' > 'a'));
//    return 0;
//}
//// 3


//// ### QUESTION 27
//#include <stdio.h>
//#include <string.h>
//
//int main(void) {
//    char tt[20] = "0123456789";
//    strcpy(tt, tt + 2);
//
//    printf("%d\n", strlen(tt) - tt[9] + '5');
//    return 0;
//}
//// 4

//// ### QUESTION 28
//#include <stdio.h>
//
//int main(void) {
//    char s[20];
//    FILE *f = fopen("data", "w");
//    int i = fputs("1248", f);
//    fclose(f);
//    f = fopen("data", "r");
//    fgets(s + 2, 4, f);
//    putchar(s[4]);
//    fclose(f);
//    return 0;
//}
//// 4

//// ### QUESTION 29
//#include <stdio.h>
//
//int main(void) {
//    float x = 3.0, y = 2.0;
//    int i = 1, j = 2;
//    x = (int)x / y + (float)i / j;
//
//    printf("%f", x);
//    return 0;
//}
//// 2.00000

//// ### QUESTION 30
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct S {
//    char *S;
//};
//
//int main(void) {
//    struct S *S = (struct S *) malloc(sizeof(struct S));
//    S -> S = "abc";
//
//    printf("%d", strlen(S -> S + 2) + S -> S[3]);
//    free(S);
//    return 0;
//}
//// 1


//// ### QUESTION 31
//#include <stdio.h>
//
//int f(int t[][2]) {
//    return t[0][0] + t[0][1];
//}
//
//int main(void) {
//    int i, t[2][2] = { {0,4},{4,2} };
//    i = f(t);
//
//    printf("%d", i);
//    return 0;
//}
//// 4


//// ### QUESTION 32
//#include <stdio.h>
//
//int main(void) {
//    int i, t[4];
//
//    for(i = 3; i; i--) {
//      	t[i] = i - 1;
//       	t[t[i]] = t[i];
//    }
//
//	printf("%d\n", t[0]);
//    return 0;
//}
//// 0


//// ### QUESTION 33
//#include <stdio.h>
//
//int main(void) {
//    int t[4] = { 0, -1, -2, -3 }, *p = t + 3;
//
//    printf("%d\n", p[*p] - t[2]);
//    return 0;
//}
//// 2


//// ### QUESTION 34
//Legal floating point in C?
//3.1415M92
//3.1415E92
//3.1415X92
//3.1415F92
//

//// ### QUESTION 35
//#include <stdio.h>
//
//int main(void) {
//    char a = 'A', *b = &a, **c = &b;
//    **c = a + (a == *b);
//
//    printf("%c", a);
//    return 0;
//}
//// B

//// ### QUESTION 36
//#include <stdio.h>
//
//int main(void) {
//    int i, s = 0, t[] = {0, 1, 2, 4, 8, 16};
//
//    for(i = 2; t[i] < 8; i *= 2)
//        s += t[i];
//
//	printf("%d\n", s);
//    return 0;
//}
//// 2

//// ### QUESTION 37
//#include <stdio.h>
//#include <string.h>
//
//int main(void) {
//    char tt[20] = "0123456789";
//    strcat(tt + 2, "987");
//
//    printf("%d\n", strlen(tt) - tt[5] + '0');
//    return 0;
//}
//// 8


//// ### QUESTION 38
//#include <stdio.h>
//
//struct S {
//    int S[2];
//};
//
//void f(struct S S) {
//    S.S[0] = S.S[1] + 4;
//}
//
//int main(void) {
//    struct S S = { { 4, 8 } };
//    f(S);
//
//    printf("%d",S.S[1] / S.S[0]);
//    return 0;
//}
//// 2

//// ### QUESTION 39
//Which is -1E-1 in C?
//-0.01
//-1.0
//-0.1
//invalid
//

//// ### QUESTION 40
//#include <stdio.h>
//
//int main(void) {
//    int t[4][4];
//
//    printf("%d\n",sizeof(t) / sizeof(t[0]) / sizeof(t[0][0]));
//    return 0;
//}
//// 1

//// ### QUESTION 41
//Valid declaration?
//int longint;
//int long;
//int float;
//int int;
//

//// ### QUESTION 42
//#include <stdio.h>
//
//int main(void) {
//    char t[] = { 'a', 'z', 'B', 'Z', '0' };
//
//    printf("%d\n", t[t[1] - t[0] - t[3] + t[2] + 3] - t[4]);
//    return 0;
//}
//// 0


//// ### QUESTION 43
//void (*f)(int);
//f is a function (int) returning pointer to void;
//f is a pointer to function (int) returning int;
//f is a pointer to a function returning void;
//invalid
//

//// ### QUESTION 44
//#include <stdio.h>
//
//int f(int v) {
//   	v = 2 * v;
//    return v * v;
//}
//
//int main(void) {
//    int i = 2;
//    f(i);
//
//    printf("%d",i);
//    return 0;
//}
//// 2


//// ### QUESTION 45
//#include <stdio.h>
//
//struct S {
//    int Var;
//    struct S *Str;
//};
//
//int main(void) {
//    struct S S[] = { { 8, NULL }, { 4, &S[0] }, { 2, &S[1] } };
//    printf("%d", S[2].Str->Str->Var);
//    return 0;
//}
//// 8

//// ### QUESTION 46
//#include <stdio.h>
//
//int main(void) {
//    int i = 5, j = 4;
//
//    for(i--; i--; i--)
//      	j--;
//
//    printf("%d", i + j);
//    return 0;
//}
//// 1

//// ### QUESTION 47
//#include <stdio.h>
//int main(void) {
//    int i = 1, j = 0, k;
//
//	k = (i & j) + (i | j) + (i ^ j) + !i + j;
//
//	printf("%d", k);
//    return 0;
//}
//// 2

//// ### QUESTION 48
//#include <stdio.h>
//
//void main (void) {
//int x = 1;
//
//x = x + 2 * x;
//x = x / 2 * x;
//x = x + 2 + x;
//printf("%d\n",x);
//}
//// 8

//// ### QUESTION 49
//#include <stdio.h>
//#define  ABC    10
//#define  XYZ 	ABC - 1
//
//int main(void) {
//    int i = 19;
//    i = i - XYZ;
//
//    printf("%d\n", i);
//    return 0;
//}
//// 8

//// ### QUESTION 50
//#include <stdio.h>
//
//int main(void) {
//    int i = 2, j;
//
//	for(j = 0; j < 0; j -= i)
//        i /= 2;
//
//	printf("%d", i + j);
//    return 0;
//}
//// 2
