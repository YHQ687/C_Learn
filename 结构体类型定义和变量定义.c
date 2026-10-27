/*
结构体：
- 结构体是一种自定义的数据类型，可以把不同类型的数据组合在一起。
- 例如：int、float、double、char 等都可以组合成一个结构体。
- 结构体的定义使用关键字 struct。
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 1. 普通结构体类型定义
struct student_s {
    int id;
    char name[25];
    char gender;
    float Chinese;
    float Math;
    float English;
};

// 2. 匿名结构体类型定义（只定义一次）
struct {
    int id;
    char name[25];
    char gender;
};

// 3. typedef 结构体类型定义
typedef struct {
    int id;
    char name[25];
    char gender;
} S;

// 4. 链表结点结构体：包含指向同类型的指针
struct Node {
    int data;
    struct Node* next;
};

// 5. 也可以给结构体起别名
typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main() {
    // 定义结构体变量 stu，并初始化
    struct student_s stu = {1001, "张三", '男', 90.0f, 80.0f, 70.0f};

    // 使用 . 运算符访问结构体成员
    printf("学号: %d\n姓名: %s\n性别: %c\n语文成绩: %.2f\n数学成绩: %.2f\n英语成绩: %.2f\n",
           stu.id, stu.name, stu.gender, stu.Chinese, stu.Math, stu.English);

    S s = {1002, "李四", '女'};
    printf("学号: %d\n姓名: %s\n性别: %c\n", s.id, s.name, s.gender);

    return 0;
}