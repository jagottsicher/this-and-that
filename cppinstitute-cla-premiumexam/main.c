///* ### MOCK EXAM */
// 1. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 1, j = 0;
//        do {
//        	i *= 2;
//        	j += i / 2;
//        } while(j < 1);
//        printf("%d",i + j);
//        return 0;
//    }
//
//    the program outputs 3

//
//2. Question 1 points
//
//What is the value of the following integer literal?
//
//0x17
//
//    23
//
//3. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int x = 1, y = 1;
//        float k = -1e0, m = 2e1;
//        printf("%d\n", (x >= y) + (x >= y) + (k >= y) + (m >= k) + ('q' <= 'z'));
//        return 0;
//    }
////
////    the program outputs 4
//
//4. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = -1, j = 1;
//        for(i++; i++; i++)
//        	j++;
//        printf("%d",i + j);
//        return 0;
//    }
////
////    the program outputs 2
//
//5. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 1, j = 0, k;
//        k = (i >> j) + (j >> i) + (i >> i) + (j >> j);
//        k <<= i;
//        printf("%d", k);
//        return 0;
//    }
//
//    the program outputs 2
//
//6. Question 1 points
//
//What is the value of the X variable at the end of the following snippet?
//    #include <stdio.h>
//    int main(void) {
//    int X;
//
//    X = ('r' - 's') * ('A' / 'Z');
//    printf("%d", X);
//    return 0;
//    }
////
////    0
//
//7. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 1;
//        if(i = 0)
//        	i = 2;
//        else
//        	i = 3;
//        printf("%d\n",i);
//        return 0;
//    }
//
//    the program outputs 3
//
//8. Question 1 points
//
//What is the value of the following integer literal?
//
//017
//
//    15
//
//9. Question 1 points
//Which of the following declarations is valid?
//
//    float floating;
//
//10. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 1, j;
//        for(j = 0; j ; j--)
//        	i *= 2;
//        printf("%d",i + j);
//        return 0;
//    }
//
//    the program outputs 1
//
//11. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 5, j = 16;
//        while(j >= 0) {
//        	i /= 2;
//        	j -= i / 2;
//        }
//        printf("%d",i + j);
//        return 0;
//    }
//
//    the program enters an infinite loop and does not output anything

//12. Question 1 points
//Which of the following strings is a valid variable name?
//
//    anti_world

//
//13. Question 1 points
//
//What is the value of the X variable at the end of the following snippet?
//
//    int X = 8;
//    X = X - X / 2; // 4
//    X = X * X / 4; // 4
//    X = X + 2 * X; // 12
//
//    12
//
//14. Question 1 points
//
//What is the value of the X variable at the end of the following snippet?
//
//    float X = 2.0;
//    X = X + X * 4; // 10.0
//    X = X / X * X; // 10.0
//    X = X / X + X; // 11.0
//
//    11.000000
//
//15. Question 1 points
//
//What is the value of the Y variable at the end of the following snippet?

//    #include <stdio.h>
//
//    int main(void) {
//    int X = 1, Y = X + 2, Z = Y++;
//    printf("X=%d Y=%d Z=%d\n", X,Y,Z);
//    Z = X / Y * --X * Y--;
//    printf("%d", Z);
//    }
//    0
//
//16. Question 1 points
//
//Which of the following strings is a proper floating-point number (in the “C” language sense)?
//
//    3E8

//
//17. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <string.h>
//    struct S {
//        char S[8];
//    };
//    int main(void) {
//        struct S S = { 'a', 'b', 'c', 'd' };
//        printf("%d", sizeof(S.S) - strlen(S.S) + S.S[4]);
//        return 0;
//    }
//
//    the program outputs 4
//
//18. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <stdlib.h>
//    int main(void) {
//        float *t = 1 + (float *) malloc(sizeof(float) * sizeof(float));
//        t--;
//        *t = 8.0;
//        t[1] = *t / 4.0;
//        t++;
//        t[-1] = *t / 2.0;
//        printf("%f\n",*t);
//        free(--t);
//        return 0;
//    }
//
//    the program outputs 2.000000
//
//19. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 3, j = i - 2 * i;
//        switch(i - j) {
//        	case  1: j++;
//        	case  2: j--;
//        	case  0: j++; break;
//        	default: j = 0;
//        }
//        printf("%d", ++j);
//        return 0;
//    }
//
//    the program outputs 1
//
//20. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <string.h>
//    int main(void) {
//        char tt[20] = "9081726354";
//        strcpy(tt, tt + 3);
//        printf("%d\n", strlen(tt) - tt[9] + '5');
//        return 0;
//    }
//
//    the program outputs 8
//
//21. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int fun(int *t) {
//        return *(t + 3);
//    }
//    int main(void) {
//        int arr[] = { 3, 2, 1, 0 };
//        printf("%d\n", fun(arr - 2));
//        return 0;
//    }
//
//    the program outputs 2
//
//22. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <string.h>
//    int main(void) {
//        char tt[20] = "0123456789";
//        strcat(tt + 11, "123");
//        printf("%d\n", strlen(tt) - tt[8] + '0');
//        return 0;
//    }
//
//    the program outputs 2
//
//23. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <string.h>
//    #include <stdlib.h>
//    struct S {
//        char *S;
//    };
//
//    int main(void) {
//        struct S *S = (struct S *) malloc(sizeof(struct S));
//        S -> S = "123\0""45678";
//        printf("%d", strlen(S -> S + 5) + S -> S[3]);
//        free(S);
//        return 0;
//    }
//
//    the program outputs 4
//
//24. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        char t[] = { 'x', 'z', 'Y', 'Z', '2' , '0'};
//        printf("%d\n", t[t[1] - t[0] - t[3] + t[2] + 3] - t[5]);
//        return 0;
//    }
//
//    the program outputs 2
//
//25. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        float a = 3.14E0, *b = &a, **c = &b;
//        **c = a + (a == *b);
//        printf("%f", a);
//        return 0;
//    }
//
//    the program outputs 4.140000
//
//26. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i, s = 0, t[] = {16, 8, 4, 2, 1, 0};
//        for(i = 5; t[i] > 2; i /= 2)
//        	s += t[i];
//        printf("%d\n", s);
//        return 0;
//    }
//
//    the program outputs 0
//
//27. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    struct S {
//        int Var;
//        struct S *Str;
//    };
//    int main(void) {
//        struct S S[] = { { 8, NULL }, { 4, &S[0] }, { 2, &S[1] } };
//        printf("%d", S[2].Str->Str->Var);
//        return 0;
//    }
//
//    the program outputs 8
//
//28. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    float f(float v) {
//        	v = v / 2.0;
//        return v + v;
//    }
//    int main(void) {
//        float x = 4;
//        f(x);
//        printf("%f",x);
//        return 0;
//    }
//
//    the program outputs 4.000000
//
//29. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 5, j = i - 4 * i;
//        switch(j) {
//        	default: j = 2;
//        	case  1: j--; break;
//        	case  2: j++;
//        	case  0: j--; break;
//        }
//        printf("%d", j++);
//        return 0;
//    }
//
//    the program outputs 1
//
//30. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        char t[4][4];
//        printf("%d\n",sizeof(t) / sizeof(t[0]) / sizeof(t[0][0]));
//        return 0;
//    }
//    the program outputs 4
//
//31. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i, t[4];
//        for(i = 0; i < 3; i++) {
//        	t[i] = 4 - i;
//        	t[i + 1] = 2 * t[i];
//        }
//        printf("%d\n", t[2]);
//        return 0;
//    }
//    the program outputs 2
//
//32. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        char *p = "\0\2\1\3\4";
//        printf("%d\n", p[p[2]] + *(p + 1) + p[0]);
//        return 0;
//    }
//
//    the program outputs 4
//
//33. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    struct S {
//        int S[3];
//    };
//    void f(struct S *S) {
//        S->S[2] = 6 * S->S[0] + S -> S[1];
//    }
//    int main(void) {
//        struct S S = { { 1, 2 } }, *P = &S;
//        f(P);
//        printf("%d",S.S[2] / S.S[0]);
//        return 0;
//    }
//
//    the program outputs 8
//
//34. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    char *f(char *p) {
//        return p += 2;
//    }
//    char *g(char *p) {
//        return --p;
//    }
//    int main(void) {
//        char *s = "ABCDEFGHIJ";
//        char  p = *f(g(f(s + 1)));
//        printf("%d",p - 'A');
//        return 0;
//    }
//
//    the program outputs 4
//
//35. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <string.h>
//    char *f(int p, char *s) {
//        s[p + 2] = '\0';
//        return s - 1;
//    }
//    int main(void) {
//        char s[] = "ABCDEF";
//        int i = strlen(f(1,s + 2));
//        printf("%d\n",i);
//        return 0;
//    }
//
//    the program outputs 4

