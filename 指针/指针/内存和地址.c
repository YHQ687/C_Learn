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

//int main()
//{
//	printf("%zu\n", sizeof(int*));//8
//	printf("%zu\n", sizeof(char*));//8
//	printf("%zu\n", sizeof(float*));//8
//	printf("%zu\n", sizeof(double*));//8
//	printf("%zu\n", sizeof(long*));//8
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	//int* p = &a;
//	char* p = &a;
//	*p = 0;
//	return 0;
//}

//
////循环遍历数组
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = &arr;
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d\t",*p);
//		p++;
//	}
//	return 0;
//}



//统计数组字符串个数
//size_t my_strlen(char* p)
//{
//	char* start = p;//int a = b;b++;b-a;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len= my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//指针关系运算
// 遍历打印数组：
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int* p = &arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a = arr + sz;//arr[9]
//	while (p < arr + sz)
//	{
//		printf("%d", *p);
//		p++;
//	}
//	return 0;
//}