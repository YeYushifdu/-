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

	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr));		//��'\0'�����ֵ	
	//printf("%d\n", strlen(arr + 0));	//���ֵ
	//printf("%d\n", strlen(*arr));		//��a(97)������ַ�����ã�����
	//printf("%d\n", strlen(arr[1]));		//��b��98��������ַ������
	//printf("%d\n", strlen(&arr));		//���ֵ
	//printf("%d\n", strlen(&arr + 1));	//�������Ŀռ���'\0'�����ֵ-6
	//printf("%d\n", strlen(&arr[0] + 1));//�ڶ���Ԫ�ؿ�ʼ��'\0'�����ֵ-1

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));		//�����С��7	
	//printf("%d\n", sizeof(arr + 0));	//��һ��Ԫ�ص�ַ�Ĵ�С
	//printf("%d\n", sizeof(*arr));		//��һ��Ԫ�أ��ַ����Ĵ�С
	//printf("%d\n", sizeof(arr[1]));		//�ڶ���Ԫ�أ��ַ����Ĵ�С
	//printf("%d\n", sizeof(&arr));		//��ַ�Ĵ�С
	//printf("%d\n", sizeof(&arr + 1));	//�������Ŀռ�ĵ�ַ�Ĵ�С
	//printf("%d\n", sizeof(&arr[0] + 1));//�ڶ���Ԫ�ص�ַ�Ĵ�С

	//char arr[] = "abcdef";
	//printf("%d\n", strlen(arr));		//���鳤�ȣ�6	
	//printf("%d\n", strlen(arr + 0));	//ͬ��
	//printf("%d\n", strlen(*arr));		//��a(97)������ַ�����ã�����
	//printf("%d\n", strlen(arr[1]));		//��b��98��������ַ������
	//printf("%d\n", strlen(&arr));		//6
	//printf("%d\n", strlen(&arr + 1));	//�������Ŀռ���'\0'�����ֵ
	//printf("%d\n", strlen(&arr[0] + 1));//�ڶ���Ԫ�ؿ�ʼ��'\0'��5

	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));		//ָ�������С
	//printf("%d\n", sizeof(p + 1));	//�ڶ���Ԫ��ָ������Ĵ�С
	//printf("%d\n", sizeof(*p));		//��һ��Ԫ�أ��ַ����Ĵ�С
	//printf("%d\n", sizeof(p[0]));		//��һ��Ԫ�أ��ַ����Ĵ�С
	//printf("%d\n", sizeof(&p));		//��ַ�Ĵ�С
	//printf("%d\n", sizeof(&p + 1));	//��ַ�Ĵ�С
	//printf("%d\n", sizeof(&p[0] + 1));//�ڶ���Ԫ�ص�ַ�Ĵ�С

	char* p = "abcdef";
	printf("%d\n", strlen(p));		//���鳤�ȣ�6
	printf("%d\n", strlen(p + 1));	//5
	printf("%d\n", strlen(*p));		//��һ��Ԫ�أ�ASCII�룩������
	printf("%d\n", strlen(p[0]));	//ͬ��
	printf("%d\n", strlen(&p));		//��p��λ�ÿ�ʼ��'\0'�����ֵ
	printf("%d\n", strlen(&p + 1));	//��p��λ�ü�4����8����ʼ��'\0'�����ֵ
	printf("%d\n", strlen(&p[0] + 1));//5
	//��ά����

	return 0;
}

