//// ### Part 2
//
///* ######################################## */
//
//// ### 6.2.1 Module 6 - Quiz
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
//
//// ### QUESTION 7
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
//
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
//    return (m+2)[n];
//}
//
//int main(void) {
//    printf("%c",fun("aAbBcCdD",1));
//    return 0;
//}
//
//// ### 6.3.1 Module 6 - Test
//// ### QUESTION 1
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
//// ### QUESTION 2
//#include <stdio.h>
//
//struct S {
//    char *p;
//};
//
//int main(void) {
//    char *p = "abcd";
//    struct S S[2];
//    int i;
//    for(i = 0; i < 2; i++)
//      	S[i].p = p + i;
//    printf("%c",S[1].p[0]);
//    return 0;
//}
//
//// ### QUESTION 3
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
//    S.Q.S[2] = 'B';
//
//    printf("%d",strlen(S.Q.S));
//    return 0;
//}
//
//// ### QUESTION 4
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
//    i -= f("ABDGK" + 1);
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
//    struct S *x = malloc(sizeof(struct S));
//    struct S *y = malloc(sizeof(struct S));
//    x >a = 2;
//    x >b = y;
//    y >a = 4;
//    y >b = x;
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
//    i -= f("ABDGK" + 1);
//
//    printf("%d",i);
//    return 0;
//}
//
//// ### QUESTION 10
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
//    x >a = 2;
//    x >b = y;
//    y >a = 4;
//    y >b = x;
//
//    printf("%d",x->b->b->b->a);
//    free(x); free(y);
//    return 0;
//}
//
//// ### QUESTION 13
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
//
//    printf("%d",i);
//    return 0;
//}
//
//// ### QUESTION 16
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
//
//// ### QUESTION 17
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
//
//// ### QUESTION 18
//#include <stdio.h>
//int f(char t[]) {
//    return t[0] - t[-1];
//}
//
//int main(void) {
//    int i = 2;
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
//    struct S S[2];
//    int i;
//    for(i = 0; i < 2; i++)
//      	S[i].a[1-i] = 4 * !i;
//    printf("%d",S[0].a[1]);
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
//// ### QUESTION 10
//#include <stdio.h>
//
//int main(void) {
//    FILE *f;
//    char s[] = "ABC";
//    char *p = "DEF";
//    int i=123;
//    char c='\'';
//
//    f = fopen("f", "wb");
//    fprintf(f,"%d %s %s %c", i, s, p, c);
//    fclose(f);
//    return 0;
//}
//
//// ### 7.3.1 Module 7 - Test
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
//
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
//// ### QUESTION 1
//
///* ######################################## */
//
//// ### 8.5.1 SUMMARY (Part 1 & 2) - Test
//// ### QUESTION 1
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
//// ### QUESTION 3
//ptr is a pointer to void
//void *ptr;
//void ptr;
//void **ptr;
//not possible in C
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
//
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
//
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
//// ### QUESTION 7
//012 a valid integer literal?
//10
//12
//18
//invalid
//
//// ### QUESTION 8
//int x = 1;
//
//x = x * x + 2;
//x = x / x * 2;
//x = x + 2 + x;
//
//// ### QUESTION 9
//int x;
//x = 'b' - 'a' * ('\' / '\');
//
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
//
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
//
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
//
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
//
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
//
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
//
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
//
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
//
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
//
//// ### QUESTION 23
//int x = 1, y = 2, z;
//z = x / y * --x * y++;
//
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
//
//// ### QUESTION 25
//#include <stdio.h>
//
//int main(void) {
//    char *p = "\0\4\1\3\2";
//
//    printf("%d\n", p[p[1]] + *(p + 1) + p[4]);
//    return 0;
//}
//
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
//
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
//
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
//
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
//
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
//
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
//
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
//
//// ### QUESTION 33
//#include <stdio.h>
//
//int main(void) {
//    int t[4] = { 0, -1, -2, -3 }, *p = t + 3;
//
//    printf("%d\n", p[*p] - t[2]);
//    return 0;
//}
//
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
//
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
//
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
//
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
//
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
//
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
//
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
//
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
//
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
//
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
//
//// ### QUESTION 48
//int x = 1;
//
//x = x + 2 * x;
//x = x / 2 * x;
//x = x + 2 + x;
//
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
//
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
