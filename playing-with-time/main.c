#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    time_t timeInSec =  time(NULL);

    if (timeInSec == -1) {
        printf("Epic Fail: time function failed to return unix time.\n");
    }

    printf("%ld\n", timeInSec);
    printf("approx %ld years (on earth)\n", ((((timeInSec/60)/60)/24)/7)/52);
    return 0;
}
