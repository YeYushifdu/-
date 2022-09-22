#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct B {
	char c;
	short s;
	double d;
};
struct stu {
	//成员变量
	char name[20];		//名字
	int age;			//年龄
	char id[20];
}s1, s2;				//s1和s2也是结构体变量
////s1，s2是全局变量
//int main() {
//	struct Stu s;		//对象
//	//s是局部变量
//	return 0;
//}

//初始化
//struct point {
//	int x;
//	int y;
//}p1;				//声明类型同时定义变量p1
//struct point p2;	//定义结构体变量p2
////初始化：定义变量的同时赋初值
//struct point p3 = { x,y };
//struct stu {
//	char name[15];
//	int age;
//};
//struct stu s = { "zhangsan",20 };	//初始化
//struct node {
//	int data;
//	struct point p;
//	struct node* next;
//}n1 = { 10,{4,5},NULL };			//结构体嵌套初始化
//struct node n2 = { 20,{5,6},NULL };

int main() {
	printf("%c\n", s.sb.c);
	printf("%s\n", s.id);
	struct stu* ps = &s;
	printf("%c\n", (*ps).sb.c);
	printf("%c\n", ps->sb.c);		//sb不是指针，而是结构体变量
}