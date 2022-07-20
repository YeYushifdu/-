#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//找出两个整数中的较大值
//int main() {
//	int a = 0, b = 0;
//	printf("请输入两个整数：");
//	scanf("%d %d", &a, &b);
//	if (a > b) {
//		printf("较大值为%d\n", a);
//	}
//	else if (b > a) {
//		printf("较大值为%d\n", b);
//	}
//	else {
//		printf("两数一样大\n");
//	}
//	return 0;
//}

get_max(int x, int y) {
	int z = 0;
	if (x > y) {
		z = x;
	}
	else {
		z = y;
	}
	return z;
}

int main() {
	int a = 10, b = 20;
	int max = get_max(a, b);
	printf("max=%d\n", max);
	return 0;
}