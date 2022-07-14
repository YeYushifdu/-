#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//将三个整数按从大到小输出
int main() {
	int a = 0, b = 0, c = 0;
	printf("请输入三个整数：");
	scanf("%d %d %d", &a, &b, &c);
	printf("从大到小依次为：");
	if (a > b) {
		if (b > c) {
			printf("%d,%d,%d\n", a, b, c);
		}
		else {
			if (c > a) {
				printf("%d,%d,%d\n", c, a, b);
			}
			else {
				printf("%d,%d,%d\n", a, c, b);
			}
		}
	}
	else {
		if (a > c) {
			printf("%d,%d,%d\n", b, c, a);
		}
		else {
			if (c > b) {
				printf("%d,%d,%d\n", c, b, a);
			}
			else {
				printf("%d,%d,%d", b, a, c);
			}
		}
	}
	return 0;
}