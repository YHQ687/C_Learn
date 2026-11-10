//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//int main()
//{
//	//----创建：----
//	//----存储某个班级的20人的数学成绩，就可以创建一个数组：----
//	//int math[20];
//
//	//----初始化：----
//	////----完全初始化：----
//	//int data[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//double d[5] = { 1.1,1.2,1.3,1.4,1.5 };
//	// int arr[] = {1,2,3,4,5};
//	////----不完全初始化：----
//	//int data[10] = { 1,2,3,4,5 };
//	//double d[10] = { 1.1,1.2,1.3,1.4,1.5 };
//	////----错误初始化：----
//	//int data[9] = { 1,2,3,4,5 };
//
//	////----数组类型：----
//	//int arr[2];
//	//int arr1[5];
//	//printf("%zu\n", sizeof(arr));
//	//printf("%zu\n", sizeof(int [2]));
//	//printf("%zu\n", sizeof(arr1));
//	//printf("%zu\n", sizeof(int [5]));
//
//
//	//----下标引用操作符[]----
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("%d\n", arr[6]);//7
//	//arr[6] = 70;
//	//printf("%d\n", arr[6]);//70
//	//----打印数组元素：-----
//	//for (int i = 0;i < 10;i++)
//	//	printf("%d ", arr[i]);//1 2 3 4 5 6 7 8 9 10
//	//----打印负值：----
//	//for (int i = 0;i < 10;i++)
//	//{
//	//	arr[i] = -(i + 1);
//	//	printf("%d ", arr[i]);
//	//}
//	////输入值
//	//for (int i = 0;i < 10;i++)
//	//{
//	//	scanf("%d", &arr[i]);//数组本来就有地址，但输入的是数组的元素，所以要加地址。
//	//}
//	//for (int i = 0;i < 10;i++)
//	//	printf("%d ", arr[i]);
//
//	////----依次打印数组中各元素地址。----
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//for (int i = 0;i < 10;i++)
//	//	printf("arr[%d]的地址是%p\n", i, &arr[i]);
//
//	////使用sizeof计算数组元素个数。
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("数组大小%zu\n", sizeof(arr));
//	//printf("元素类型大小%zu\n", sizeof(arr[0]));
//	//printf("数组元素个数%zu\n", sizeof(arr) / sizeof(arr[0]));
//
//	////使用sizeof打印数组元素
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int su = sizeof(arr) / sizeof(arr[0]);
//	//for (int i = 0;i < su;i++)
//	//	printf("%d ", arr[i]);
//
//	return 0;
//}