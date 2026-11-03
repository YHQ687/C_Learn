#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//printf("%d\n", 3 > 5);//0
	//printf("%d\n", 3 > 2);//1


	//int z = 0;
	//scanf("%d", &z);
	//if (z == 5)
	//	printf("hehe\n");

	//scanf("%d", &z);
	//if (z = 5)
	//	printf("hehe\n");

	//scanf("%d", &z);
	//if (5 == z)
	//	printf("hehe\n");
	
	//scanf("%d", &z);
	//if (5 = z)
	//	printf("hehe\n");


	//int x = 3;
	//int c = 5;
	//int v = 4;
	//if (x < c < v)
	//	printf("hehe\n");
	//if (x < c && c < v)
	//	printf("nihao");



	//int b = 0;
	//int n = 0;
	//scanf("%d", &b);//8
	//n = (b > 5 ? 3 : -3);
	//printf("b = %d、 n = %d", b, n);//b = 8、 n = 3

	int a = 0;
	int s = 0;
	scanf("%d%d", &a, &s);//5 9 
	int max;
	max = (a > s ? a : s);
	printf("%d", max);//9

	return 0;
}