//36. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    struct S {
//        int S[3];
//    };
//    void f(struct S S) {
//        S.S[0] = S.S[1] + S.S[2] - 4;
//    }
//    int main(void) {
//        struct S S = { { 1, 4, 2 } };
//        f(S);
//        printf("%d",S.S[1] * S.S[0]);
//        return 0;
//    }
//
//    the program outputs 4
//
//37. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define  ONE    1
//    #define  TWO 	ONE + ONE
//    int main(void) {
//        int i = 2;
//        i = i - 2 * TWO;
//        printf("%d\n", i);
//        return 0;
//    }
//
//    the program outputs 1
//
//38. Question 1 points
//
//What is the meaning of the following declaration?
//
//    float *f(int);
//
//    f is a pointer to function (int) returning float;
//    f is a function (int) returning pointer to float;
//    f is a pointer to function (float) returning int;
//    the declaration is incorrect
//
//39. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        char s[20] = "?";
//        FILE *f = fopen("fopen","w");
//        int i = fputs("789",f);
//        fclose(f);
//        f = fopen("fopen","r");
//        fgets(s + 1,3,f);
//        printf("%c\n", s[2] - s[3]);
//        fclose(f);
//        return 0;
//    }
//
//    the program outputs 8
//
//40. Question 1 points
//
//Select the proper form for the following declaration:
//ptr is a pointer to pointer to pointer to double
//
//    double **ptr;
//    double ***ptr;
//    double *ptr;
//    the declaration is invalid and cannot be coded in C
//
///* ### FINAL TEST */
//
// 1. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        char t[] = { 'a', 'z', 'B', 'Z', '0' };
//        printf("%d\n", t[t[1] - t[0] - t[3] + t[2] + 3] - t[4]);
//        return 0;
//    }
//
//    the program outputs 0
//
//2. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int t[4] = { 0, -1, -2, -3 }, *p = t + 3;
//        printf("%d\n", p[*p] - t[2]);
//        return 0;
//    }
//
//    the program outputs 2
//
//3. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i, t[4];
//        for(i = 3; i; i--) {
//        	t[i] = i - 1;
//        	t[t[i]] = t[i];
//        }
//        printf("%d\n", t[0]);
//        return 0;
//    }
//
//    the program outputs 0
//
//4. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int t[4][4];
//        printf("%d\n",sizeof(t) / sizeof(t[0]) / sizeof(t[0][0]));
//        return 0;
//    }
//
//    the program outputs 1
//
//5. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        char *p = "\0\4\1\3\2";
//        printf("%d\n", p[p[1]] + *(p + 1) + p[4]);
//        return 0;
//    }
//
//    the program outputs 8
//
//6. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <string.h>
//    int main(void) {
//        char tt[20] = "0123456789";
//        strcat(tt + 2, "987");
//        printf("%d\n", strlen(tt) - tt[5] + '0');
//        return 0;
//    }
//
//    the program outputs 8
//
//7. Question 1 points
//Which of the following declarations is valid?
//
//    int longint;
//
//8. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i, s = 0, t[] = {0, 1, 2, 4, 8, 16};
//        for(i = 2; t[i] < 8; i *= 2)
//        	s += t[i];
//        printf("%d\n", s);
//        return 0;
//    }
//
//    the program outputs 2
//
//9. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 1, j = 0, k;
//        k = (i & j) + (i | j) + (i ^ j) + !i + j;
//        printf("%d", k);
//        return 0;
//    }
//
//    the program outputs 2
//
//10. Question 1 points
//What is the value of the following floating-point literal?
//
//    -0.01
//    -1.0
//    the literal is invalid
//    -0.1
//
//11. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        char a = 'A', *b = &a, **c = &b;
//        **c = a + (a == *b);
//        printf("%c", a);
//        return 0;
//    }
//
//    the program outputs B
//
//12. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 16, j = 8;
//        do {
//        	i /= 2;
//        	j -= i / 2;
//        } while(j > 0);
//        printf("%d",i + j);
//        return 0;
//    }
//
//    the program enters an infinite loop and does not output anything
//
//13. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 16, j = 6;
//        while(j > 0) {
//        	i /= 2;
//        	j -= i / 2;
//        }
//        printf("%d",i + j);
//        return 0;
//    }
//
//    the program outputs 4
//
//14. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 5, j = 4;
//        for(i--; i--; i--)
//        	j--;
//        printf("%d",i + j);
//        return 0;
//    }
//
//    the program outputs 1
//
//15. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 2, j;
//        for(j = 0; j < 0; j -= i)
//        	i /= 2;
//        printf("%d",i + j);
//        return 0;
//    }
//
//    the program outputs 2
//
//16. Question 1 points
//Which of the following strings are valid variable names?
//
//    _R2D2_
//    R2D2
//    _2R2D_
//
//17. Question 1 points
//Which of the following strings is a proper integer number (in the “C” language sense)?
//
//    3141592
//
//18. Question 1 points
//Which of the following strings is a correct floating-point number (in the “C” language sense)?
//
//    3.1415E92
//
//19. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 1, j = 0, k;
//        k = (i << j) + (j << i) + (i << i) + (j << j);
//        k >>= i;
//        printf("%d", k);
//        return 0;
//    }
//
//    the program outputs 1
//
//20. Question 1 points
//
//What is the value of the following integer literal?
//
//    0x12
//
//    18
//
//21. Question 1 points
//
//What is the value of the X variable at the end of the following snippet?
//
//    #include <stdio.h>
//    int main(void) {
//        int X = 1, Y = 2, Z;
//        Z = X / Y * --X * Y++;
//
//        printf("%d", Z);
//        return 0;
//    }
//
//    0
//
//22. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 1, j = i + 2 * i;
//        switch(j - i) {
//        	case  1: j++;
//        	case  2: j--;
//        	case  0: j++; break;
//        	default: j = 0;
//        }
//        printf("%d", ++j);
//        return 0;
//    }
//
//    the program outputs 4
//
//23. Question 1 points
//
//What is the value of the following integer literal?
//
//    012
//
//    10
//
//24. Question 1 points
//
//What is the value of the X variable at the end of the following snippet?
//
//    int X;
//
//    X = 'b' - 'a' * ('\' / '\');
//
//    the snippet is invalid and will cause a compilation error
//
//25. Question 1 points
//
//What is the value of the X variable at the end of the following snippet?
//
//    #include <stdio.h>
//    int main(void) {
//    int X = 1;
//
//    X = X + 2 * X;
//    X = X / 2 * X;
//    X = X + 2 + X;
//        printf("%d", X);
//        return 0;
//    }
//
//    8
//
//26. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i, t[4];
//        for(i = 0; i < 3; i++) {
//        	t[i] = i;
//        	t[i + 1] = 2 * t[i];
//        }
//        printf("%d\n", t[3]);
//        return 0;
//    }
//
//    the program outputs 4
//
//27. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 0;
//        if(i = 1)
//        	i = 2;
//        else
//        	i = 3;
//        printf("%d\n",i);
//        return 0;
//    }
//
//    the program outputs 2
//
//28. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 1, j = i + 2 * i;
//        switch(j) {
//        	default: j = 0;
//        	case  1: j++; break;
//        	case  2: j--;
//        	case  0: j++; break;
//        }
//        printf("%d", ++j);
//        return 0;
//    }
//
//    the program outputs 2
//
//29. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int a = -1, b = 1;
//        float i = 2.0, j = -2.0;
//        printf("%d\n", (a > b) + (b > a) + (i > j) + (j > i) + ('z' > 'a'));
//        return 0;
//    }
//
//    the program outputs 3
//
//30. Question 1 points
//
//What is the value of the X variable at the end of the following snippet?
//
//    #include <stdio.h>
//    int main(void) {
//
//    int X = 1;
//
//    X = X * X + 2; // 3
//    X = X / X * 2; // 2
//    X = X + 2 + X;
//    printf("%d",X);
//        return 0;
//    }
//
//    6
//
//31. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        float x = 3.0, y = 2.0;
//        int i = 1, j = 2;
//        x = (int)x / y + (float)i / j;
//        printf("%f",x);
//        return 0;
//    }
//
//    the program outputs 2.000000
//
//32. Question 1 points
//Which of the following strings is a valid variable name?
//
//    none of these
//
//33. Question 1 points
//
//Select the correct form for the following declaration:
//ptr is a pointer to pointer to void
//
//    void **ptr;
//
//34. Question 1 points
//
//What is the meaning of the following declaration?
//
//    void (*f)(int);
//
//    f is a pointer to function (int) returning void;
//
//35. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <string.h>
//    struct S {
//        char S[4];
//    };
//    int main(void) {
//        struct S S = { 'a', 'b' };
//        printf("%d", sizeof(S.S) - strlen(S.S) + S.S[3]);
//        return 0;
//    }
//
//    the program outputs 2
//
//36. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        char  *t1 [10];
//        char (*t2)[10];
//        printf("%d",(sizeof(t1) == sizeof(t2)) + sizeof(t1[0]));
//        return 0;
//    }
//
//    the program outputs 8
//
//37. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <stdlib.h>
//    int main(void) {
//        int *t = (int *) malloc(sizeof(int) + sizeof(int));
//        t++;
//        *t = 8;
//        t[-1] = *t / 2;
//        t--;
//        t[1] = *t / 2;
//        printf("%d\n",*t);
//        free(t);
//        return 0;
//    }
//
//    the program outputs 4
//
//38. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <string.h>
//    int main(void) {
//        char tt[20] = "0123456789";
//        strcpy(tt, tt + 2);
//        printf("%d\n", strlen(tt) - tt[9] + '5');
//        return 0;
//    }
//
//    the program outputs 4
//
//39. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int fun(int *t) {
//        return *(++t);
//    }
//    int main(void) {
//        int arr[] = { 8, 4, 2, 1 };
//        printf("%d\n", fun(arr + 2));
//        return 0;
//    }
//
//    the program outputs 1
//
//40. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    struct S {
//        int Var;
//        struct S *Str;
//    };
//    int main(void) {
//        struct S S[] = { { 8, NULL }, { 4, &S[0] }, { 2, &S[1] } };
//        printf("%d", S[2].Str->Str->Var);
//        return 0;
//    }
//
//    the program outputs 8
//
//41. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int fun(int t) {
//        return ++t;
//    }
//    int main(void) {
//        int arr[] = { 8, 4, 2, 1 };
//        printf("%d\n", fun(arr[3]) + arr[2]);
//        return 0;
//    }
//
//    the program outputs 4
//
//42. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <string.h>
//    #include <stdlib.h>
//    struct S {
//        char *S;
//    };
//
//    int main(void) {
//        struct S *S = (struct S *) malloc(sizeof(struct S));
//        S -> S = "abc";
//        printf("%d", strlen(S -> S + 2) + S -> S[3]);
//        free(S);
//        return 0;
//    }
//
//    the program outputs 1
//
//43. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int f(int v) {
//        	v = 2 * v;
//        return v * v;
//    }
//    int main(void) {
//        int i = 2;
//        f(i);
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs 2
//
//44. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    char *f(char *p) {
//        return p++;
//    }
//    char *g(char *p) {
//        return p += 2;
//    }
//    int main(void) {
//        char *s = "ABCDEFGHIJ";
//        char  p = *f(g(f(s + 6)));
//        printf("%d",p - 'A');
//        return 0;
//    }
//
//    the program outputs 8
//
//45. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    struct S {
//        int S[2];
//    };
//    void f(struct S S) {
//        S.S[0] = S.S[1] + 4;
//    }
//    int main(void) {
//        struct S S = { { 4, 8 } };
//        f(S);
//        printf("%d",S.S[1] / S.S[0]);
//        return 0;
//    }
//
//    the program outputs 2
//
//46. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    struct S {
//        int S[2];
//    };
//    void f(struct S *S) {
//        S->S[1] = S->S[0] + 2;
//    }
//    int main(void) {
//        struct S S = { { 4, 8 } }, *P = &S;
//        f(P);
//        printf("%d",S.S[1] / S.S[0]);
//        return 0;
//    }
//
//    the program outputs 1
//
//47. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int f(int t[][2]) {
//        return t[0][0] + t[0][1];
//    }
//    int main(void) {
//        int i,t[2][2] = { {0,4},{4,2} };
//        i = f(t);
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs 4
//
//48. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <string.h>
//    char *f(int p, char *s) {
//        s[p + 1] = '\0';
//        return s + 1;
//    }
//    int main(void) {
//        char s[] = "ABCDEF";
//        int i = strlen(f(1,s + 2));
//        printf("%d\n",i);
//        return 0;
//    }
//
//    the program outputs 1
//
//49. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define  ABC    10
//    #define  XYZ 	ABC - 1
//    int main(void) {
//        int i = 19;
//        i = i - XYZ;
//        printf("%d\n", i);
//        return 0;
//    }
//
//    the program outputs 8
//
//50. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        char s[20];
//        FILE *f = fopen("data","w");
//        int i = fputs("1248",f);
//        fclose(f);
//        f = fopen("data","r");
//        fgets(s + 2,4,f);
//        putchar(s[4]);
//        fclose(f);
//        return 0;
//    }
//
//    the program outputs 4
//
///* Module 8 */
//
// 1. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define	ALPHA	-1
//    #define   BETA	     - ALPHA
//    int main(void) {
//        int i = ALPHA + BETA * ALPHA * BETA;
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs -2
//
//2. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define	ALPHA	-2
//    int main(void) {
//        int i = -1;
//        i += ALPHA;
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs -3
//
//3. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define	ALPHA	-1-2
//    int main(void) {
//        int i = -1;
//        i = i * ALPHA;
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs -1
//
//4. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define	ALPHA	-1+2
//    int main(void) {
//        int i = -1;
//        i += ALPHA;
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs 0
//
//5. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define	ALPHA(x)	2*-x
//    int main(void) {
//        int i = ALPHA(1-1);
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs -3
//
//6. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define	ALPHA(x)	-x
//    int main(void) {
//        int i = ALPHA(2-1);
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs -3
//
//7. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define	ALPHA(x)	2*-x
//    int main(void) {
//        int i = ALPHA((1-1)); // i = 2*-(1-1)
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs 0
//
//8. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define	ALPHA	(-1-2)
//    int main(void) {
//        int i = -1;
//        i = -i * ALPHA;
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs -3
//
//9. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define	ALPHA(x,y)	x+y
//    int main(void) {
//        int i = -1;
//        int i2 = -2;
//        printf("%d",-ALPHA(i,i2));
//        return 0;
//    }
//
//    the program outputs -1
//
//10. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define	ALPHA(x,y)	x##2-y
//    int main(void) {
//        int i = -1;
//        int i2 = -2;
//        printf("%d",ALPHA(i,i2));
//        return 0;
//    }
//
//    the program outputs 0
//
//11. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define A(x) 	((x)?-1:0)
//    int main(void) {
//        int i = 2;
//        int i2 = A(i) * i;
//        printf("%d",i2);
//        return 0;
//    }
//
//    the program outputs -2
//
//12. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define	X 	1
//    #define Y	2
//
//    int main(void) {
//        int i =
//    #if X<<Y > 0
//        -X
//    #else
//        -Y
//    #endif
//        ;
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs -1
//
//13. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define  A
//    #define  C
//    int main(void) {
//        int i =
//    #ifdef A
//    #ifdef B
//        -1
//    #else
//        -2
//    #endif
//    #else
//        -3
//    #endif
//        ;
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs -2
//
//14. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define A(x) 	((x)?-1:0)
//    #define B(a)	!(a)
//    int main(void) {
//        int i = 2;
//        int i2 = A(B(i));
//        printf("%d",i2);
//        return 0;
//    }
//
//    the program outputs 0
//
//15. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int X = 1;
//    #define	X 1
//        int Y = X - 2;
//    #undef X
//        printf("%d",Y+X);
//        return 0;
//    }
//
//    the program outputs 0
//
//16. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define	X 	1
//    #define Y	2
//
//    int main(void) {
//        int i =
//    #if X>>Y > 0
//        -X
//    #else
//        -Y
//    #endif
//        ;
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs -2
//
//17. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define  B
//    #define  C
//    int main(void) {
//        int i =
//    #ifdef A
//    #ifdef C
//        -1
//    #else
//        -2
//    #endif
//    #else
//        -3
//    #endif
//        ;
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs -3
//
//18. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define A(x) 	#x
//    int main(void) {
//        int i = -1;
//        char *s = A(i);
//        i = -(s[0] == 'i');
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs -1
//
//19. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//
//    int main(void) {
//    #undef X
//        int X = 1;
//        int Y = X - 2;
//    #define	X -2
//        printf("%d",Y+X);
//        return 0;
//    }
//
//    the program outputs -3
//
//20. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #define  A
//    #define  C
//    int main(void) {
//        int i =
//    #ifdef A
//    #ifdef C
//        -1
//    #else
//        -2
//    #endif
//    #else
//        -3
//    #endif
//        ;
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs -1
//
///* Module 7 */
//
// 1. Question 2 points
//
//The following string:
//
//JohnDoe
//
//is a valid file name in
//
//    MS Windows systems
//    Unix/Linux systems
//
//2. Question 1 points
//
//The following string:
//
//HomeDir/HomeFile
//
//is a valid file name in:
//
//    Unix/Linux systems
//
//3. Question 1 points
//
//Unix/Linux systems treat the following names
//
//    JohnDoe
//    johndoe
//
//    as different file names
//
//4. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    int main(void) {
//        FILE *f;
//        f = fopen("file","wb");
//        printf("%d",f != NULL);
//        fclose(f);
//        return 0;
//    }
//
//    the compilation fails
//
//5. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        FILE f;
//        f = fopen("file","wb");
//        printf("%d",f != NULL);
//        fclose(f);
//        return 0;
//    }
//
//    the compilation fails
//
//6. Question 1 points
//
//What happens if you try to compile and run this program assuming that fopen() succeeds?
//
//    #include <stdio.h>
//    int main(void) {
//        FILE *f;
//        f = fopen("file","wb");
//        printf("%d",f != NULL);
//        fclose(f);
//        return 0;
//    }
//
//    the program outputs 1
//
//7. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i;
//        i = fprintf(stdin,"Hello!");
//        printf("%d",i == EOF);
//        return 0;
//    }
//
//    the program outputs 1
//
//8. Question 1 points
//
//The following string:
//
//D:\USERDIR\johndoe.txt
//
//is a valid file name in
//
//    MS Windows systems
//
//9. Question 1 points
//
//What happens if you try to compile and run this program assuming that fopen() succeeds?
//
//    #include <stdio.h>
//    int main(void) {
//        FILE *f = fopen("file","w");
//        int i = fputs("Hello!",f);
//        printf("%d",i != EOF);
//        return 0;
//    }
//
//    the program outputs 1
//
//10. Question 1 points
//
//What happens if you try to compile and run this program assuming that fopen() succeeds?
//
//    #include <stdio.h>
//    int main(void) {
//        FILE *f = fopen("file","w");
//        int i = fputs(f,"Hello!");
//        printf("%d",i != EOF);
//        fclose(f);
//        return 0;
//    }
//
//    the compilation or execution fails
//
//11. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        FILE *f;
//        int i = fprintf(f,"Hello!");
//        printf("%d",i == EOF);
//        return 0;
//    }
//
//    the compilation or execution fails
//
//12. Question 1 points
//
//What happens if you try to compile and run this program assuming that fopen() succeeds?
//
//    #include <stdio.h>
//    int main(void) {
//        FILE *f = fopen("file","w");
//        int i = fprintf(f,"Hello!");
//        printf("%d",i != EOF);
//        return 0;
//    }
//
//    the program outputs 1
//
//13. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i;
//        i = fprintf(stderr,"Hello!");
//        printf("%d",i == EOF);
//        return 0;
//    }
//
//    the program outputs 0 to the stdout stream
//
//14. Question 1 points
//
//What happens if you try to compile and run this program assuming that fopen() succeeds?
//
//    #include <stdio.h>
//    int main(void) {
//        char s[20];
//        FILE *f = fopen("file","w");
//        int i = fputs("12A",f);
//        fclose(f);
//        f = fopen("file","r");
//        fgets(s,20,f);
//        puts(s);
//        fclose(f);
//        return 0;
//    }
//
//    the program outputs 12A
//
//15. Question 1 points
//
//What happens if you try to compile and run this program assuming that fopen() succeeds?
//
//    #include <stdio.h>
//    int main(void) {
//        char s[20];
//        FILE *f = fopen("file","w");
//        int i = fputs("12A",f);
//        fclose(f);
//        f = fopen("file","r");
//        fgets(s,2,f);
//        puts(s);
//        fclose(f);
//        return 0;
//    }
//
//    the program outputs 1
//
//16. Question 1 points
//
//What happens if you try to compile and run this program assuming that fopen() succeeds?
//
//    #include <stdio.h>
//    int main(void) {
//        FILE *f = fopen("file","w");
//        int i;
//        fputs("12A",f);
//        fclose(f);
//        f = fopen("file","r");
//        fseek(f);
//        i = ftell(f,0,SEEK_END);
//        fclose(f);
//        printf("%d",i);
//        return 0;
//    }
//
//    the compilation or execution fails
//
//17. Question 1 points
//
//What happens if you try to compile and run this program assuming that fopen() succeeds?
//
//    #include <stdio.h>
//    int main(void) {
//        FILE *f = fopen("file","w");
//        int i;
//        fputs("12A",f);
//        fclose(f);
//        f = fopen("file","r");
//        fseek(f,0,SEEK_END);
//        i = ftell(f);
//        fclose(f);
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs 3
//
//18. Question 1 points
//
//What happens if you try to compile and run this program assuming that fopen() succeeds?
//
//    #include <stdio.h>
//    int main(void) {
//        FILE *f = fopen("file","w");
//        int i;
//        fputs("12A",f);
//        fclose(f);
//        f = fopen("file","r");
//        fscanf(f,"%d",&i);
//        fclose(f);
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs 12
//
//19. Question 1 points
//
//What happens if you try to compile and run this program assuming that fopen() succeeds?
//
//    #include <stdio.h>
//    int main(void) {
//        FILE *f = fopen("file","w");
//        char c;
//        fputs("12A",f);
//        fclose(f);
//        f = fopen("file","r");
//        fscanf(f,"%c",&c);
//        fclose(f);
//        printf("%c",c);
//        return 0;
//    }
//
//    the program outputs 12
//
//    #include <stdio.h>
//    int main(void) {
//        FILE *f = fopen("file","w");
//        char c;
//        fputs("12A",f);
//        fclose(f);
//        f = fopen("file","r");
//        fscanf(f,"%c",&c);
//        fclose(f);
//        printf("%c",c);
//        return 0;
//    }
//
//    the program outputs 1
//
//20. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        FILE *f = fopen("file","w");
//        float f;
//        fputs("12A",f);
//        fclose(f);
//        f = fopen("file","r");
//        fscanf(f,"%f",&f);
//        fclose(f);
//        printf("%f",f);
//        return 0;
//    }
//
//    the compilation or execution fails
//
//
///* Module 6 */
//
// 1. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    void f(void) {
//    }
//    int main(void) {
//        int i;
//        i = f();
//        printf("%d",i);
//        return 0;
//    }
//
//    compilation fails
//
//2. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int f(int i) {
//        return ++i;
//    }
//    int main(void) {
//        int i = 0;
//        i = f(f(i));
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs 2
//
//3. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    void f(int i) {
//        i++;
//    }
//    int main(void) {
//        int i = 1;
//        f(i);
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs 1
//
//4. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int i = 0;
//    void f(void) {
//        int i = 1;
//    }
//    int main(void) {
//        f();
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs 0
//
//5. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int f(void) {
//    }
//    int main(void) {
//        int i;
//        i = f();
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs an unpredictable value
//
//6. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int f(int i) {
//       ++i;
//        return i;
//    }
//    int main(void) {
//        int i = 1;
//        i = f(i);
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs 2
//
//7. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 0;
//        {
//            int i = 1;
//            main.i = i;
//        }
//        printf("%d",i);
//        return 0;
//    }
//
//    compilations fails
//
//8. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int i = 0;
//    int *f(int *i) {
//        (*i)++;
//        return i;
//    }
//    int main(void) {
//        int i = 1;
//        i = *f(&i);
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs 2
//
//9. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int i = 1;
//    int *f(void) {
//        return &i;
//    }
//    int main(void) {
//        int i = 0;
//        i = *f();
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs 1
//
//10. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int i = 0;
//    void f(void) {
//        int i = 1;
//    }
//    int main(void) {
//        int i = 2;
//        f();
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs 2
//
//11. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int i = 2;
//    int *f(void) {
//        return &i;
//    }
//    int main(void) {
//        int *i;
//        i = f();
//        printf("%d",++(*i));
//        return 0;
//    }
//
//    the program outputs 3
//
//12. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int f(int t[\]) {
//        return t[0\] + t[2\];
//    }
//    int main(void) {
//        int i,a[\] = { -2,-1,0,1,2 };
//        i = f(a + 2);
//        printf("%d",i);
//        return 0;
//    }
//
//    the compilation fails
//
//13. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    struct S {
//        int S;
//    };
//    int f(struct S s) {
//        return --s.S;
//    }
//    int main(void) {
//        int i;
//        struct S S = { 2 };
//        i = f(S);
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs 1
//
//14. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <string.h>
//    void f(char *s,int i) {
//        *(s + i) = '\0';
//    }
//    int main(void) {
//        char a[\] = { 'a','b','c','d' };
//        f(a[1\],1);
//        printf("%d",strlen(a));
//        return 0;
//    }
//
//    the compilation fails
//
//15. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int f(int t[\][\]) {
//        return t[0\][0\] + t[1\][0\];
//    }
//    int main(void) {
//        int i,a[2\][2\] = { {-2,-1},{1,2} };
//        i = f(a + 2);
//        printf("%d",i);
//        return 0;
//    }
//
//    the compilation fails
//
//16. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    struct S {
//        int S;
//    };
//    int f(struct S *s) {
//        return --s.S;
//    }
//    int main(void) {
//        int i;
//        struct S S = { 2 };
//        i = f(S);
//        printf("%d",i);
//        return 0;
//    }
//
//    compilation fails
//
//17. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int f(char t[\]) {
//        return t[1\] - t[0\];
//    }
//    int main(void) {
//        int i = 2;
//        i -= f("ABDGK" + 1);
//        printf("%d",i);
//        return 0;
//    }
//
//    the compilation fails
//
//18. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int f(char t[\]) {
//        return t[0\] - t[-1\];
//    }
//    int main(void) {
//        int i = 2;
//        i -= f("ABDGK" + 1);
//        printf("%d",i);
//        return 0;
//    }
//
//    the compilation fails
//
//19. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int f(int t[2\][\]) {
//        return t[0\][0\] + t[1\][0\];
//    }
//    int main(void) {
//        int i,a[2\][2\] = { {-2,-1},{1,2} };
//        i = f(a + 2);
//        printf("%d",i);
//        return 0;
//    }
//
//    the compilation fails
//
//20. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <string.h>
//    void f(char *s,int i) {
//        *(s + i) = '\0';
//    }
//    int main(void) {
//        char a[\] = { 'a','b','c','d' };
//        f(a+1,1);
//        printf("%d",strlen(a));
//        return 0;
//    }
//
//    the compilation fails
//
///* Module 5 */
//
// 1. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        char s[10] = "ABCDE", *p = s + 3;
//
//        printf("%d", p[1] - p[-1]);
//        return 0;
//    }
//
//    the program outputs 2
//
//2. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        char s[] = "ABCDE", *p = s + 5;
//
//        printf("%d", p[-1] - *(p - 4));
//        return 0;
//    }
//
//    the program outputs 3
//
//3. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int t[] = { 1, 2, 3, 4, 5 }, *p = t;
//
//        *p++;
//        (*p)++;
//        *p++;
//        printf("%d",p[-1]);
//        return 0;
//    }
//
//    the program outputs 3
//
//4. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <stdlib.h>
//    int main(void) {
//        int t[] = { 8, 4, 2, 1 };
//        int *p = (int *)malloc(sizeof(t));
//        int i;
//        for(i = 0; i < 4; i++)
//        	p[3 - i] = t[i];
//        printf("%d",*(p + 2));
//        free(p);
//        return 0;
//    }
//
//    the program outputs 4
//
//5. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        char *p = "12345", *q = p - 10;
//
//        printf("%d", q[14] - q[13]);
//        return 0;
//    }
//
//    the program outputs 1
//
//6. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int t[1][2][2] = { { { 1, 2 }, { 3, 4 } } };
//        int s = 0, i, j, k;
//
//        for(i = 1; i > 0; i -= 2)
//        	for(j = 1; j < 2; j += 2)
//        		for(k = 0; k < 3; k += 3)
//        		s += t[k][i - 1][j];
//        printf("%d",s);
//        return 0;
//    }
//
//    the program outputs 2
//
//7. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <stdlib.h>
//    int main(void) {
//        int *p = (int *)malloc(2 * sizeof(int));
//        *p = 2;
//        *(p + 1) = *(p) - 1;
//        *p = p[1];
//        printf("%d",*p);
//        free(p);
//        return 0;
//    }
//
//    the program outputs 1
//
//8. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int t[2][2] = { 1, 2, 4, 8 };
//        int s = 0, i, j;
//
//        for(i = 2; i; i -= 2)
//        	for(j = 1; j < 2; j += 2)
//        		s += t[i - 1][j];
//        printf("%d",s);
//        return 0;
//    }
//
//    the program outputs 8
//
//9. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <stdlib.h>
//    int main(void) {
//        int i,j;
//        int **p = (int **)malloc(2 * sizeof(int *));
//        p[0] = (int *)malloc(2 * sizeof(int));
//        p[1] = p[0];
//        for(i = 0; i < 2; i++)
//        	for(j = 0; j < 2; j++)
//        		p[i][j] = i + j;
//        printf("%d",p[0][0]);
//        return 0;
//    }
//
//    the program outputs 1
//
//10. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <stdlib.h>
//    int main(void) {
//        int i,j;
//        int **p = (int **)malloc(2 * sizeof(int *));
//        p[0] = (int *)malloc(2 * sizeof(int));
//        p[1] = (int *)malloc(2 * sizeof(int));
//        for(i = 0; i < 2; i++)
//        	for(j = 0; j < 2; j++)
//        		p[i][j] = i + j;
//        printf("%d",p[0][0]);
//        return 0;
//    }
//
//    the program outputs 0
//
//11. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int *t[10];
//        int (*u)[10];
//        printf("%d",sizeof(t) != sizeof(u));
//        return 0;
//    }
//
//    the program outputs 1
//
//12. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int *(t[10]);
//        int *u[10];
//        printf("%d",sizeof(t) != sizeof(u));
//        return 0;
//    }
//
//    the program outputs 0
//
//13. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <string.h>
//    struct Q {
//        char S[3];
//    };
//    struct S {
//        struct Q Q;
//    };
//    int main(void) {
//        struct S S = { '\0', '\0','\0' };
//        S.Q.S[0] = 'A';
//        S.Q.S[1] = 'B';
//        printf("%d",strlen(S.Q.S));
//        return 0;
//    }
//
//    the program outputs 2
//
//14. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    struct S {
//        int S;
//    };
//    int main(void) {
//        struct S S;
//        S.S = sizeof(struct S) / sizeof(S);
//        printf("%d",S.S);
//        return 0;
//    }
//
//    the program outputs 1
//
//15. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <stdlib.h>
//    struct S {
//        int 	  a;
//        struct S *b;
//    };
//    int main(void) {
//        struct S *x = (struct S*) malloc(sizeof(struct S));
//        struct S *y = (struct S*) malloc(sizeof(struct S));
//        x->a = 2;
//        x->b = y;
//        y->a = 4;
//        y->b = x;
//        printf("%d",x->b->b->b->a);
//        free(x); free(y);
//        return 0;
//    }
//
//    the program outputs 4
//
//16. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    struct S {
//        int a[2];
//    };
//    int main(void) {
//        struct S S[2];
//        int i;
//        for(i = 0; i < 2; i++)
//        	S[i].a[1-i] = 4 * !i;
//        printf("%d",S[0].a[1]);
//        return 0;
//    }
//
//    the program outputs 4
//
//17. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <string.h>
//    struct Q {
//        char S[3];
//    };
//    struct S {
//        struct Q Q;
//    };
//    int main(void) {
//        struct S S = { '\0', '\0','\0' };
//        S.Q.S[0] = 'A';
//        S.Q.S[2] = 'B';
//        printf("%d",strlen(S.Q.S));
//        return 0;
//    }
//
//    the program outputs 1
//
//18. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    struct Q {
//        int a,b,c;
//    };
//    struct S {
//        int a,b,c;
//        struct Q Q;
//    };
//    int main(void) {
//        struct Q Q = { 3,2,1 };
//        struct S S = { 4,5,6 };
//        S.Q = Q;
//        printf("%d",S.b - S.Q.b);
//        return 0;
//    }
//
//    the program outputs 3
//
//19. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    struct S {
//        char *p;
//    };
//    int main(void) {
//        char *p = "abcd";
//        struct S S[2];
//        int i;
//        for(i = 0; i < 2; i++)
//        	S[i].p = p + i;
//        printf("%c",S[1].p[0]);
//        return 0;
//    }
//
//    the program outputs b
//
//20. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <stdlib.h>
//    struct S {
//        int 	  a;
//        struct S *b;
//    };
//    int main(void) {
//        struct S *x = (struct S*) malloc(sizeof(struct S));
//        struct S *y = (struct S*) malloc(sizeof(struct S));
//        struct S *p;
//        x->a = 2; x->b = y;
//        y->a = 4; y->b = x;
//        p = x;
//        p = p->b->b->b->b;
//        printf("%d",p->a);
//        return 0;
//    }
//
//    the program outputs 2
//
///* Module 4 */
//
// 1. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i, t[5];
//
//        t[0] = 0;
//        for(i = 1; i < 5; i++)
//        	t[i] = t[i - 1] + i;
//        printf("%d",t[4]);
//        return 0;
//    }
//
//    the program outputs 10
//
//2. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i, t[5];
//
//        t[4] = 0;
//        for(i = 3; i >= 0; i--)
//        	t[i] = t[4] * i;
//        printf("%d",t[0]);
//        return 0;
//    }
//
//    the program outputs 0
//
//3. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <stdio.h>
//    int main(void) {
//        int i = 3, j = i - 2;
//
//        switch(i + 2) {
//        case 1: j++;
//        case 2: j++;
//        default:j = 0;
//        case 0: j++; break;
//        }
//        printf("%d",j);
//        return 0;
//    }
//
//    the program outputs 1
//
//4. Question 1 points
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 3, j = i - 2;
//        switch(i - 2) {
//        case 1: j++;
//        case 2: j++;
//        case 0: j++; break;
//        default:j = 0;
//        }
//        printf("%d",j);
//        return 0;
//    }
//
//    the program outputs 4
//
//5. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int t[2];
//
//        t[0] = 1; t[1] = 0;
//        printf("%d",t[t[t[t[t[0]]]]]);
//        return 0;
//    }
//
//    the program outputs 1
//
//6. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i,t[4] = { 1, 2, 4, 8 };
//
//        for(i = 0; i < 2 ; i++)
//        	t[i] = t[3 - i];
//        printf("%d",t[2]);
//        return 0;
//    }
//
//    the program outputs 4
//
//7. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        char t[] = { 'a', 'b', 'A', 'B' };
//
//        printf("%d",t[1] - t[0] + t[3] - t[2]);
//        return 0;
//    }
//
//    the program outputs 2
//
//8. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int s,i,t[] = { 0, 1, 2, 3, 4, 5 };
//
//        s = 1;
//        for(i = 2; i < 6 ; i += i + 1)
//        	s += t[i];
//        printf("%d",s);
//        return 0;
//    }
//
//    the program outputs 8
//
//9. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        float t[5] = { 1E0, 1E1, 1E2, 1E3, 1E4 };
//
//        printf("%f",t[0] + t[2] + t[3]);
//        return 0;
//    }
//
//    the program outputs 1101.000000
//
//10. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i,t[3];
//
//        for(i = 2; i >=0 ; i--)
//        	t[i] = i - 1;
//        printf("%d",t[1] - t[t[0] + t[2]]);
//        return 0;
//    }
//
//    the program outputs 1
//
//11. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int t[6];
//
//        printf("%d",sizeof(t) / sizeof(int));
//        return 0;
//    }
//
//    the program outputs 6
//
//12. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 1, *j = &i, **k = &j;
//
//        printf("%d",**k);
//        return 0;
//    }
//
//    the program outputs 1
//
//13. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <string.h>
//    int main(void) {
//        char s[10] = "CABDE";
//
//        strcat(s + 2, "CABDE");
//        printf("%d", s[0] - s[2]);
//        return 0;
//    }
//
//    the program outputs 1
//
//14. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int t[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, *p = t + 4;
//
//        p += *p;
//        printf("%d",*p);
//        return 0;
//    }
//
//    the program outputs 10
//
//15. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int t[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, *p = t;
//
//        p += 2;
//        p += p[-1];
//        printf("%d",*p);
//        return 0;
//    }
//
//    the program outputs 5
//
//16. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        char t[3];
//
//        printf("%d",sizeof(t) - sizeof(t[0]));
//        return 0;
//    }
//
//    the program outputs 2
//
//17. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        printf("%c","ACEGIK"[3] - 1);
//        return 0;
//    }
//
//    the program outputs F
//
//18. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        char s[] = "\0\1\2\3\4";
//
//        printf("%c",'A' + s[3]);
//        return 0;
//    }
//
//    the program outputs D
//
//19. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <string.h>
//    int main(void) {
//        char s[10] = "ABCDE";
//
//        strcpy(s + 2, "ABCDE");
//        printf("%d", s[0] - s[2]);
//        return 0;
//    }
//
//    the program outputs 0
//
//20. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    #include <string.h>
//    int main(void) {
//        char s[10] = "ABCDE";
//
//        strcat(s + 2, "ABCDE");
//        printf("%d", s[0] - s[2]);
//        return 0;
//    }
//
//    the program outputs -2
//
///* Module 3 */
//
// 1. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        float x,y;
//        int i,j;
//        x = 1.5; y = 2.0;
//        i = 2; j = 3;
//        x = x * y + i / j;
//        printf("%f",x);
//        return 0;
//    }
//
//    the program outputs 3.000000
//
//2. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i, j, k;
//        i = -1;
//        j = 1;
//        if(i)
//        	j--;
//        if(j)
//        	i++;
//        k = i * j;
//        printf("%d",k);
//        return 0;
//    }
//
//    the program outputs 0
//
//3. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i, j, k;
//        i = 0;
//        j = 0;
//        if(j)
//        	j--;
//        else
//        	i++;
//        if(i)
//        	i--;
//        else
//        	j++;
//
//        k = i + j;
//        printf("%d",k);
//        return 0;
//    }
//
//    the program outputs 0
//
//4. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        double x = -.1;
//        int i = x;
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs 0
//
//5. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i;
//        i = 1;
//        while(i < 16)
//        	i *= 2;
//        printf("%d",i);
//        return 0;
//    }
//
//    the program outputs 16
//
//6. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i, j, k;
//        i = 2;
//        j = 3;
//        if(j)
//        	j--;
//        else if(i)
//        	i++;
//        else
//        	j++;
//        if(j)
//        	i--;
//        else if(j)
//        	j++;
//        else
//        	j = 0;
//        k = i + j;
//        printf("%d",k);
//        return 0;
//    }
//
//    the program outputs 3
//
//7. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 7, j = i - i;
//        while(i) {
//        	i /= 2;
//        	j++;
//        }
//        printf("%d",j);
//        return 0;
//    }
//
//    the program outputs 3
//
//8. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i, j;
//        i = 1; j = 1;
//        while(i < 16) {
//        	i += 4;
//        	j++;
//        }
//        printf("%d",j);
//        return 0;
//    }
//
//    the program outputs 5
//
//9. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        float x,y;
//        int i,j;
//        x = 1.5; y = 2.0;
//        i = 2; j = 4;
//        x = x * y + (float)i / j;
//        printf("%f",x);
//        return 0;
//    }
//
//    the program outputs 3.500000
//
//10. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 1, j = -2, k;
//        k = (i >= 0) || (j >= 00) && (i <= 0) || (j <= 0);
//        printf("%d",k);
//        return 0;
//    }
//
//    the program outputs 1
//
//11. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 7, j = i - i;
//        while(!i) {
//        	i /= 2;
//        	j++;
//        }
//        printf("%d",j);
//        return 0;
//    }
//
//    the program outputs 0
//
//12. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 1, j = -2;
//        for(;;) {
//        	i *= 3;
//        	j++;
//        	if(i > 30)
//        		break;
//        }
//        printf("%d",j);
//        return 0;
//    }
//
//    the program outputs 2
//
//13. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i, j = 0;
//        for(i = 0; !i ; i++)
//        	j++;
//        printf("%d",j);
//        return 0;
//    }
//
//    the program outputs 1
//
//14. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 1, j = -2, k;
//        k = (i >= 0) && (j >= 00) || (i <= 0) && (j <= 0);
//        printf("%d",k);
//        return 0;
//    }
//
//    the program outputs 1
//
//15. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i, j = 1;
//        for(i = 11; i > 0; i /= 3)
//        	j++;
//        printf("%d",j);
//        return 0;
//    }
//
//    the program outputs 4
//
//16. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 1, j = -2, k;
//        k = !(i >= 0) || !(j >= 00) && !(i <= 0) || !(j <= 0);
//        printf("%d",k);
//        return 0;
//    }
//
//    the program outputs 1
//
//17. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 1, j = 0, k;
//        k = i & j;
//        k |= !!k;
//        printf("%d",k);
//        return 0;
//    }
//
//    the program outputs 0
//
//18. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 1, j = 0, k;
//        k = (i ^ j) + (!i ^ j) + (i ^ !j) + (!i ^ !j);
//        printf("%d",k);
//        return 0;
//    }
//
//    the program outputs 2
//
//19. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 1, j = 0, k;
//        k = !i | j;
//        k = !k;
//        printf("%d",k);
//        return 0;
//    }
//
//    the program outputs 1
//
//20. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i = 0, j = 1, k;
//        k = i << j + j << i;
//        printf("%d",k);
//        return 0;
//    }
//
//    the program outputs 0
//
///* Module 2 */
//
// 1. Question 1 points
//
//What is the value of the following integer literal?
//
//08
//
//    10
//
//2. Question 1 points
//Which of the following strings is a proper integer number (in the “C” language sense)?
//
//    123456
//
//3. Question 1 points
//
//What is the value of the following integer literal?
//
//# include <stdio.h>
//
//void main () {
//int x = 0x8;
//printf("%d", x);
//}
//
//    8
//
//4. Question 1 points
//
//Is the following declaration valid?
//
//int var, var;
//
//    No
//
//5. Question 1 points
//Which of the following strings is an invalid variable name?
//
//    _0_
//    _0
//    0_
//    ___
//
//6. Question 1 points
//
//What is the value of the var variable at the end of the following snippet?
//
//    int var;
//    var = 2;
//    var = var * var;
//    var = var + var;
//     /*
//    var = var / var;
//    var = var % var;
//      */
//
//    8
//
//7. Question 1 points
//
//What is the value of the var variable at the end of the following snippet?
//
//    int var;
//    var = 2;
//    var = var * var;
//    var = var + var;
//    var = var / var;
//    var = var % var;
//
//    0
//
//8. Question 1 points
//Which of the following strings is a valid variable name?
//
//    Monte_Carlo
//
//9. Question 1 points
//
//What is the value of the x variable at the end of the following snippet?
//
//int x;
//x = 1 / 2 * 3;
///***
//
//    0
//
//10. Question 1 points
//Which of the following strings is a proper floating-point number (in the ”C” language sense)?
//
//    123.456
//
//11. Question 1 points
//
//What is the value of the x variable at the end of the following snippet?
//
//float x;
//x = 1. / 2 * 3;
///***
//
//    1.5
//
//12. Question 1 points
//
//What is the value of the following floating-point literal?
//
//8765E-2
//
//    87.65
//
//13. Question 1 points
//
//What is the value of the k variable at the end of the following snippet?
//
//    int i,j,k;
//
//    i = 4;
//    j = 5;
//    --i;
//    k = i * j;
//
//    15
//
//14. Question 1 points
//
//What is the value of the k variable at the end of the following snippet?
//
//    int i,j,k;
//
//    i = 4;
//    j = 5;
//    ++j;
//    k = i * j;
//
//    24
//
//15. Question 1 points
//
//What is the value of the c variable at the end of the following snippet?
//
//char c;
//
//c = '\';
//
//    the assignment is invalid and causes a compilation error
//
//16. Question 1 points
//
//What is the value of the x variable at the end of the following snippet?
//
//int x;
//x = 1 / 2;
//
//    0
//
//17. Question 1 points
//
//What is the value of the k variable at the end of the following snippet?
//
//int i,j,k;
//
// i = 3;
// j = -3;
// k = i * j; //-9
// k += j; // -9 -3 = -12
// k /= i; // -12 / 3 = -4
//
//    -4
//
//18. Question 1 points
//
//What is the value of the c variable at the end of the following snippet?
//

