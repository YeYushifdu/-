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
//void test(int** p2) {
//	**p2 = 20;
//}
//int main() {
//	int a = 10;
//	int* pa = &a;		//pa是一级指针
//	int** ppa = &pa;	//ppa是二级指针
//	test(ppa);
//	//test(&pa);			//传一级指针的地址也没问题
//	printf("%d\n", a);
//	return 0;
//}

//函数指针
//int Add(int x, int y) {
//	return x + y;
//}

//int main() {
//	//函数指针——存放函数地址的指针
//	//pf就是一个函数指针变量
//	int(*pf)(int, int) = &Add;
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	return 0;
//}

//int main() {
//	//pf就是一个函数指针变量
//	int(*pf)(int, int) = &Add;
//	int ret = (*pf)(3, 5);
//	printf("%d\n", ret);
//	return 0;
//}

//(*(void(*)())0)();
//()0——将0强制类型转换
//(void(*)())0——将0强制类型转换成一个函数的地址
// *(void(*)())0——对0地址解引用
// (*(void(*)())0)()——调用0地址处的函数，该函数无参，返回值是void

//void (*signal(int, void(*)(int)))(int);
//signal是函数名，void(*)(int)是一个函数指针,参数为int，返回void，signal函数参数为一个整型和一个函数指针类型
//void(*)(int)，说明signal函数的返回类型是函数指针，指向参数为int，返回void的函数

//函数指针数组
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int main() {
//	int(*pf1)(int, int) = Add;
//	int(*pf2)(int, int) = Sub;
//	int(*pfArr[2])(int, int) = { Add, Sub };
//	//pfArr就是函数指针数组，存放同类型的函数指针
//	return 0;
//}

//计算器-计算整型变量的加减乘除
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//void menu() {
//	printf("************************************\n");
//	printf("***1.Add 2.Sub 3.Mul 4.Div 0.exit***\n");
//	printf("************************************\n");
//}
//int main() {
//	int input = 0;
//	do {
//		menu();
//		//pfArr就是函数指针数组
//		int(*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//		int x = 0, y = 0, ret = 0;
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) {
//			printf("请输入两个数:>");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0) {
//			printf("退出程序\n");
//			break;
//		}
//		else {
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}

//函数指针数组的地址
//int* (*p2)[5] = &arr;
////p2是指向整型指针数组的指针
//int(*p)(int, int);		//函数指针
//int(*p2[4])(int, int);	//函数指针的数组
//p3 = &p2;					//取出函数指针数组的地址
//p3就是指向函数指针数组的指针

//计算器
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//void menu() {
//	printf("************************************\n");
//	printf("***1.Add 2.Sub 3.Mul 4.Div 0.exit***\n");
//	printf("************************************\n");
//}
//int Calc(int(*pf)(int, int)) {
//	int x = 0, y = 0;
//	printf("请输入两个数:>");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//int main() {
//	int input = 0;
//	do {
//		menu();
//		int x = 0, y = 0, ret = 0;
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			ret = Calc(Add);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			ret = Calc(Sub);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			ret = Calc(Mul);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			ret = Calc(Div);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("请重新选择\n");
//		}
//	} while (input);
//	return 0;
//}

//冒泡排序
//void bubble_sort(int arr[], int sz) {
//	int i = 0;						//冒泡排序地趟数
//	for (i = 0; i < sz - 1; i++) {	//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main() {						//升序
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}


//快速排序
//void qsort(void* base,				//base中存放待排序数据中第一个对象的地址
//	size_t num,						//排序数据元素的个数
//	size_t size,					//排序数据中一个元素的大小，单位是字节
//	int(*cmp)(const void*, const void*)	//比较待排序数据中两个元素的函数
//);
int cmp_int(const void* e1, const void* e2) {
	return (*(int*)e1 - *(int*)e2);
}
void print_arr(int arr[], int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void test1() {
	//整型数据的排序
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}
struct Stu {
	char name[20];
	int age;
};
int sort_by_age(const void* e1, const void* e2) {
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;	//强制类型转换
}
int sort_by_name(const void* e1, const void* e2) {
	//return ((struct Stu*)e1)->name - ((struct Stu*)e2)->name;
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test2() {
	//结构体数据的排序
	struct Stu s[] = { {"zhangsan",30},{"lisi",34},{"wangwu",20} };
	int sz = sizeof(s) / sizeof(s[0]);
	//按照年龄排序
	qsort(s, sz, sizeof(s[0]), sort_by_age);
	//按照姓名字母排序
	qsort(s, sz, sizeof(s[0]), sort_by_name);
}
//模仿qsort函数实现冒泡排序
void Swap(char* buf1, char* buf2, int width) {
	int i = 0;
	for (i = 0; i < width; i++) {
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base,
	int sz,
	int width,
	int(*cmp)(const void* e1, const void* e2)) {	//const只比较不交换
	int i = 0;
	for (i = 0; i < sz - 1; i++) {	//趟数
		int j = 0;
		for (j = 0; j < sz - 1; j++) {	//一趟的排序
			//两个元素比较(可能是各种元素类型)
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0) {
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void test3() {
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}
void test4() {
	//结构体数据的排序
	struct Stu s[] = { {"zhangsan",30},{"lisi",34},{"wangwu",20} };
	int sz = sizeof(s) / sizeof(s[0]);
	//按照年龄排序
	bubble_sort(s, sz, sizeof(s[0]), sort_by_age);
	//按照姓名字母排序
	//bubble_sort(s, sz, sizeof(s[0]), sort_by_name);
}
int main() {						//升序
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}