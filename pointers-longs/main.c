#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long num1 = 0L;
    long num2 = 0L;
    long *ptr_num = NULL;

    ptr_num = &num1; // pointer points to address of num1
    *ptr_num = 2L; // the value stored at that address (num1) is set to 2
    ++num2; // num2 is incremented by 1, means is 1 now
    num2 += *ptr_num; // to num2 the value stored at address pointer ptr_num is pointing to is added, num2 = 1+2 = 3

    ptr_num = &num2; // ptr_num points now to address of num2
    ++*ptr_num; // the value stored under adress ptr_num is pointing to (so num2) is incremented by 1 (num2 is 4 now)

    printf("num1 = %ld   num2 = %ld   *ptr_num = %ld   ptr_num + num2 = %ld \n", num1, num2, *ptr_num, *ptr_num + num2); // 2 (set), 4, 4, 8 (4+4)
    printf("\n\n");

    return 0;
}
