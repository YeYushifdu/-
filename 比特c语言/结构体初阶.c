#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct B {
	char c;
	short s;
	double d;
};
struct stu {
	//��Ա����
	char name[20];		//����
	int age;			//����
	char id[20];
}s1, s2;				//s1��s2Ҳ�ǽṹ�����
////s1��s2��ȫ�ֱ���
//int main() {
//	struct Stu s;		//����
//	//s�Ǿֲ�����
//	return 0;
//}

//��ʼ��
//struct point {
//	int x;
//	int y;
//}p1;				//��������ͬʱ�������p1
//struct point p2;	//����ṹ�����p2
////��ʼ�������������ͬʱ����ֵ
//struct point p3 = { x,y };
//struct stu {
//	char name[15];
//	int age;
//};
//struct stu s = { "zhangsan",20 };	//��ʼ��
//struct node {
//	int data;
//	struct point p;
//	struct node* next;
//}n1 = { 10,{4,5},NULL };			//�ṹ��Ƕ�׳�ʼ��
//struct node n2 = { 20,{5,6},NULL };

int main() {
	printf("%c\n", s.sb.c);
	printf("%s\n", s.id);
	struct stu* ps = &s;
	printf("%c\n", (*ps).sb.c);
	printf("%c\n", ps->sb.c);		//sb����ָ�룬���ǽṹ�����
}