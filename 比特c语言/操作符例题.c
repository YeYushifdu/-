#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����1
//int NumberOf1(int n) {
//	int count = 0;
//	while (n) {
//		if (n % 2 == 1) {
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}


//int main() {
//	int n = -1;
//	int ret = NumberOf1(n);
//	printf("1�ĸ�����%d\n", ret);
//	return 0;
//}
//nΪ����ʱ������������

//����2
//int main() {
//	int x = 0, i = 0, j = 1, count = 0;
//	printf("������һ��������>");
//	scanf("%d", &x);
//	for (i = 1; i < 32; i++) {
//		if ((x & j) != 0) {
//			count++;
//		}
//		j *= 2;
//	}
//	printf("1�ĸ�����%d\n", count);
//	return 0;
//}

//�ȼ���
//int NumberOf1(int n) {
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++) {
//		if (((n >> i) & 1) == 1) {
//			count++;
//		}
//	}
//	return count;
//}

//������
//int NumberOf1(int n) {
//	int count = 0;
//	int i = 0;
//	while (n) {
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}

//�ж�һ�����ǲ���2��n�η�
//2��n�η��Ķ�������ֻ��1��1
//k&(k-1)==0

//�������������Ʋ�ͬλ�ĸ���
//int main() {
//	int m = 22, n = 33;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++) {
//		if (((m >> i) & 1) != ((n >> i) & 1)) {
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//�����������
//int main() {
//	int m = 22, n = 33;
//	int i = 0;
//	int ret = m ^ n;
//	int count = NumberOf1(ret);
//	printf("%d\n", count);
//	return 0;
//}

//��ӡ���������������е�ż��λ������λ
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	//��ӡż��λ
//	for (i = 31; i >= 1; i -= 2) {
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//��ӡ����λ
//	for (i = 30; i >= 0; i -= 2) {
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}

//��������ʱ��������������������ֵ
int main() {
	int a = 10, b = 20;
	a = a ^ b;
	b = a ^ b;		//a^b^b
	a = a ^ b;		//a^b^a
	printf("a=%d b=%d\n", a, b);
	return 0;
}