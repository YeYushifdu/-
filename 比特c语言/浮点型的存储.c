#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n = 9;
	float* pfloat = (float*)&n;
	printf("n��ֵ��%d\n", n);
	printf("*pfloat��ֵ��%f\n", *pfloat);
	*pfloat = 9.0;
	printf("n��ֵ��%d\n", n);
	printf("*pfloat��ֵ��%f\n", *pfloat);
	return 0;
}