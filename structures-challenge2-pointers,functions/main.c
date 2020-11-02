#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// struct
struct item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};

// functions headers which take pointers to structs
void readItem (struct item *ptr_readIn);
void printItem (struct item *ptr_printOut);

int main()
{
    // declare a struct (so mem is reserved for the struct)
    struct item anItem;
    // prepare a pointer which shall point to such a struct
    struct item *ptr_toItem;
    // let the pointer point to the address of the struct
    ptr_toItem = &anItem;
    // allocate memory for the first elelement of the struct, which is a pointer itself.
    // It is a pointer to an array of char, so the syntax is:
    // value of the pointer of that struct element needs to be prepared casted to a
    // char pointer times the memory of possible chars in a string times the size of a char in this system
    ptr_toItem->itemName = (char*) malloc(20 * sizeof(char));

    // best pratice: If pointer = NULL alloc failed then exit!
    if (ptr_toItem == NULL)
        exit(-1);

    // read item (by a pointer)
    readItem (ptr_toItem);
    printf("\n\n");

    // print data (by a pointer)
    printItem (ptr_toItem);


    // IMPORTANT: mem for struct don't need to be freed, but mem for each alloc does!
    free(ptr_toItem->itemName);
    return 0;
}

//function for reading the data in (passed in a pointer to a struct)
// a void, because we manipulate the data directly in the memory
void readItem (struct item *ptr_readIn)
{
    printf("Item: ");
    scanf("%s", ptr_readIn->itemName);

    printf("Quantity: ");
    scanf("%d", &ptr_readIn->quantity);

    printf("Price: ");
    scanf("%f", &ptr_readIn->price);

    ptr_readIn->amount = ((float)ptr_readIn->quantity) * (ptr_readIn->price);
}


//function for reading the data in (passed in a pointer to a struct)
// a void, because we print the data directly from the memory

void printItem (struct item *ptr_printOut)
{
    printf("Item: %s\n", ptr_printOut->itemName);

    printf("Quantity: %d\n", ptr_printOut->quantity);

    printf("Price: %.2f\n", ptr_printOut->price);

    printf("Amount: %.4f\n\n", ptr_printOut->amount);
}
