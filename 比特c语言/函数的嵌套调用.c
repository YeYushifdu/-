#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�����ں�����Ƕ�׵��ú���
//�������ں�����Ƕ�׶��庯��
void test3() {
	printf("hehe\n");
}
int test2() {
	test3();
	return 0;
}
int main() {
	test2();
	return 0;
}