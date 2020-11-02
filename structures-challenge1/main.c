#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[20];
    int hireDate;
    float salary;
};

struct employee jens = {"Schendel", 1, 1234.5678};
struct employee other;

int main()
{

    printf("New eployees' Name:");
    scanf("%s", &other.name);
    printf("New eployees' hire date:");
    scanf("%d", &other.hireDate);
    printf("New eployees' salary:");
    scanf("%f", &other.salary);

    printf("\n\n");
    printf("Employee %s works since %d for us and earns %.2f credits per year.\n", jens.name, jens.hireDate, jens.salary);
    printf("Employee %s works since %d for us and earns %.2f credits per year.\n\n", other.name, other.hireDate, other.salary);

    return 0;
}
