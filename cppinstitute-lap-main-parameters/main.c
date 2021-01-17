#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 4) // if number of arguments not 4 somthing is wrong:\
                        needed are\
                        * 1 name of program\
                        * 1 operator\
                        * 2 operands
                    {
		puts("Wrong number of parameters");
		return -1;
	}
	int number1 = atoi(argv[2]); // make argument 2 a number
	int number2 = atoi(argv[3]); // make argument 3 a number
	int result;

	// calculation depending on argument 1
	if (!strcmp(argv[1], "add"))
		result = number1 + number2;
	else if (!strcmp(argv[1], "sub"))
		result = number1 - number2;
	else if (!strcmp(argv[1], "mul"))
		result = number1 * number2;
	else
	{
        // if argument 1 is anything else someting is wrong
		puts("Wrong parameters");
		return -1;
	}
	printf("%s %d %d: %d\n", argv[1], number1, number2, result);
	return 0;
}