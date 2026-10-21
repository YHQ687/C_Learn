///*�������ͣ�
//* �����������ͣ�int��float��double��char��
//* �����������ͣ����顢ָ�롢�ṹ�塢�����塢ö������
//* �ṹ����һ�����û��Զ�����µ��������ͣ������԰�����ͬ���͵ĳ�Ա�������������ͬ���͵����������һ���γ�һ�����塣�ṹ��Ķ���ʹ�ùؼ���struct��
//*/
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////����ṹ������:
//struct student_s {		//struct student_s�ǽṹ�����͵����֣�
//	int id;
//	char name[25];
//	char gender;
//	float Chinese;
//	float Math;
//	float English;
//};//�ֺŲ���ʡ��
//
////����ṹ������:
//struct  {		//�����ṹ�����ͣ�ֻ������һ�� 
//	int id;
//	char name[25];
//	char gender;
//};//�ֺŲ���ʡ��
//
////typedef�ṹ��������
//
////����ṹ������:
//typedef struct {		//����һ�������ṹ�����ͣ����ֽ���S
//	int id;
//	char name[25];
//	char gender;
//}S;//�ֺŲ���ʡ��
//
////�����ýṹ��	�ṹ���л���һ���ṹ����������ֽṹ���Ϊ�����ýṹ��
//struct Node {
//	int data;
//	struct Node* next;	//�ṹ���в��ܰ����ṹ�壬ֻ��ʹ�øĽṹ���ָ�루��Ȼ�Լ������Լ�����С�����������޴󡣣���ֻ�ܶ���ָ���Լ����͵�ָ�����
//};//�ýṹ���а���һ��ָ���Լ����͵�ָ�����next
//
//typedef struct Node {//����ʹ��typedef struct Node Node;	//����һ���ṹ������Node��Node�ǽṹ�����͵�����
//	int data;
//	 Node* next;	
//}Node;//������������Ϊ�ýṹ���ڲ��Ѿ�ʹ����Node���ͣ�Node���ͻ�û�ж�����ɣ����Բ���ʹ��Node���͡�ֻ��ʹ��struct Node���͡�Node* next����ʹ��struct Node* next;	
//
//int main() {
//	//struct student_s stu;	//����ṹ�����stu,stu���ǽṹ�������
//	struct student_s stu = { 1001, "����", '��', 90, 80, 70 };//����ṹ�����stu����ʼ��
//
//	//.����������ݽṹ��ȥ���ʽṹ������ĳ�Ա
//	printf("ѧ��: %d\n  ����: %s\n  �Ա�: %s\n  ���ĳɼ�: %.2f\n  ��ѧ�ɼ�: %.2f\n  Ӣ��ɼ�: %.2f\n", stu.id, stu.name, stu.gender, stu.Chinese, stu.Math, stu.English);
//	
//	S s = { 1002, "����", 'Ů' };//����ṹ�����s����ʼ��
//	 
//	return 0;
//}