#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int Han(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	else {
//		return 2 * Han(n - 1) + 1;
//	}
//}
int main() {
	int n = 0;
	printf("请输入汉诺塔层数：");
	scanf("%d", &n);
	int c = Han(n);
	printf("最小操作次数为：%d\n", c);
	return 0;
}
int Han(int n) {
	int i = 0, count = 0;
	for (i = 1; i <= n; i++) {
		count = count * 2 + 1;
	}
	return count;
}