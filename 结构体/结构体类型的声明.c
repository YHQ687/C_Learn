///*
//结构体：
//- 结构体是一种自定义的数据类型，可以把不同类型的数据组合在一起。
//- 例如：int、float、double、char 等都可以组合成一个结构体。
//- 结构体的定义使用关键字 struct。
//*/
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//
//// 1. 普通结构体类型定义
//struct student_s {
//    int id;
//    char name[25];
//    char gender;
//    float Chinese;
//    float Math;
//    float English;
//};
//
//// 2. 匿名结构体类型定义（只定义一次）
//struct {
//    int id;
//    char name[25];
//    char gender;
//};
//
//// 3. typedef 结构体类型定义
//typedef struct {
//    int id;
//    char name[25];
//    char gender;
//} S;
//
//// 4. 链表结点结构体：包含指向同类型的指针
//struct Node {
//    int data;
//    struct Node* next;
//};
//
//// 5. 也可以给结构体起别名
//typedef struct Node {
//    int data;
//    struct Node* next;
//} Node;
//
//int main() {
//    // 定义结构体变量 stu，并初始化
//    struct student_s stu = {1001, "张三", '男', 90.0f, 80.0f, 70.0f};
//
//    // 使用 . 运算符访问结构体成员
//    printf("学号: %d\n姓名: %s\n性别: %c\n语文成绩: %.2f\n数学成绩: %.2f\n英语成绩: %.2f\n",
//           stu.id, stu.name, stu.gender, stu.Chinese, stu.Math, stu.English);
//
//    S s = {1002, "李四", '女'};
//    printf("学号: %d\n姓名: %s\n性别: %c\n", s.id, s.name, s.gender);
//
//    return 0;
//}

//结构传参：
struct S
{
	int data[1000];
	int num;
};

void print1(struct S t)
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d", t.data[i]);
	}
	printf("\n");
	printf("%d\n", t.num);
};

void print2(const struct S* ps)
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d", ps->data[i]);
	}
	printf("\n");
	printf("%d\n", ps->num);
};



int main()
{
	struct S s = { { 1,2,3,4,5 },100 };
	print1(s);

	print2(&s);
	//首选print2函数：结构体传参的时候，要传结构体的地址，避免结构体过大，造成栈溢出。
	//const修饰指针，防止函数修改结构体的值。
	//函数传参的时候,参数是需要压栈,会有时间和空间上的系统开销。
	//如果传递一个结构体对象的时候, 结构体过大, 参数压栈的的系统开销比较大, 所以会导致性能的下降。
	return 0;
}