#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//字符串逆序
int main() {
	char arr[] = "abcdef";
	reverse_string(arr);    //数组名arr是数组arr首元素的地址
	printf("%s\n", arr);    //fedcba
	return 0;
}