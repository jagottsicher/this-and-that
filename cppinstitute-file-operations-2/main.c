#include <stdio.h>

int main()
{
	char c;
	int charsCount = 0;
	int whitespacesCount = 0;
	int linesCount = 0;
	int smallLettersCount['z' - 'a' + 1] = {0};
	// open this file
	FILE *f = fopen("main.c", "rt"); // on error stop
	if (f == NULL)
	{
		puts("Error opening a file.");
		return 1;
	}
	// check from the start of the file handler
	do
	{
		c = fgetc(f); // get one char
		if (c == EOF)// stop at EO
			break;
		charsCount++; // raise the counter for any character read
		if (c == ' ' || c == '\n' || c == '\t') // raise whitespace counter for any kind of whitespace
			whitespacesCount++;
		if (c == '\n') // raise lines counter for any EOL
			linesCount++;
		if (c>='a' && c<='z') // check if char is a lower letter. if it is ...
			smallLettersCount[c - 'a'] += 1; // ... raise corrsponding letter count only
	}
	while (c != 0); // do that until char read is zero BUT THIS MEANS ONLY AS LONG c EXISTS! ("is not false")

	// print all that
	printf("Lines: %d\n", linesCount);
	printf("Whitespaces: %d\n", whitespacesCount);
	printf("Characters: %d\n", charsCount);
	char i;
	for (i=0 ; i<='z'-'a' ; i++)
	{
		printf("Small letter: %c : %d\n", i + 'a', smallLettersCount[i]);
	}
	// \0 x only a test if this line is read
	return 0;
}
