#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//float a = 9 / 2.0;
	//printf("%f\n", a);
	//int a = 2;
	//int b = a << 1;    //a左移1位
	//a += 5;    //a=a+5
	//a -= 3;    //a=a-3
	//printf("%d\n", b);
	//int a = 10;    //0表示假，非0就是真
	//printf("%d\n", !a);
	//if (a)
	//{
	//	//如果a为真，执行
	//}
	//if (!a) {
	//	//如果a为假，执行
	//}
	//sizeof是操作符不是函数，括号可省略
	//int a = 10;
	////计算类型或者变量大小
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);
	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));    //计算的是数组的总大小，单位是字节
	////10*4字节
	//int sz = sizeof(arr) / sizeof(arr[0]);    //计算数组元素个数
	//printf("%d\n", sz);
	//int a = 0;
	//printf("%d\n", ~a);    //按位取反
	//int a = 10;
	//int b = ++a;    //前置++：先++，后使用
	//printf("%d\n", b);
	//printf("%d\n", a);
	int a = 10;
	int b = a++;    //后置++：直接使用，后++
	printf("%d\n", b);
	printf("%d\n", a);
	return 0;
}