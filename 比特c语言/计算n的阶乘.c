#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����n�Ľ׳�

int main() {
	int n = 0;
	int i = 1;
	int mul = 1;
	printf("��������n��");
	scanf("%d", &n);
	for (i = 1; i <=n; i++) {
		mul *= i;
	}
	printf("n�Ľ׳�Ϊ:%d\n", mul);
	return 0;
}

