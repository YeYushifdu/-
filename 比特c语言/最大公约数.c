#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��ӡ���Լ��
int main() {
	int a = 0, b = 0, c = 1, ans = 0;
	printf("����������������");
	scanf("%d%d", &a, &b);
	for (c = 1; c <= a; c++) {
		if (a % c == 0 && b % c == 0) {
			ans = c;
		}
	}
	printf("%d��%d�����Լ��Ϊ��%d", a, b, ans);
	return 0;
}