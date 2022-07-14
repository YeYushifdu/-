#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//打印最大公约数
int main() {
	int a = 0, b = 0, c = 1, ans = 0;
	printf("请输入两个整数：");
	scanf("%d%d", &a, &b);
	for (c = 1; c <= a; c++) {
		if (a % c == 0 && b % c == 0) {
			ans = c;
		}
	}
	printf("%d和%d的最大公约数为：%d", a, b, ans);
	return 0;
}