#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	int a = 10;				//4个byte
//	int* pa = &a;			//取地址——a的4个字节中第一个字节的地址
//	*pa = 20;
//	return 0;
//}

//指针类型的意义
//int main() {
//	int a = 0x11223344;
//	//int* pa = &a;			//调试-窗口-内存-&a-可以看到44 33 22 11
//	//*pa = 0;				//变成00 00 00 00
//	//char* pc = &a;
//	//*pc = 0;				//变成00 33 22 11，访问权限发生变化
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", pc);
//	printf("%p\n", p + 1);
//	printf("%p\n", pc + 1);
//	return 0;
//}

//野指针
//int main() {
//	int* p;				//p是一个局部的指针变量，局部变量未初始化，默认是随机值
//	*p = 20;			//非法访问内存
//	return 0;
//}
//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++) {
//		*p = i;
//		p++;
//	}
//	return 0;
//}
//int* test() {
//	int a = 10;
//	return &a;
//}
//int main() {
//	int* p = test();
//	*p = 20;
//	return 0;
//}//假设a的地址为0x0012ff40，在退出test函数时该空间就被释放了
////如果强行给0x0012ff40空间赋值，则报错