#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����n��k�η�
int my_power(int n, int k) {
	int i = 0, mul = 1;
	for (i = 1; i <= k; i++) {
		mul *= n;
	}
	return mul;
}
int main() {
	int n = 0, k = 0, mul = 0;
	printf("�����������");
	scanf("%d", &n);
	printf("n������ָ����");
	scanf("%d", &k);
	mul = my_power(n, k);
	printf("%d��%d�η�Ϊ��%d\n", n, k, mul);
	return 0;
}