#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����1��+2��+3��+...+10��

//int main() {
//	int i = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++) {
//		int j = 1;
//		int mul = 1;    //����n�Ľ׳�֮ǰ����mul��ʼΪ1
//		for (j = 1; j <= i; j++) {
//			mul *= j;
//		}
//		sum += mul;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

int main() {
	int n = 1;
	int mul = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++) {
		mul *= n;    //�׳˿ɿ���ǰһ��׳˳��Ը�������	
		sum += mul;
	}
	printf("%d\n", sum);
}