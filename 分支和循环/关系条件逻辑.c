//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main()
//{
//	////关系操作符：
//	//printf("%d\n", 3 > 5);//0
//	//printf("%d\n", 3 > 2);//1
//
//
//	//int z = 0;
//	//scanf("%d", &z);
//	//if (z == 5)
//	//	printf("hehe\n");
//
//	//scanf("%d", &z);
//	//if (z = 5)
//	//	printf("hehe\n");
//
//	//scanf("%d", &z);
//	//if (5 == z)
//	//	printf("hehe\n");
//	
//	//scanf("%d", &z);
//	//if (5 = z)
//	//	printf("hehe\n");
//
//
//	//int x = 3;
//	//int c = 5;
//	//int v = 4;
//	//if (x < c < v)
//	//	printf("hehe\n");
//	//if (x < c && c < v)
//	//	printf("nihao");
//
//
//	////条件操作符：
//	//int b = 0;
//	//int n = 0;
//	//scanf("%d", &b);//8
//	//n = (b > 5 ? 3 : -3);
//	//printf("b = %d、 n = %d", b, n);//b = 8、 n = 3
//
//	//int a = 0;
//	//int s = 0;
//	//scanf("%d%d", &a, &s);//5 9 
//	//int max;
//	//max = (a > s ? a : s);
//	//printf("%d", max);//9
//
//
//
//	//逻辑操作符：&&、||、！
//	//!:
//	//int flag = 0;
//	//scanf("%d", &flag);
//	//if (flag)//flag为真
//	//{
//	//	printf("hehe\n");
//	//}
//	//if (flag == 0)//flag为假
//	//{
//	//	printf("haha\n");
//	//}
//	//if (!flag)//flag为假
//	//{
//	//	printf("haha\n");
//	//}
//
//	//&&:
//	//int month;
//	//scanf("%d", &month);
//	//if (3 <= month && 5 >= month)
//	//{
//	//	printf("%d月是春天",month);
//	//}
//
//	//||：
//	//int month;
//	//scanf("%d", &month);
//	//if (3 == month || 4 == month || 5 == month)
//	//{
//	//	printf("%d月是春天", month);
//	//}
//
//	////闰年判断：
//	//int year = 0;
//	//scanf("%d", &year);
//	//if ((year % 4 == 0 && year % 100 ) || (year % 400 == 0))
//	//	printf("%d是闰年\n", year);
//	//else
//	//	printf("不是闰年\n");
//
//	////短路
//	//int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = (a++ && ++b && d++);
//	//printf("%d\t%d\t%d\t%d\n",a,b,c,d);
//
//	//int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = (a++ && ++b && d++);
//	//printf("%d\t%d\t%d\t%d\n", a, b, c, d);//2       3       3       5
//
//	//int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = (a++ || ++b || d++);
//	//printf("%d\t%d\t%d\t%d\n", a, b, c, d);//2       2       3       4
//
//	//int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = (a++ || ++b || d++);
//	//printf("%d\t%d\t%d\t%d\n", a, b, c, d);//2       2       3       4
//
//	return 0;
//}