//    #include <stdio.h>
//    int main(void)
//    {
//    char c;
//
//    c = 'a';
//    c -= ' ';
//    printf("%c", c);
//    }
//
//    A
//
//19. Question 1 points
//
//What is the value of the k variable at the end of the following snippet?
//
//    int i,j,k;
//
//    i = 3;
//    j = -3;
//    k = (i >= i) + (j <= j) + (i == j) + (i > j); // 1 1 0 1
//
//    3
//
//20. Question 1 points
//
//What happens if you try to compile and run this program?
//
//    #include <stdio.h>
//    int main(void) {
//        int i,j,k;
//        i = 2;
//        j = -2;
//        if(i)
//            i--;
//        if(j)
//            j++;
//        k = i * j;
//        printf("%d",k);
//        return 0;
//    }
//
//    -1
//
///* Module 1 */
//
// 1. Question 1 points
//Every variable has the following attributes:
//
//    type, name, value
//
//2. Question 1 points
//A compiler is
//
//    a computer program designed to translate programs from a high-level language into a machine language
//
//3. Question 1 points
//The English language is an example of
//
//    a natural language
//
//4. Question 1 points
//
//The following string:
//
//The following string:
//
//    can be used as a variable name
//    cannot be used as a variable name
//
//5. Question 1 points
//Data of type int is
//
//    an integer number
//
//6. Question 1 points
//A high-level language is
//
//    a type of programming language
//
//7. Question 1 points
//
//The following string:
//
//101Dalmatians
//
//    cannot be used as a variable name
//
//8. Question 1 points
//
//What is the value of the var variable after executing the following snippet of code:
//
//int var;
//var = 100;
//var = var + 100;
//var = var + var;
//
//    400
//
//9. Question 1 points
//A keyword is a word that
//
//    cannot be used in the meaning other than defined in the language standard
//
//10. Question 1 points
//A comment placed anywhere inside the code is a syntactic equivalent of
//
//    a space
//
