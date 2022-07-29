#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//函数递归部分
int Tiao(int n) {
	if (n == 1) {
		return 1;
	}
	else if (n == 2) {
		return 2;
	}
	else {
		return Tiao(n - 1) + Tiao(n - 2);
	}
}
int main() {
	int n = 0;
	printf("请输入台阶数：");
	scanf("%d", &n);
	int c = Tiao(n);
	printf("跳跃方式数为：%d", c);
	return 0;
}
//int Tiao(int n) {
//	int cn_1 = 2, cn_2 = 1, cn = 0;    //初始c1=cn_2=1,c2=cn_1=1
//	if (n == 1) {
//		cn = 1;
//	}
//	else if (n == 2) {
//		cn = 2;
//	}
//	while (n > 2) {
//		cn = cn_1 + cn_2;
//		cn_2 = cn_1;    //cn_2后移一位
//		cn_1 = cn;    //cn_1后移一位
//		n--;
//	}
//	return cn;
//}