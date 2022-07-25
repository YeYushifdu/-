#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//可以在函数内嵌套调用函数
//不可以在函数内嵌套定义函数
void test3() {
	printf("hehe\n");
}
int test2() {
	test3();
	return 0;
}
int main() {
	test2();
	return 0;
}