#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	//int n = 8;
//	//int arr[n];
//	//return 0;
//	int arr[10] = { 0 };	//初始化第一项为0，其它项默认为0
//	arr[4] = 5;		//[]下标引用操作符
//}
//存储位置
//%p专门用来打印地址(十六进制)
int main() {
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("&arr[%d]=%p\n", i, &arr[i]);
	}
	return 0;
}