#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number = 23;
    int *ptr_number = NULL;
    ptr_number = &number;
    printf("Adress of the Pointer: %p (where the pointer itself is located)\n", &ptr_number);
    printf("Value of the pointer: %p (the value of the pointer is the adress the pointer is pointing to)\n", ptr_number);
    printf("Value of what the pointer is pointing to: %d (the value stored under the address the pointer is pointing to)\n\n", *ptr_number );

    printf("\n\n");
    return 0;
}
