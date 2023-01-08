#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	//a+1表示第二个元素地址，解引用为第二个元素
//	//*ptr表示数组之后空间，*(ptr-1)向前移一个整型，表示数组最后一个元素
//	return 0;
//}

struct Test {
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;				//假设p的值为0x100000，结构体Test类型的变量大小是20字节
int main() {
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);
	return 0;
}