#include <stdio.h>
#include <stdlib.h>

int lengthOfAnString(const char *input);

int main(void)
{
    const char stringOne[] = "This is the SOURCE String.";
    int theLength = lengthOfAnString(stringOne);

    printf("The length of the string \"%s\" is %d characters.\n", stringOne, theLength);
}

// final version, calculating with pointers
int lengthOfAnString(const char *input)
{
    const char *lastAddress = input;

    while (*lastAddress)
        ++lastAddress;

return lastAddress - input;
}

// first version, but not calculating with pointers
//int lengthOfAnString(const char *input)
//{
//    int len = 0;
//
//    while (*input)
//    {
//        ++input;
//        ++len;
//    }
//
//return len;
//}
