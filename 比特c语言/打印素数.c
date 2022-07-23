#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//打印素数
//int main() {
//	int i = 100, j = 0, con = 0;
//	printf("素数为：");
//	for (i = 100; i <= 200; i++) {
//		con = 1;
//		for (j = 2; j < i; j++) {
//			//若找到因数，则将con置0
//			if (i % j == 0) {
//				con = 0;
//			}
//		}
//		//若2至i-1间没有i的因数，则i是素数
//		if (con == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main() {
//	int i = 0, j = 0;
//	for (i = 100; i <= 200; i++) {
//		//判断i是否为素数(只能被1和本身整除)
//		//2->i-1之间的数字试除i，看能不能整除
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}//若试完了所有j，则打印i
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
//				flag = 0;    //不是素数
//				break;
//			}
//		}
//		if (flag == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////考虑到：
////若m=a*b，则a和b中至少有一个数字小于等于根号m
////即因子只需判断至根号m
//int main() {
//	int i = 0, j = 0;
//	for (i = 100; i <= 200; i++) {
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++) {
//			if (i % j == 0) {
//				flag = 0;    //不是素数
//				break;
//			}
//		}
//		if (flag == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//调用函数实现
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
		//判断i是否为素数
		if (is_prime(i) == 1) {
			printf("%d ", i);
		}
	}
	return 0;
}