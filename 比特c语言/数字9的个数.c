#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i = 0, count = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 10 == 9) {
			count++;
		}
		if (i / 10 == 9) {
			count++;
		}
	}
	printf("1-100��9�ĸ���Ϊ��%d\n", count);
	return 0;
}