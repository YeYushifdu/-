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

struct Test {
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;				//����p��ֵΪ0x100000���ṹ��Test���͵ı�����С��20�ֽ�
int main() {
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);
	return 0;
}