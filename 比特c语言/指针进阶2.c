#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));			//4*4=16
	//printf("%d\n", sizeof(a + 0));		//a+0是第一个元素的地址，计算地址的大小
	//printf("%d\n", sizeof(*a));			//*a是数组的第一个元素，计算第一个元素（整型）的大小
	//printf("%d\n", sizeof(a + 1));		//a+1是第二个元素的地址，计算地址的大小
	//printf("%d\n", sizeof(a[1]));		//计算第二个元素（整型）的大小
	//printf("%d\n", sizeof(&a));			//计算一个地址的大小
	//printf("%d\n", sizeof(*&a));		//取地址再解引用，计算数组的大小
	//printf("%d\n", sizeof(&a + 1));		//数组后面的空间的地址的大小
	//printf("%d\n", sizeof(&a[0]));		//第一个元素地址的大小
	//printf("%d\n", sizeof(&a[0] + 1));	//第二个元素地址的大小

	////字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));		//数组大小	
	//printf("%d\n", sizeof(arr + 0));	//第一个元素地址的大小
	//printf("%d\n", sizeof(*arr));		//第一个元素（字符）的大小
	//printf("%d\n", sizeof(arr[1]));		//第二个元素（字符）的大小
	//printf("%d\n", sizeof(&arr));		//地址的大小
	//printf("%d\n", sizeof(&arr + 1));	//数组后面的空间的地址的大小
	//printf("%d\n", sizeof(&arr[0] + 1));//第二个元素地址的大小

	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));		//数组大小	
	printf("%d\n", strlen(arr + 0));	//第一个元素地址的大小
	printf("%d\n", strlen(*arr));		//第一个元素（字符）的大小
	printf("%d\n", strlen(arr[1]));		//第二个元素（字符）的大小
	printf("%d\n", strlen(&arr));		//地址的大小
	printf("%d\n", strlen(&arr + 1));	//数组后面的空间的地址的大小
	printf("%d\n", strlen(&arr[0] + 1));//第二个元素地址的大小
	return 0;
}

