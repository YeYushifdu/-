#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��ӡ����
int main() {
	int i = 100, j = 0, con = 0;
	printf("����Ϊ��");
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

