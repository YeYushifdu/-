#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//º∆À„1/1-1/2+1/3-1/4+...+1/99-1/100
//int main() {
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 2 == 1) {
//			sum = sum + (1.0 / i);
//		}
//		else {
//			sum = sum - (1.0 / i);
//		}
//	}
//	printf("%lf", sum);
//	return 0;
//}
int main() {
	int i = 0, flag = 1;
	double sum = 0.0;
	for (i = 1; i <= 100; i++) {
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf", sum);
	return 0;
}