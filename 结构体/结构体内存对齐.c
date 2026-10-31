#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
//
//
////struct S1
////{
////	char c1;//1字节
////	int i;//4字节
////	char c2;//1字节
////};
////
////struct S2
////{
////	char c1;//1
////	char c2;//1
////	int i;//4
////};
////
////struct S3
////{
////	double d;
////	char c;
////	int i;
////};
////
////struct S4
////{
////	char c1;
////	struct S3 s3;
////	double d;
////};
////
////int main()
////{
////	//printf("%zu\n",sizeof(struct S1));//12
////	//printf("%zu\n",sizeof(struct S2));//8
////	//printf("%zu\n",sizeof(struct S3));//16
////	//printf("%zu\n",sizeof(struct S4));//32
////
////	//struct S1 s1;
////	//printf("%zu\n",offsetof(struct S1,c1));//0
////	//printf("%zu\n",offsetof(struct S1,i));//4
////	//printf("%zu\n",offsetof(struct S1,c2));//8
////
////	//struct S1 s2;
////	//printf("%zu\n", offsetof(struct S2, c1));//0
////	//printf("%zu\n", offsetof(struct S2, c2));//1
////	//printf("%zu\n", offsetof(struct S2, i));//4
////
////	//struct S1 s3;
////	//printf("%zu\n", offsetof(struct S3, d));//0
////	//printf("%zu\n", offsetof(struct S3, c));//8
////	//printf("%zu\n", offsetof(struct S3, i));//12
////
////	//struct S1 s4;
////	//printf("%zu\n", offsetof(struct S4, c1));//0
////	//printf("%zu\n", offsetof(struct S4, s3));//8
////	//printf("%zu\n", offsetof(struct S4, d));//24
////
////	return 0;
////}
//
//
//
//
//
//#pragma pack(1)//将默认对齐数设为1
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//恢复默认对齐数。
//
//int  main()
//{
//	struct S d;
//	printf("%zu\n", sizeof(struct S));//6
//
//	return 0;
//}