#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	int i = 1000;
//	printf("�������Ϊ��");
//	for (i = 1000; i <= 2000; i++) {
//		if (i % 4 == 0) {
//			if (i % 100 != 0) {
//				printf("%d ", i);
//			}
//			else {
//				if (i % 400 == 0) {
//					printf("%d ", i);
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main() {
//	int y = 0, count = 0;
//	for (y = 1000; y <= 2000; y++) {
//		//�ж�y�ǲ�������
//		//1.��4�����Ҳ��ܱ�100����������
//		//2.�ܱ�400����������
//		//if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) 
//		if (y % 4 == 0) {
//			if (y % 100 != 0) {
//				printf("%d ", y);
//				count++;
//			}
//		}
//		if (y % 400 == 0) {
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}

//���ú���ʵ��
int is_leap_year(int n) {    //����ж������귵��1
	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0)) {
		return 1;
	}
	return 0;    //�������귵��0
}
int main() {
	int y = 0;
	for (y = 1000; y <= 2000; y++) {
		if (is_leap_year(y) == 1) {
			printf("%d ", y);
		}
	}
	return 0;
}