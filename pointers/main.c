#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number = 23;
    int *ptr_number = NULL;

    printf("An interger variable called \"number\" was initialized with the value %d.\n", number);
    printf("You can easily find the address in memory where the value of \"number\") is stored with referencing the variable with an ampersand in front like this: \"&number\". In return you get the address: %p\n\n", &number);

    printf("This address can be stored in a pointer, e.g. in *ptr_number, e.g. with ptr_number = &number.\n");
    ptr_number = &number;
    printf("The pointer now stored NOT the value of the variable, but the address where the value of the variable is stored. \nThat is the reason pointer and variable needs to have the same type.\n\n");
    printf("int number = 23;\n");
    printf("nt *ptr_number = NULL;\n");
    printf("ptr_number = &number;\n\n");
    printf("OVERVIEW\n");
    printf("#########################################################################################################################\n");
    printf("number\t\t\tvalue of variable number:\t\t\t\t\t\t\t%d\n", number);
    printf("&number,\t\taddress variable number:\t\t\t\t\t\t\t%p\n", &number);
    printf("sizeof(number)\t\tsize of that value:\t\t\t\t\t\t\t\t%d\n\n", sizeof(number));

    printf("ptr_number\t\tpointer value (address where it points to):\t\t\t\t\t%p\n", ptr_number);
    printf("*ptr_number\t\tvalue stored at the address the pointer points to (referenced by the pointer:\t%d\n", *ptr_number);
    printf("sizeof(ptr_number)\toutput of the size of the pointer (an address)\t\t\t\t\t%d\n\n", sizeof(ptr_number));

    printf("(void*)&ptr_number)\taddress of the pointer itself (seldom used):\t\t\t\t\t%p\n", (void*)&ptr_number);

    printf("\n\n");
    return 0;
}
