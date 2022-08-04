#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//计算一个数的每位之和
//int sum(int n) {
//	int num = 0;
//	while (n >= 10) {
//		num += n % 10;
//		n = (n - n % 10) / 10;
//	}
//	num += n;
//	return num;
//}
//函数递归实现
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
	printf("请输入一个整数：");
	scanf("%d", &n);
	num = sum(n);
	printf("该数每位之和为：%d\n", num);
	return 0;
}