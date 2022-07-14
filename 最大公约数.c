#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//打印最大公约数
//int main() {
//	int a = 0, b = 0, c = 1, ans = 0;
//	printf("请输入两个整数：");
//	scanf("%d%d", &a, &b);
//	for (c = 1; c <= a; c++) {
//		if (a % c == 0 && b % c == 0) {
//			ans = c;
//		}
//	}
//	printf("%d和%d的最大公约数为：%d", a, b, ans);
//	return 0;
//}

int main() {
	int m = 0, n = 0, max = 0;
	scanf("%d%d", &m, &n);
	//假设最大公约数就是m和n的较小值
	if (m > n)
		max = n;
	else
		max = m;
	while (1) {
		if (m % max == 0 && n % max == 0) {
			printf("最大公约数是%d", max);
			break;
		}
		max--;
	}
	return 0;
}