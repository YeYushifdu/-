#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//求阶乘和，不考虑溢出
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0, j = 0;
//	int ret = 1;
//	int sum = 0;
//	for(j = 1; j <= n; j++) {
//		for (i = 1; i <= j; i++) {
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}//调试发现ret值未置1

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0, j = 0;
//	int ret;
//	int sum = 0;
//	for (j = 1; j <= n; j++) {
//		ret = 1;
//		for (i = 1; i <= j; i++) {
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//实例2
int main() {
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++) {
		arr[i] = 0;
		printf("a");
	}
	return 0;
}