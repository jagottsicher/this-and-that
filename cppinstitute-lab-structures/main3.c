// TODO (jens#1#01/15/21): Needed to clear up the building and rebuilding of the chain of structures visually by writing down on paper and put arrows whichg represent pointers
#include <stdio.h>
#include <stdlib.h>

struct element
{
	int value;
	struct element *next;
};
int main(void)
{
	int values[10] = { 2, 4, 5, 6, 7, 8, 9, 1, 3, 0};
	int i;
	struct element * current;   // struct of type element as a pointer named current
	struct element * last;      // struct of type element as a pointer named current
	struct element * head = (struct element *) malloc(sizeof(struct element)); // assign memory for pointer struct element pointer
	current = head; // pointer current points to head (the empty mem reserved above
	last = head; // pointer last the same: so list is empty

	for (i=0 ; i < 10 ; i++) // for 10 pplaces
	{
		if (current != head) // if the current is NOT the head
		{
			// reserve mom for the current struct
			current = (struct element *) malloc(sizeof(struct element));
			// set the struct-internal pointer next to current
			last->next = current;
		}
		// current value = value at index i
		current->value = values[i];
		// next in chain = NULL
		current->next = NULL;
		// last points to current now
		last = current;
		// in the next round current is set to the last element's follower
		current = last->next;
	}

	current = head; // current is set to the start of the list
	puts("First 5 values");
	for (i = 0; i < 5; i++) // 5 elements in the loop
	{
		printf("%d\n", current->value); // de-referencing the value at the actual list element in the loop
		current = current->next;
	}

	current = head; // current is set to the start of the list
	puts("First 7 values");
	for (i = 0; i < 7; i++)
	{
		printf("%d\n", current->value);
		current = current->next;
	}

	current = head; // current is set to the start of the list
	while (current) // as long the current Element is NOT NULL
	{
        //
		last = current->next; // set end of list to current's next
		free(current); // free memory of current
		current = last; // set current to last.
	}
	puts("Memory is freed");
	return 0;
}
