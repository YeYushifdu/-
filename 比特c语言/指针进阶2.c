#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));			//4*4=16
	//printf("%d\n", sizeof(a + 0));		//a+0�ǵ�һ��Ԫ�صĵ�ַ�������ַ�Ĵ�С
	//printf("%d\n", sizeof(*a));			//*a������ĵ�һ��Ԫ�أ������һ��Ԫ�أ����ͣ��Ĵ�С
	//printf("%d\n", sizeof(a + 1));		//a+1�ǵڶ���Ԫ�صĵ�ַ�������ַ�Ĵ�С
	//printf("%d\n", sizeof(a[1]));		//����ڶ���Ԫ�أ����ͣ��Ĵ�С
	//printf("%d\n", sizeof(&a));			//����һ����ַ�Ĵ�С
	//printf("%d\n", sizeof(*&a));		//ȡ��ַ�ٽ����ã���������Ĵ�С
	//printf("%d\n", sizeof(&a + 1));		//�������Ŀռ�ĵ�ַ�Ĵ�С
	//printf("%d\n", sizeof(&a[0]));		//��һ��Ԫ�ص�ַ�Ĵ�С
	//printf("%d\n", sizeof(&a[0] + 1));	//�ڶ���Ԫ�ص�ַ�Ĵ�С

	////�ַ�����
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));		//�����С	
	//printf("%d\n", sizeof(arr + 0));	//��һ��Ԫ�ص�ַ�Ĵ�С
	//printf("%d\n", sizeof(*arr));		//��һ��Ԫ�أ��ַ����Ĵ�С
	//printf("%d\n", sizeof(arr[1]));		//�ڶ���Ԫ�أ��ַ����Ĵ�С
	//printf("%d\n", sizeof(&arr));		//��ַ�Ĵ�С
	//printf("%d\n", sizeof(&arr + 1));	//�������Ŀռ�ĵ�ַ�Ĵ�С
	//printf("%d\n", sizeof(&arr[0] + 1));//�ڶ���Ԫ�ص�ַ�Ĵ�С

	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));		//�����С	
	printf("%d\n", strlen(arr + 0));	//��һ��Ԫ�ص�ַ�Ĵ�С
	printf("%d\n", strlen(*arr));		//��һ��Ԫ�أ��ַ����Ĵ�С
	printf("%d\n", strlen(arr[1]));		//�ڶ���Ԫ�أ��ַ����Ĵ�С
	printf("%d\n", strlen(&arr));		//��ַ�Ĵ�С
	printf("%d\n", strlen(&arr + 1));	//�������Ŀռ�ĵ�ַ�Ĵ�С
	printf("%d\n", strlen(&arr[0] + 1));//�ڶ���Ԫ�ص�ַ�Ĵ�С
	return 0;
}

