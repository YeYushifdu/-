#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�����ݹ�ʵ��
//int Fib(int n) {
//	if (n <= 2) {
//		return 1;
//	}
//	else {
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
int main() {
	int n = 0;
	printf("������������");
	scanf("%d", &n);
	int ret = Fib(n);
	printf("��%d��쳲��������ǣ�%d\n", n, ret);
	return 0;
}

//ѭ��(����)ʵ��
int Fib(int n) {
	int a = 1, b = 1, c = 1;
	while (n>2) {
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}