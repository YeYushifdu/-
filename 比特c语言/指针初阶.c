#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	int a = 10;				//4��byte
//	int* pa = &a;			//ȡ��ַ����a��4���ֽ��е�һ���ֽڵĵ�ַ
//	*pa = 20;
//	return 0;
//}

//ָ�����͵�����
int main() {
	int a = 0x11223344;
	//int* pa = &a;			//����-����-�ڴ�-&a-���Կ���44 33 22 11
	//*pa = 0;				//���00 00 00 00
	//char* pc = &a;
	//*pc = 0;				//���00 33 22 11������Ȩ�޷����仯
	int arr[10] = { 0 };
	int* p = arr;
	char* pc = arr;
	printf("%p\n", p);
	printf("%p\n", pc);
	printf("%p\n", p + 1);
	printf("%p\n", pc + 1);
	return 0;
}