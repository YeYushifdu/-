#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x = 0, i = 0, j = 1, count = 0;
	printf("������һ��������>");
	scanf("%d", &x);
	for (i = 1; i < 32; i++) {
		if ((x & j) != 0) {
			count++;
		}
		j *= 2;
	}
	printf("1�ĸ�����%d\n", count);
	return 0;
}