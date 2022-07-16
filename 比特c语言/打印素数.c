#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//打印素数
int main() {
	int i = 100, j = 0, con = 0;
	printf("素数为：");
	for (i = 100; i <= 200; i++) {
		con = 1;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				con = 0;
			}
		}
		if (con == 1) {
			printf("%d ", i);
		}
	}
	return 0;
}

