//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//
//
//int main()
//{
//	// if语句
//	//判断一个数是不是奇数
//	//int x = 0;
//	//scanf("%d", &x);
//	//if (x % 2 == 1)
//	//{
//	//	printf("x是奇数\n");
//	//}
//
//	//else语句
//	//判断一个数是奇数还是偶数
//	//int z = 0;
//	//scanf("%d", &z);
//	//if (z % 2 == 1)
//	//	printf("z是奇数\n");
//	//else
//	//		printf("z是偶数\n");
//
//
//	//多条语句：
//	//int c = 0;
//	//scanf("%d", &c);
//	//if (c % 2 == 1)
//	//{
//	//	printf("c %% 2 = %d\n", c % 2);
//	//	printf("c是奇数\n");
//	//}
//	//else
//	//{
//	//	printf("c %% 2 = %d\n", c % 2);
//	//	printf("c是偶数\n");
//	//}
//
//
//	//嵌套if语句
//	//eg1.输入一个整数,判断输入的整数是0,还是正数或者负数。
//	//int v = 0;
//	//scanf("%d", &v);
//	////写法1：
//	//if (v > 0)
//	//	printf("v是正数\n");
//	//else
//	//{
//	//	if (v < 0)
//	//		printf("v是负数\n");
//	//	else
//	//		printf("v是0\n");
//	//}
//	////写法2：
//	//if (v > 0)
//	//	printf("v是正数\n");
//	//else if (v < 0)
//	//	printf("v是负数\n");
//	//else
//	//	printf("v是0\n");
//
//	//eg2.输入一个整数,如果是正数,再判断是奇数还是偶数,并输出;如果不是正数则输出:非正数
//	//int b = 0;
//	//scanf("%d", &b);
//	//if (b > 0)
//	//{
//	//	if (b % 2 == 1)
//	//		printf("b是奇数\n");
//	//	else
//	//		printf("b是偶数\n");
//	//}
//	//else
//	//	printf("b是非正数\n");
//
//	////eg3.输入一个人的年龄
//	//int age = 0;
//	//scanf("%d", &age);
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else if (age <= 44)
//	//	printf("青年\n");
//	//else if (age <= 59)
//	//	printf("中年\n");
//	//else if (age <= 89)
//	//	printf("老年");
//	//else 
//	//	printf("老寿星\n");
//	
//	////eg4.else悬空
//	//int n = 0;
//	//int m = 2;
//	//if (n == 1)
//	//	if (m == 2)
//	//		printf("hehe");
//	//else
//	//	printf("haha");
//
//	return 0;
//}