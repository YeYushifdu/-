#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//找出两个整数中的较大值
int main() {
	int a = 0, b = 0;
	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	if (a > b) {
		printf("较大值为%d\n", a);
	}
	else if (b > a) {
		printf("较大值为%d\n", b);
	}
	else {
		printf("两数一样大\n");
	}
	return 0;
}