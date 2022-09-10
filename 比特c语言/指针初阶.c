#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	int a = 10;				//4个byte
//	int* pa = &a;			//取地址——a的4个字节中第一个字节的地址
//	*pa = 20;
//	return 0;
//}

//指针类型的意义
int main() {
	int a = 0x11223344;
	//int* pa = &a;			//调试-窗口-内存-&a-可以看到44 33 22 11
	//*pa = 0;				//变成00 00 00 00
	//char* pc = &a;
	//*pc = 0;				//变成00 33 22 11，访问权限发生变化
	int arr[10] = { 0 };
	int* p = arr;
	char* pc = arr;
	printf("%p\n", p);
	printf("%p\n", pc);
	printf("%p\n", p + 1);
	printf("%p\n", pc + 1);
	return 0;
}