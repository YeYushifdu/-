#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//计算n的阶乘

//int main() {
//	int n = 0;
//	int i = 1;
//	int mul = 1;
//	printf("输入整数n：");
//	scanf("%d", &n);
//	for (i = 1; i <=n; i++) {
//		mul *= i;
//	}
//	printf("n的阶乘为:%d\n", mul);
//	return 0;
//}

//函数递归实现
int Fac(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return n * Fac(n - 1);
	}
}
int main() {
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}