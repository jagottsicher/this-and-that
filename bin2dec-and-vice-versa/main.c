#include <stdio.h>
#include <math.h>

int convertBin2Dec(long long n);
long long convertDec2Bin(int n);



void main() {
long long binaryNumber;
int decimalNumber;

    printf("Enter a binary number: \n");
    scanf("%lld", &binaryNumber);
    printf("%d\n",convertBin2Dec(binaryNumber));


    printf("Enter a decimal number: \n");
    scanf("%d", &decimalNumber);
    printf("%lld\n",convertDec2Bin(decimalNumber));

}

int convertBin2Dec(long long n)
{
    int decimal = 0,  i = 0, rest = 0;

    while (n != 0) {
            rest = n % 10;
            n = n / 10;
            decimal += rest*pow(2, i);
            ++i;
        }

    return decimal;
}


long long convertDec2Bin(int n)
{
    long long binary = 0;
    int rest, i = 1;

    while (n != 0) {
        rest = n % 2;
        n = n / 2;
        binary += rest * i;
        i = i * 10;
    }

    return binary;
}

