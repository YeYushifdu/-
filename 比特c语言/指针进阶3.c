#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	//a+1��ʾ�ڶ���Ԫ�ص�ַ��������Ϊ�ڶ���Ԫ��
//	//*ptr��ʾ����֮��ռ䣬*(ptr-1)��ǰ��һ�����ͣ���ʾ�������һ��Ԫ��
//	return 0;
//}

//struct Test {
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;				//����p��ֵΪ0x100000���ṹ��Test���͵ı�����С��20�ֽ�
//int main() {
//	printf("%p\n", p + 0x1);					//ָ��+1������20�ֽڣ���0x14
//	printf("%p\n", (unsigned long)p + 0x1);		//����+1
//	printf("%p\n", (unsigned int*)p + 0x1);		//+1���ͣ���+4
//	return 0;
//}

//int main() {
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);			//�������ռ�
//	int* ptr2 = (int*)((int)a + 1);		//��ַ��1��ʵ��ƫ��һ���ֽڣ�������ָ�������
//	printf("%x ", ptr1[-1]);			//*(ptr1-1)
//	printf("%x", *ptr2);				//�����С�˴洢��Ϊ(01) 00 00 00 02
//	return 0;
//}

int main() {
	int a[3][2] = { (0,1),(2,3),(4,5) };	//���ű��ʽ��(1,3,5,0,0,0)
	int* p;
	p = a[0];
	printf("%d", p[0]);
	return 0;
}