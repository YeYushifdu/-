#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct Stu {
	//成员变量
	char name[20];		//名字
	int age;			//年龄
	char id[20];
}s1, s2;				//s1和s2也是结构体变量
//s1，s2是全局变量
int main() {
	struct Stu s;		//对象
	//s是局部变量
	return 0;
}