#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//方法1
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
//	printf("1的个数：%d\n", ret);
//	return 0;
//}
//n为负数时，代码有问题

//方法2
//int main() {
//	int x = 0, i = 0, j = 1, count = 0;
//	printf("请输入一个整数：>");
//	scanf("%d", &x);
//	for (i = 1; i < 32; i++) {
//		if ((x & j) != 0) {
//			count++;
//		}
//		j *= 2;
//	}
//	printf("1的个数：%d\n", count);
//	return 0;
//}

//等价于
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

//方法三
//int NumberOf1(int n) {
//	int count = 0;
//	int i = 0;
//	while (n) {
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}

//判断一个数是不是2的n次方
//2的n次方的二进制数只有1个1
//k&(k-1)==0

//求两个数二进制不同位的个数
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

//方法二：异或
//int main() {
//	int m = 22, n = 33;
//	int i = 0;
//	int ret = m ^ n;
//	int count = NumberOf1(ret);
//	printf("%d\n", count);
//	return 0;
//}

//打印二进制序列中所有的偶数位和奇数位
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	//打印偶数位
//	for (i = 31; i >= 1; i -= 2) {
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//打印奇数位
//	for (i = 30; i >= 0; i -= 2) {
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}

//不创建临时变量，交换两个变量的值
int main() {
	int a = 10, b = 20;
	a = a ^ b;
	b = a ^ b;		//a^b^b
	a = a ^ b;		//a^b^a
	printf("a=%d b=%d\n", a, b);
	return 0;
}