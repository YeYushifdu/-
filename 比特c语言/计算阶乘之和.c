#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//计算1！+2！+3！+...+10！

//int main() {
//	int i = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++) {
//		int j = 1;
//		int mul = 1;    //计算n的阶乘之前，把mul初始为1
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
		mul *= n;    //阶乘可看作前一项阶乘乘以该项数字	
		sum += mul;
	}
	printf("%d\n", sum);
}