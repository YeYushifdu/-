#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����һ������ÿλ֮��
//int sum(int n) {
//	int num = 0;
//	while (n >= 10) {
//		num += n % 10;
//		n = (n - n % 10) / 10;
//	}
//	num += n;
//	return num;
//}
//�����ݹ�ʵ��
int sum(int n) {
	if (n >= 10) {
		return sum(n / 10) + (n % 10);
	}
	else {
		return n;
	}
}
int main() {
	int n = 0, num = 0;
	printf("������һ��������");
	scanf("%d", &n);
	num = sum(n);
	printf("����ÿλ֮��Ϊ��%d\n", num);
	return 0;
}