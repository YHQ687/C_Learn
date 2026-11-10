//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void game()
//{
//	int guess = 0;
//	//设置随机数
//	int r = rand() % 100 + 1;
//	//猜数字
//	printf("---开始游戏---\n");
//	printf("---猜猜数字---\n");
//	while(1)
//	{
//		scanf("%d", &guess);
//		if (guess < r)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess == r)
//		{
//			printf("猜对了\n");
//			printf("恭喜你，中大奖了\n");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int a = 0;
//	while (1)
//	{
//	printf("\n----------猜数字游戏----------\n");
//	printf("----------0.退出----------\n");
//	printf("----------1.继续----------\n");
//	again:
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 0:
//			return 0;
//		case 1:
//		{
//			srand((unsigned int)time(NULL));
//			game();
//			break;
//		}
//		default:
//		{
//			printf("请输入0或1\n");
//			goto again;
//		}
//		}
//	}
//	return 0;
//}