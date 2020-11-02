
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Family {
    char name[20];
    int age;
    char father[20];
    char mother[20];
};

bool siblings(struct Family *ptr_member1, struct Family *ptr_member2)
{
    if (strcmp(ptr_member1->mother, ptr_member2->mother) == 0)
    return true;
    else
    return false;
}

int main()
{
    struct Family member1 = {"Gwendolin", 7, "Papa", "Mama"};
    struct Family member2 = {"Justus", 4, "Papa", "Mama"};


    if (siblings(&member1, &member2) != 0)
        printf("The kids %s (%dy) and %s (%dy) have the same mother.\n\n", member1.name, member1.age, member2.name, member2.age );

    return 0;
}
