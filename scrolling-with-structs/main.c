#include <stdio.h>
#include <stdlib.h>

struct Spot {
    char terrain;
    struct Spot *right;
};

int main() {
    struct Spot x_middle = { 'X', &x_middle };
    return 0;
}
