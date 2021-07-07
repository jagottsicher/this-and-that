#include <stdio.h>

struct date {
	int day;
	int month;
	int year;
};

struct person {
	char name[32];
	struct date tookoffice;
} presidents[4] = {
	{ "George Washington", {30,4,1789} },
	{ "Thomas Jefferson", {4,3,1801} },
	{ "Abraham Lincoln", {4,3,1861} },
	{ "Theodore Roosevelt", {14,9,1901} }
};

void swap2elements(struct person input[], int a, int b);
void showdata(struct person input[]);

void main () {
	showdata(presidents);
	swap2elements(presidents,2,3);
	showdata(presidents);
	// getchar();
	return;
}

void showdata(struct person input[]) {
	for (int x = 0; x < 4 ; x++)
		printf("President %s took office on %d.%d.%d.\n", input[x].name, input[x].tookoffice.day, input[x].tookoffice.month, input[x].tookoffice.year);
	return;
}

void swap2elements(struct person input[], int a, int b) {
	struct person temp;
	if ((a == b) || (a < 1) || (b < 1) || (a > 4) || (b > 4) ) {
		printf("Swapping failed. Out of range.\n");
		exit (1);
	}
	printf("Swapping ...\n");
	temp = input[a-1];
	input[a-1] = input[b-1];
	input[b-1] = temp;
}
