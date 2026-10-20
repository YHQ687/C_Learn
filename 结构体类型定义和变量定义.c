///*数据类型：
//* 基本数据类型：int、float、double、char、
//* 复合数据类型：数组、指针、结构体、共用体、枚举类型
//* 结构体是一种由用户自定义的新的数据类型，它可以包含不同类型的成员变量。将多个不同类型的数据组合在一起，形成一个整体。结构体的定义使用关键字struct。
//*/
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////定义结构体类型:
//struct student_s {		//struct student_s是结构体类型的名字，
//	int id;
//	char name[25];
//	char gender;
//	float Chinese;
//	float Math;
//	float English;
//};//分号不可省略
//
////定义结构体类型:
//struct  {		//匿名结构体类型，只能用这一次 
//	int id;
//	char name[25];
//	char gender;
//};//分号不可省略
//
////typedef结构体重命名
//
////定义结构体类型:
//typedef struct {		//创建一个匿名结构体类型，名字叫做S
//	int id;
//	char name[25];
//	char gender;
//}S;//分号不可省略
//
////自引用结构体	结构体中还有一个结构体变量，这种结构体称为自引用结构体
//struct Node {
//	int data;
//	struct Node* next;	//结构体中不能包含结构体，只能使用改结构体的指针（不然自己包含自己，大小在理论上无限大。），只能定义指向自己类型的指针变量
//};//该结构体中包含一个指向自己类型的指针变量next
//
//typedef struct Node {//不能使用typedef struct Node Node;	//定义一个结构体类型Node，Node是结构体类型的名字
//	int data;
//	 Node* next;	
//}Node;//不能这样，因为该结构体内部已经使用了Node类型，Node类型还没有定义完成，所以不能使用Node类型。只能使用struct Node类型。Node* next必须使用struct Node* next;	
//
//int main() {
//	//struct student_s stu;	//定义结构体变量stu,stu就是结构体变量名
//	struct student_s stu = { 1001, "张三", '男', 90, 80, 70 };//定义结构体变量stu并初始化
//
//	//.运算符：根据结构体去访问结构体变量的成员
//	printf("学号: %d\n  姓名: %s\n  性别: %s\n  语文成绩: %.2f\n  数学成绩: %.2f\n  英语成绩: %.2f\n", stu.id, stu.name, stu.gender, stu.Chinese, stu.Math, stu.English);
//	
//	S s = { 1002, "李四", '女' };//定义结构体变量s并初始化
//	 
//	return 0;
//}