#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��ӡ3�ı���
int main() {
	int i = 1;
	for (i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			printf("%d ", i);
		}
	}
	return 0;
}