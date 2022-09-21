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


//指针加减整数
//#define VALUES 5
//int main() {
//	float values[VALUES];
//	float* vp;
//	for (vp = &values[0]; vp < &values[VALUES];) {
//		*vp++ = 0;
//	}
//	return 0;
//}

//指针-指针
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//指针-指针得到两个指针之间元素个数
//	//指针-指针的前提：两个指针指向同一个空间
//	return 0;
//}
//实例：求字符串长度
//int my_strlen(char* str) {
//	char* start = str;
//	while (*str != '\0') {
//		str++;
//	}
//	return str - start;
//}

//指针的关系运算
//int main() {
//	for (vp = &values[VALUES]; vp > &values[0];) {
//		*--vp = 0;
//	}
//	return 0;
//}
////简化
//int main() {
//	for (vp = &values[VALUES-1]; vp >= &values[0]; vp--) {
//		*vp = 0;
//	}
//	return 0;
//}

//指针和数组
//int main() {
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}

//二级指针
//int main() {
//	int a = 10;
//	int* pa = &a;		//pa是指针变量，一级指针
//	int** ppa = &pa;	//pa也是变量，&pa取出pa在内存中起始地址
//	//ppa就是二级指针变量
//	return 0;
//}

//指针数组
int main() {
	int arr[10];		//整型数组--存放整型的数组
	char ch[5];			//字符数组--存放字符的数组
	int* parr[5];		//整形指针的数组
	return 0;
}