#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////写一个加法函数，完成2个整形变量的加法操作。
//int sum(int x, int y)
//{
//	return(x + y);
//}
//
//int main()
//{
//	int a, b ;
//	a = b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d",sum(a, b));
//	return 0;
//}



//写一个函数将一个整型数组的内容, 全部置为 - 1, 再写一个函数打印数组的内容。
////一维数组：
//void set_arr(int arr1[10], int su1)
//{
//	for (int i = 0;i < su1;i++)
//		arr1[i] = -1;
//}
//
//void print_arr(int arr2[10], int su2)
//{
//	for (int i = 0;i < su2;i++)
//		printf("%d", arr2[i]);
//	printf("\n");
//}
//
//int main()
//{
//	int arr0[10] = { 0 };
//	int su = sizeof(arr0) / sizeof(arr0[0]);
//	//设置数组全为-1：
//	set_arr(arr0, su);
//	//打印数组：
//	print_arr(arr0,su);
//
//	return 0;
//}

////二维数组
//void set_arr(int arr1[][5], int x,int y)
//{
//	for (int i = 0;i < x;i++)
//		for (int j = 0;j < y;j++)
//			arr1[i][j] = i + j;
//}
//void print_arr(int arr2[][5], int x, int y)
//{
//	for (int i = 0;i < x;i++)
//	{
//		for (int j = 0;j < y;j++)
//			printf("%d ", arr2[i][j]);
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr0[3][5] = { 0 };
//	//数组设置
//	set_arr(arr0,3, 5);
//	//数组打印
//	print_arr(arr0, 3, 5);
//
//	return 0;
//}


//计算某年某月有多少天
int get_days_of_month(int x, int y)
{
	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int day = days[y];
	if (leap_year(y) && 2 == y)
		day += 1;
	return day;
}

int leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)))
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	int month = 0;
	scanf("%d %d", &year, &month);
	int day = get_days_of_month(year, month);
	printf("%d", day);
	return 0;
}