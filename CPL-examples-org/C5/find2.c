#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int getline(char *line, int max);

/* find:  print lines that match pattern from 1st arg */
main(int argc, char *argv[])
{
    // globals
    // max length of string
    char line[MAXLINE];
    // linenumber
    long lineno = 0;
    // handler for options, indicator of exception wanted off(0)/on(1), indicator of numbering wanted off(0)/on(1), found (return value is 0 if not found, else times string was found once per line
    int c, except = 0, number = 0, found = 0;

    // as long arguments left (decreased) AND the first char of the argument_1 is a minus
    // so outer while checks for options, switches or indicators introduced by a minus
    while (--argc > 0 && (*++argv)[0] == '-')
        // pointer argv is pointing to - now
        // so the following loop checks with *++argv[0] for first letter after that
        while (c = *++argv[0])
            // if x then exception indicator is turned on
            // if n then numbering indicator is turned on
            switch (c) {
            case 'x':
                except = 1;
                break;
            case 'n':
                number = 1;
                break;
            // if not x or n something went wrong with the options
            // then pring "idiot" and
            // argc is set to 0 (to escape outer while loop and
            // return value found is set to -1 (error)
            default:
                printf("find: illegal option %c\n", c);
                argc = 0;
                found = -1;
                break;
            }
    // if argc = 0 OR argc > 1 then
    // print "Do it this way!"
    // so one argument and search pattern is expected!
    if (argc != 1)
        printf("Usage: find -x -n pattern\n");
    else
        // if everything fine check
        // line-by-line beginning at line number 0
        // each to the maximum length of a line
        while (getline(line, MAXLINE) > 0) {
            lineno++;
            // if the argument string is unequal to NULL (string exists) AND that test is reversed by except on/off
            if ((strstr(line, *argv) != NULL) != except) {
                // Then if number on print line numbering
                if (number)
                    printf("%ld:", lineno);
                // print the found line
                printf("%s", line);
                // raise indicator that string was found
                found++;
            }
        }
    return found;
}
