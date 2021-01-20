#include <stdio.h>
//#include "triangles.h"

void floydsTriangle(int size);
void normalTriangle(int size);

#define LOGINFO(funName) printf("Line %d, file %s, before %s\n", __LINE__, __FILE__, funName)

int main()
{
	int size;
	scanf("%d", &size);
	LOGINFO("normalTriangle");
	normalTriangle(size);
	LOGINFO("floydsTriangle");
	floydsTriangle(size);
	return 0;
}

/* triangles.h */
#ifndef __TRIANGLES_H__
#define __TRIANGLES_H__
void floydsTriangle(int size);
void normalTriangle(int size);
#endif

/* floydsTriangles.c */
#include <stdio.h>
void floydsTriangle(int size)
{
	int i, j, k=1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j<i; j++)
		{
			printf("%4d", k);
			k++;
		}
		printf("\n");
	}
}

/* normalTriangles.c */
#include <stdio.h>
void normalTriangle(int size)
{
	int i, j;
	for(i = 0 ; i < size ; i++)
	{
		for(j=0; j<i ; j++)
		{
			printf("\\");
		}
		printf("\n");
	}
}
