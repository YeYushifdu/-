#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�������������Ӵ�С���
//int main() {
//	int a = 0, b = 0, c = 0;
//	printf("����������������");
//	scanf("%d %d %d", &a, &b, &c);
//	printf("�Ӵ�С����Ϊ��");
//	if (a > b) {
//		if (b > c) {
//			printf("%d,%d,%d\n", a, b, c);
//		}
//		else {
//			if (c > a) {
//				printf("%d,%d,%d\n", c, a, b);
//			}
//			else {
//				printf("%d,%d,%d\n", a, c, b);
//			}
//		}
//	}
//	else {
//		if (a > c) {
//			printf("%d,%d,%d\n", b, c, a);
//		}
//		else {
//			if (c > b) {
//				printf("%d,%d,%d\n", c, b, a);
//			}
//			else {
//				printf("%d,%d,%d", b, a, c);
//			}
//		}
//	}
//	return 0;
//}

int main() {
	int a = 0, b = 0, c = 0;
	//����
	scanf("%d%d%d", &a, &b, &c);
	//����˳��
	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c) {
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c) {
		int tmp = b;
		b = c;
		c = tmp;
	}
	//���--��С
	printf("%d %d %d\n", a, b, c);
	return 0;
}