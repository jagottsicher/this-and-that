#include <stdio.h>
#include <time.h>

int main()
{
    const char *day[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Fridy", "Saturday"};

    const char *month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    const char *suffix[] = {"st", "nd", "rd", "th"};

    enum sufindex { st, nd, rd, th } sufsel = th;

    struct tm birthday = {0};

    printf("Please enter you birthday in the form dd mm yyyy: ");

    scanf ("%d %d %d", &birthday.tm_mday, &birthday.tm_mon, &birthday.tm_year);

    birthday.tm_mon -= 1;
//    birthday.tm_year -= 1900;

    if (mktime(&birthday) == -1) {
        fprintf(stderr, "Operation failed.\n");
        return -1;
    }

    switch (birthday.tm_mday) {
        case 1: case 21: case 31:
        sufsel= st;
        break;
        case 2: case 22:
        sufsel= nd;
        break;
        case 3: case 23:
        sufsel= rd;
        break;
        default:
        sufsel= th;
        break;
    }

    printf("The date %d of %s in the Year %d was a %s.", birthday.tm_mday, month[birthday.tm_mon], birthday.tm_year, day[birthday.tm_wday]);

    return 0;
}
