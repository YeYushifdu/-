#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ҳ����������еĽϴ�ֵ
int main() {
	int a = 0, b = 0;
	printf("����������������");
	scanf("%d %d", &a, &b);
	if (a > b) {
		printf("�ϴ�ֵΪ%d\n", a);
	}
	else if (b > a) {
		printf("�ϴ�ֵΪ%d\n", b);
	}
	else {
		printf("����һ����\n");
	}
	return 0;
}