#include <stdio.h>

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d\n", *p);
//	return 0;
//}

int main()
{
	printf("%zu\n", sizeof(int*));
	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(float*));
	printf("%zu\n", sizeof(double*));
	printf("%zu\n", sizeof(long*));
	return 0;
}