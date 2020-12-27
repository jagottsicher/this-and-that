// prog MARY HAD A LITTLE LAMB

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // argc = number of args INCLUDING progname = 6,
    // argv[0] = prog, argv[1] = MARY = 4,

    printf("%d", argc + strlen(argv[1]));
    return 0;
}
