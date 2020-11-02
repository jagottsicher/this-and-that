#include <stdio.h>
#include <stdlib.h>

void getinfo(struct namect * pst);

int main()
{
    printf("Hello world!\n");
    return 0;
}

void getinfo(struct namect * pst)
{
    char temp[SLEN];
    printf("Please enter your given name.\n");
    s_gets(temp, SLEN);

    //allocate memory to hold the entered given Name
    pst->fname = (char*)malloc(strlen(temp)+1);

    // and copy the name to the gallocated mem
    strcpy(pst->fname, temp);


    printf("Please enter your family name.\n");
    s_gets(temp, SLEN);
    pst->lname = (char*)malloc(strlen(temp)+1);
    strcpy(pst->lname, temp);
}
