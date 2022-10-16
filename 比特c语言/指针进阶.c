#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	return 0;
//}

//int main() {
//	char* pstr = "hello!";
//	printf("%s\n", pstr);
//	printf("%c\n", *pstr);
//	return 0;
//}

//int main() {
//	char str1[] = "hello";
//	char str2[] = "hello";
//	char* str3 = "hello";
//	char* str4 = "hello";
//	if (str1 == str2) {
//		printf("str1 and str2 are same.\n");
//	}
//	if (str3 == str4) {
//		printf("str3 and str4 are same.\n");
//	}
//	return 0;
//}

////指针数组
//int main() {
//	int a = 10, b = 20, c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//int main() {
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 5; j++) {
//			//printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针
//int main() {
//	int arr[10] = { 1,2,3,4,5 };
//	int(*parr)[10] = &arr;		//取出的是数组的地址
//	//parr就是一个数组指针-存放数组的地址
//	//arr是首元素arr[0]的地址
//	return 0;
//}

//int main() {
//	double* d[5];
//	double* (*pd)[5] = &d;		//pd就是一个数组指针
//	return 0;
//}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *((*pa) + i));
//	}
//	return 0;
//}

////常用于二维数组
//void print1(int arr[3][5], int r, int c) {
//	int i = 0, j = 0;
//	for (i = 0; i < r; i++) {
//		for (j = 0; j < c; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int r, int c) {	//p是一个一维数组指针
//	int i = 0, j = 0;
//	for (i = 0; i < r; i++) {
//		for (j = 0; j < c; j++) {
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);					//arr表示首元素，即第一行的地址
//	return 0;
//}

//一维数组传参
//void test(int arr[]) {}
//void test(int arr[10]) {}
//void test(int* arr) {}
//void test2(int* arr[20]) {}
//void test2(int** arr) {}
//int main() {
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };		//整型指针数组
//	test(arr);
//	test(arr2);
//	return 0;
//}

//二维数组传参
//void test(int arr[3][5]) {}
//void test(int arr[][]) {}
//void test(int arr[][5]) {}
//
//void test(int* arr) {}			//第一行的地址，不能用int指针接收,error
//void test(int* arr[5]) {}		//不能用数组接收,error
//void test(int(*arr)[5]) {}		//指向5个int元素的指针,right
//void test(int** arr) {}			//不能用二级指针接收,error
//int main() {
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };		//整型指针数组
//	test(arr);
//	test(arr2);
//	return 0;
//}

//一级指针传参
//void print(int* ptr, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", *(ptr + i));
//	}
//}
//
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p是一级指针
//	print(p, sz);
//	return 0;
//}

//二级指针传参
void test(int** p2) {
	**p2 = 20;
}
int main() {
	int a = 10;
	int* pa = &a;		//pa是一级指针
	int** ppa = &pa;	//ppa是二级指针
	test(ppa);
	//test(&pa);			//传一级指针的地址也没问题
	printf("%d\n", a);
	return 0;
}