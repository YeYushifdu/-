#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//函数递归实现
//int Fib(int n) {
//	if (n <= 2) {
//		return 1;
//	}
//	else {
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
int main() {
	int n = 0;
	printf("请输入序数：");
	scanf("%d", &n);
	int ret = Fib(n);
	printf("第%d个斐波那契数是：%d\n", n, ret);
	return 0;
}

//循环(迭代)实现
int Fib(int n) {
	int a = 1, b = 1, c = 1;
	while (n>2) {
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}