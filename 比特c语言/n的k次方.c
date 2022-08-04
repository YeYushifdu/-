#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//计算n的k次方
int my_power(int n, int k) {
	int i = 0, mul = 1;
	for (i = 1; i <= k; i++) {
		mul *= n;
	}
	return mul;
}
int main() {
	int n = 0, k = 0, mul = 0;
	printf("请输入底数：");
	scanf("%d", &n);
	printf("n请输入指数：");
	scanf("%d", &k);
	mul = my_power(n, k);
	printf("%d的%d次方为：%d\n", n, k, mul);
	return 0;
}