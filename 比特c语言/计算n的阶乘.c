#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//计算n的阶乘

int main() {
	int n = 0;
	int i = 1;
	int mul = 1;
	printf("输入整数n：");
	scanf("%d", &n);
	for (i = 1; i <=n; i++) {
		mul *= i;
	}
	printf("n的阶乘为:%d\n", mul);
	return 0;
}

