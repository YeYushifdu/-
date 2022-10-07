#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n = 9;
	float* pfloat = (float*)&n;
	printf("n的值：%d\n", n);
	printf("*pfloat的值：%f\n", *pfloat);
	*pfloat = 9.0;
	printf("n的值：%d\n", n);
	printf("*pfloat的值：%f\n", *pfloat);
	return 0;
}