#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//方法1
//int NumberOf1(int n) {
//	int count = 0;
//	while (n) {
//		if (n % 2 == 1) {
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

int NumberOf1(int n) {
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++) {
		if (((n >> i) & 1) == 1) {
			count++;
		}
	}
	return count;
}
int main() {
	int n = -1;
	int ret = NumberOf1(n);
	printf("1的个数：%d\n", ret);
	return 0;
}
//n为负数时，代码有问题

//方法2
//int main() {
//	int x = 0, i = 0, j = 1, count = 0;
//	printf("请输入一个整数：>");
//	scanf("%d", &x);
//	for (i = 1; i < 32; i++) {
//		if ((x & j) != 0) {
//			count++;
//		}
//		j *= 2;
//	}
//	printf("1的个数：%d\n", count);
//	return 0;
//}

