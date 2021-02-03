#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int checkIP(char *);
void printIPValid(char *);

int main(void)
{
	printIPValid("127.0.0.1");
	printIPValid("127.0.01");
	printIPValid("127.0..1");
	printIPValid("127.zero.0.1");
	printIPValid("127.297.0.1");
	printIPValid("127.2555.0.1");
	return 0;
}

int checkIP(char *address)
{
	int result = 1; // indication is valid
	int i;
	int actualCount=0;
	int partsCount=1;
	char actualPart[5];

	for (i = 0; i < strlen(address); i++) // going through string
	{
		char c = address[i]; // char by char
		if (c >= '0' && c <= '9' || c == '.') // continue check if only valid chars in string
		{
			if (c == '.') // if char is a . we need more tests
			{
				if (actualCount<1) /* for cases like: "127.0.. testing number of counts*/
				{
					result = 0;
					break;
				}
				partsCount++; // if cchar = We raise the number of parts by 1 (starting at 1 as a minumum
				if (partsCount>4) // if more than 4 parts we have one . too much then return 0
				{
					result = 0;
					break;
				}
				actualPart[actualCount] = '\0'; // we examine the actual part we found by separating the first part \
                                                // and storing it in a string terminated by \0
				int partValue = atoi(actualPart); // we declare and initialize an int number from separated string
				if (partValue>255 || partValue<0) /*second condition is not needed, just checking the range*/
				{
					result = 0; // then not a number
					break;
				}
				actualCount = 0; // reset actualCount, BUT WHY???
			}
			else // if char is NOT a . we check the count
			{
				if (actualCount < 3) // if we are not at the end (three dots needed)
				{
					actualPart[actualCount] = c; // set actualpart's begin to the actual spot
					actualCount++; // raise count
				}
				else // if we are at the end (three dots found already) we return an error
				{
					result = 0;
					break;
				}
			}
		}
		else // break and return 0 if not only valid chars in string
		{
			result = 0;
			break;
		}
	}
	if (partsCount != 4) // if any other number than 4 quadrupel have been examined we reprt an error
		result = 0;
	return result;
}

void printIPValid(char * address)
{
	if (checkIP(address))
		printf("%s is a valid IP address\n", address);
	else
		printf("%s is not a valid IP address\n", address);
}
