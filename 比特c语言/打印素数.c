#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//��ӡ����
//int main() {
//	int i = 100, j = 0, con = 0;
//	printf("����Ϊ��");
//	for (i = 100; i <= 200; i++) {
//		con = 1;
//		for (j = 2; j < i; j++) {
//			//���ҵ���������con��0
//			if (i % j == 0) {
//				con = 0;
//			}
//		}
//		//��2��i-1��û��i����������i������
//		if (con == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main() {
//	int i = 0, j = 0;
//	for (i = 100; i <= 200; i++) {
//		//�ж�i�Ƿ�Ϊ����(ֻ�ܱ�1�ͱ�������)
//		//2->i-1֮��������Գ�i�����ܲ�������
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}//������������j�����ӡi
//		if (i == j) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main() {
//	int i = 0, j = 0;
//	for (i = 100; i <= 200; i++) {
//		int flag = 1;
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {
//				flag = 0;    //��������
//				break;
//			}
//		}
//		if (flag == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////���ǵ���
////��m=a*b����a��b��������һ������С�ڵ��ڸ���m
////������ֻ���ж�������m
//int main() {
//	int i = 0, j = 0;
//	for (i = 100; i <= 200; i++) {
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++) {
//			if (i % j == 0) {
//				flag = 0;    //��������
//				break;
//			}
//		}
//		if (flag == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//���ú���ʵ��
int is_prime(int n) {
	int j = 0;
	for (j = 2; j < n; j++) {
		if (n % j == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int i = 0;
	for (i = 100; i <= 200; i++) {
		//�ж�i�Ƿ�Ϊ����
		if (is_prime(i) == 1) {
			printf("%d ", i);
		}
	}
	return 0;
}