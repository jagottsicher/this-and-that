#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number = 23;
    int *ptr_number = NULL;

    ptr_number = &number;

    printf("Address of the pointer: \n");
    printf("Value of the pointer: %p\n", ptr_number);
    printf("Value of what the pointer is pointing to: \n\n");


    printf("\n\n");
    return 0;
}
