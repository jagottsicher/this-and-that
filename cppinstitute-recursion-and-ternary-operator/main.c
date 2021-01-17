#include <stdio.h>

int factorial(int n);

int main(int argc, char *argv[]) {
    int n, result;

    printf("Enter n: ");
    scanf("%d", &n);
    if(n <= 0 || n > 20) {
        printf("Bad news: you've entered an invalid value.");
        return 1;
    }

    result = factorial(n);

    printf("Factorial of %d is %d\n", n, result);
    return 0;
}

//int factorial(int n) {
//    if(n == 1)
//        return 1;
//    else
//        return n * factorial(n – 1);
//}

// version as ternary operator ?:
// assign to i depending on condition true first (left of colon) value else second value (right of colon)
// e.g.: i = i > 0 ? 1 : 0;

// own version - WRONG, DOES NOT WORK! WHY?
//int factorial(int n) {
//return n = (n == 1) ? 1 : factorial(n - 1);
//}

// cpp version
int factorial(int n) {
    // return n, test n if NOT NULL, tested is n times factorial of the next smaller number. else 1 is returned.\
        most inner revursion is testing 1 times factorial(0) = 1 x 1 = 1
     return n ? n * factorial (n - 1) : 1;
}