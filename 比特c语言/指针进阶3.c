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

//int main() {
//	int a[3][2] = { (0,1),(2,3),(4,5) };	//���ű��ʽ��(1,3,5,0,0,0)
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);						//1
//	return 0;
//}

//int main() {
//	int a[5][5];													//5��5��
//	int(*p)[4];														//pָ��һ����ַ
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//pָ��a��p+1ָ��a+4��p+2ָ��a+8...
//	//p[4][2]ָ��a+19
//	//ָ��-ָ��=����ָ��֮��Ԫ�ظ�����-4
//	//10000000 00000000 00000000 00000100
//	//11111111 11111111 11111111 11111011
//	//11111111 11111111 11111111 11111100��FFFFFFFC
//	return 0;
//}

//int main() {
//	int a[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&a + 1);		//�������ռ�
//	int* ptr2 = (int*)(*(a + 1));	//��һ�к���ռ�
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));	//10��5
//	return 0;
//}

//int main() {
//	char* a[] = { "work","at","ali" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);	//at
//	return 0;
//}

int main() {
	char* c[] = { "enter","new","point","first" };
	char** cp[] = { c + 3,c + 2,c + 1,c };	//����ָ��c
	char*** cpp = cp;						//cpp��cp��ַ
	printf("%s\n", **++cpp);				//cp��c+2��point
	printf("%s\n", *-- * ++cpp + 3);		//cp��c+1������--�õ�c��enter������+3��ӡe֮�������er
	printf("%s\n", *cpp[-2] + 3);			//**(cpp-2)�õ�c+3��first������+3��ӡs֮�������st
	printf("%s\n", cpp[-1][-1] + 1);		//*(cpp-1)�õ�c+2��*(*(cpp-1)-1)�õ�new�ĵ�ַ������+1���ӡn֮�������ew
	return 0;
}
