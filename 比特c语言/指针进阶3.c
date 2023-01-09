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

//struct Test {
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;				//假设p的值为0x100000，结构体Test类型的变量大小是20字节
//int main() {
//	printf("%p\n", p + 0x1);					//指针+1，跳过20字节，即0x14
//	printf("%p\n", (unsigned long)p + 0x1);		//整型+1
//	printf("%p\n", (unsigned int*)p + 0x1);		//+1整型，即+4
//	return 0;
//}

//int main() {
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);			//数组后面空间
//	int* ptr2 = (int*)((int)a + 1);		//地址差1，实际偏移一个字节，再整形指针解引用
//	printf("%x ", ptr1[-1]);			//*(ptr1-1)
//	printf("%x", *ptr2);				//如果是小端存储则为(01) 00 00 00 02
//	return 0;
//}

int main() {
	int a[3][2] = { (0,1),(2,3),(4,5) };	//逗号表达式，(1,3,5,0,0,0)
	int* p;
	p = a[0];
	printf("%d", p[0]);
	return 0;
}