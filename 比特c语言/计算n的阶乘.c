#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����n�Ľ׳�

//int main() {
//	int n = 0;
//	int i = 1;
//	int mul = 1;
//	printf("��������n��");
//	scanf("%d", &n);
//	for (i = 1; i <=n; i++) {
//		mul *= i;
//	}
//	printf("n�Ľ׳�Ϊ:%d\n", mul);
//	return 0;
//}

//�����ݹ�ʵ��
int Fac(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return n * Fac(n - 1);
	}
}
int main() {
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}