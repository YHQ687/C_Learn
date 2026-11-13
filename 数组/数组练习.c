//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//
//int main()
//{
//	//char arr1[] = "Welcome to C!!!!!";
//	//char arr2[] = "#################";
//	//int len1 = (sizeof(arr1) / sizeof(arr1[0])) - 1;
//	//int len2 = (sizeof(arr2) / sizeof(arr2[0])) - 1;
//	//if (len1 == len2)
//	//{
//	//	for (int i = 0;i < (len2 / 2) + 1;i++)
//	//	{
//	//		int j = len1 - 1 - i;
//	//		arr2[i] = arr1[i];
//	//		arr2[j] = arr1[j];
//	//		for (int k = 0;k < len2;k++)
//	//			printf("%c", arr2[k]);
//	//		printf("\n");
//	//	}
//	//}
//	//else
//	//	printf("arr1与arr2长度不匹配");
//
//	//char arr1[] = "Welcome to C!!!!!";
//	//char arr2[] = "#################";
//	//int len1 = (int)strlen(arr1);
//	//int len2 = (int)strlen(arr2);
//	//if (len1 == len2)
//	//{
//	//	int left = 0;
//	//	int right = len1 - 1;
//	//	while(left <= right)
//	//	{	
//	//		Sleep(1000);
//	//		arr2[left] = arr1[left];
//	//		arr2[right] = arr1[right];
//	//		printf("%s\n",arr2);
//	//		left ++;
//	//		right --;
//	//	}
//	//}
//	//else
//	//	printf("arr1与arr2长度不匹配");
//
//
//	//给定一个升序的整型数组，在这个数组中查找到指定的值n，找到了就打印n的下标，找不到就打印“找不到”
//	////遍历查找
//	//int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int k = 0;
//	//int nu = sizeof(arr1) / sizeof(arr1[0]);
//	//printf("请输入需要查找的值：");
//	//scanf("%d", &k);
//	//int i = 0;
//	//for (i = 0;i < nu;i++)
//	//{
//	//	if (k == arr1[i])
//	//	{
//	//		printf("已找到，下标是%d", i);
//	//		break;
//	//	}
//	//}
//	//if (i == nu)
//	//	printf("找不到");
//
//	//二分查找，前提是！升序！
//	int arr2[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	int len = sizeof(arr2) / sizeof(arr2[0]);
//	int flag = 0;
//	int k = 0;
//	scanf("%d", &k);
//	int left = 0;
//	int right = len -1;
//	int mid = 0;
//	while (left <= right)
//	{
//		//mid = left + (right - left) /2`	即left加上right跟left插值的一半。
//		mid = (left + right) / 2;
//		if (k < arr2[mid])
//			right = mid - 1;
//		else if (k > arr2[mid])
//			left = mid + 1;
//		else
//		{
//			printf("找到了,下标为:%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("null\n");
//
//	return 0;
//}