#include <stdio.h>
#include <stdlib.h>

#ifdef _STDC_NO_VLA_
printF("Variable length arrays are not supported.\n");
exit(1);
#endif // _STDC_NO_VLA_

// or check compiler version and definitions on the console for STDC_VERSION (needs to be greater than 89
// gcc -dM -E - < /dev/null | grep -i STDC



int main()
{
    printf("Hello world!\n");
    return 0;
}

