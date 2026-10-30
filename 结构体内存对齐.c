#include<stdio.h>
#include <string.h>
#include <stdlib.h>



struct S1
{
	char c1;
	int i;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int i;
};

int main()
{
	printf("%zu\n",sizeof(struct S1));//8
	printf("%zu\n",sizeof(struct S2));//12

	return 0;
}