#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ҳ����������еĽϴ�ֵ
//int main() {
//	int a = 0, b = 0;
//	printf("����������������");
//	scanf("%d %d", &a, &b);
//	if (a > b) {
//		printf("�ϴ�ֵΪ%d\n", a);
//	}
//	else if (b > a) {
//		printf("�ϴ�ֵΪ%d\n", b);
//	}
//	else {
//		printf("����һ����\n");
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