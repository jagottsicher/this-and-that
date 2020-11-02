#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem (struct item *ptr_readIn);
void printItem (struct item *ptr_printOut);

int main()
{
    struct item anItem;
    struct item *ptr_toItem;
    ptr_toItem = &anItem;

    ptr_toItem->itemName = (char*) malloc(20 * sizeof(char));

    if (ptr_toItem == NULL)
        exit(-1);

    readItem (ptr_toItem);
    printf("\n\n");
    printItem (ptr_toItem);

    free(ptr_toItem->itemName);
    return 0;
}

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

void printItem (struct item *ptr_printOut)
{
    printf("Item: %s\n", ptr_printOut->itemName);

    printf("Quantity: %d\n", ptr_printOut->quantity);

    printf("Price: %.2f\n", ptr_printOut->price);

    printf("Amount: %.4f\n\n", ptr_printOut->amount);
}
