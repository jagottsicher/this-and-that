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

#define PART_SIZE 5
#define START_DIGIT '0'
#define STOP_DIGIT '9'
#define DOT_CHAR '.'
#define MINIMUM_DIGITS 1
#define MAXIMUM_PARTS 4
#define STILL_GODD_PARTS_COUNT 3
#define MAXIMUM_PART_VALUE 255
#define MINIMUM_PART_VALUE 255

int checkIP(char *address)
{
	int result = 1;
	int i;
	int actualCount = 0;
	int partsCount = 1;
	char actualPart[PART_SIZE];

	for (i = 0; i < strlen(address); i++)
	{
		char c = address[i];
		if (c >= START_DIGIT && c <= STOP_DIGIT || c == DOT_CHAR)
		{
			if (c == DOT_CHAR)
			{
				if (actualCount<MINIMUM_DIGITS) /* for cases like: "127.0..*/
				{
					result = 0;
					break;
				}
				partsCount++;
				if (partsCount>MAXIMUM_PARTS)
				{
					result = 0;
					break;
				}
				actualPart[actualCount] = '\0';
				int partValue = atoi(actualPart);
				if (partValue>MAXIMUM_PART_VALUE || partValue<MINIMUM_PART_VALUE)/*second condition is not needed*/
				{
					result = 0;
					break;
				}
				actualCount = 0;
			}
			else
			{
				if (actualCount < STILL_GODD_PARTS_COUNT)
				{
					actualPart[actualCount] = c;
					actualCount++;
				}
				else
				{
					result = 0;
					break;
				}
			}
		}
		else
		{
			result = 0;
			break;
		}
	}
	if (partsCount != MAXIMUM_PARTS)
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
