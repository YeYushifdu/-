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

////ָ������
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

//����ָ��
//int main() {
//	int arr[10] = { 1,2,3,4,5 };
//	int(*parr)[10] = &arr;		//ȡ����������ĵ�ַ
//	//parr����һ������ָ��-�������ĵ�ַ
//	//arr����Ԫ��arr[0]�ĵ�ַ
//	return 0;
//}

//int main() {
//	double* d[5];
//	double* (*pd)[5] = &d;		//pd����һ������ָ��
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

////�����ڶ�ά����
//void print1(int arr[3][5], int r, int c) {
//	int i = 0, j = 0;
//	for (i = 0; i < r; i++) {
//		for (j = 0; j < c; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int r, int c) {	//p��һ��һά����ָ��
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
//	print2(arr, 3, 5);					//arr��ʾ��Ԫ�أ�����һ�еĵ�ַ
//	return 0;
//}

//һά���鴫��
//void test(int arr[]) {}
//void test(int arr[10]) {}
//void test(int* arr) {}
//void test2(int* arr[20]) {}
//void test2(int** arr) {}
//int main() {
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };		//����ָ������
//	test(arr);
//	test(arr2);
//	return 0;
//}

//��ά���鴫��
//void test(int arr[3][5]) {}
//void test(int arr[][]) {}
//void test(int arr[][5]) {}
//
//void test(int* arr) {}			//��һ�еĵ�ַ��������intָ�����,error
//void test(int* arr[5]) {}		//�������������,error
//void test(int(*arr)[5]) {}		//ָ��5��intԪ�ص�ָ��,right
//void test(int** arr) {}			//�����ö���ָ�����,error
//int main() {
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };		//����ָ������
//	test(arr);
//	test(arr2);
//	return 0;
//}

//һ��ָ�봫��
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
//	//p��һ��ָ��
//	print(p, sz);
//	return 0;
//}

//����ָ�봫��
//void test(int** p2) {
//	**p2 = 20;
//}
//int main() {
//	int a = 10;
//	int* pa = &a;		//pa��һ��ָ��
//	int** ppa = &pa;	//ppa�Ƕ���ָ��
//	test(ppa);
//	//test(&pa);			//��һ��ָ��ĵ�ַҲû����
//	printf("%d\n", a);
//	return 0;
//}

//����ָ��
//int Add(int x, int y) {
//	return x + y;
//}

//int main() {
//	//����ָ�롪����ź�����ַ��ָ��
//	//pf����һ������ָ�����
//	int(*pf)(int, int) = &Add;
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	return 0;
//}

//int main() {
//	//pf����һ������ָ�����
//	int(*pf)(int, int) = &Add;
//	int ret = (*pf)(3, 5);
//	printf("%d\n", ret);
//	return 0;
//}

//(*(void(*)())0)();
//()0������0ǿ������ת��
//(void(*)())0������0ǿ������ת����һ�������ĵ�ַ
// *(void(*)())0������0��ַ������
// (*(void(*)())0)()��������0��ַ���ĺ������ú����޲Σ�����ֵ��void

//void (*signal(int, void(*)(int)))(int);
//signal�Ǻ�������void(*)(int)��һ������ָ��,����Ϊint������void��signal��������Ϊһ�����ͺ�һ������ָ������
//void(*)(int)��˵��signal�����ķ��������Ǻ���ָ�룬ָ�����Ϊint������void�ĺ���

//����ָ������
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
//	//pfArr���Ǻ���ָ�����飬���ͬ���͵ĺ���ָ��
//	return 0;
//}

//������-�������ͱ����ļӼ��˳�
int Add(int x, int y) {
	return x + y;
}
int Sub(int x, int y) {
	return x - y;
}
int Mul(int x, int y) {
	return x * y;
}
int Div(int x, int y) {
	return x / y;
}
void menu() {
	printf("************************************\n");
	printf("***1.Add 2.Sub 3.Mul 4.Div 0.exit***\n");
	printf("************************************\n");
}
int main() {
	int input = 0;
	do {
		menu();
		//pfArr���Ǻ���ָ������
		int(*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
		int x = 0, y = 0, ret = 0;
		printf("��ѡ��:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4) {
			printf("������������:>");
			scanf("%d %d", &x, &y);
			ret = (pfArr[input])(x, y);
			printf("ret=%d\n", ret);
		}
		else if (input == 0) {
			printf("�˳�����\n");
			break;
		}
		else {
			printf("ѡ�����\n");
		}
	} while (input);
	return 0;
}
