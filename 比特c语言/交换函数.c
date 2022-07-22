#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//交换函数
//函数返回类型的地方写出：void
//表示这个函数不返回任何值，也不需要返回
//void Swap(int x, int y) {
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}    //这个函数为x和y又开辟了空间，交换x和y的值
//
//int main() {
//	int a = 10, b = 20;
//	printf("交换前a=%d,b=%d\n", a, b);
//	Swap(a, b);    //a和b与x和y是两对独立空间
//	printf("交换后a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main() {
//	int a = 10;    //4个字节的空间
//	int* pa = &a;    //pa就是一个指针变量
//	*pa = 20;    //可以通过pa找到a
//	printf("%d\n", a);
//	return 0;
//}

void Swap(int* pa, int* pb) {
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

int main() {
	int a = 10, b = 20;
	printf("交换前a=%d,b=%d\n", a, b);
	Swap(&a, &b);
	printf("交换后a=%d,b=%d\n", a, b);
	return 0;
}