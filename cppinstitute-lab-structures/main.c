#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct names {
      char givenName[20];
      char familyName[20];
    };


    struct names person1 = {"Mary", "Smith"};
	struct names person2 = {"James", "Johnson"};
	struct names person3 = {"Patricia", "Williams"};
	struct names person4 = {"John", "Brown"};
	printf("%s %s\n", person1.givenName, person1.familyName);
	printf("%s %s\n", person2.givenName, person2.familyName);
	printf("%s %s\n", person3.givenName, person3.familyName);
	printf("%s %s\n", person4.givenName, person4.familyName);

    return 0;
}
