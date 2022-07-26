#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	printf("hehe\n");
//	main();
//	return 0;
//}

//按顺序打印整型的每一位
//输入：1234
//输出：1 2 3 4
//void print(unsigned int n) {
//	if (n > 9) {
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main() {
//	unsigned int num = 0;
//	scanf("%u", &num);    //1234
//	print(num);    //print()函数可以打印参数部分数字的每一位
//	return 0;
//}

//栈溢出
void test(int n) {
	if (n < 10000) {
		test(n + 1);
	}
}

int main() {
	test(1);
	return 0;
}