//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main()
//{
//	//eg.找出100-200之间的素数
//	//1.我写的（deep seek说扔到垃圾堆里去），坏人！
//	//for (int i = 100;i <= 200;i++)
//	//{
//	//	int a = 0;
//	//	int b = 2;
//	//	int c = i / 2 + 1;
//	//	do
//	//	{
//	//		a = i % b;
//	//		b++;	
//	//	} while (a != 0 && b < c);
//	//	if (b == c)
//	//		printf("%d是素数\n", i);
//	//}
//
//	//2.
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2;j * j <= i;j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d是素数\n", i);
//	}
//
//
//
//	return 0;
//}