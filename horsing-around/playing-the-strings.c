#include <stdio.h>
#include <strings.h>

char name[32];
char buffer[64];
char added[] = " ist ein toller Tiger!\n";
int ch, a;


void main(void) {


	printf("Enter your Name: ");

	a = 0;
	//input
	while ( (ch = getchar()) != '\n' ) {
		name[a] = ch;
		a++;
		if (a == 31)
			break;
	}
	name[a] = '\0';

	printf("Name entered was \"%s\".\n", name);

	strcpy(buffer, name);

	strcat(buffer, added);

	printf(buffer);

	printf("New string: ");
	a = 0;
	while ( buffer[a] ) {
		putchar(buffer[a]);
		a++;
	}


}

