#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
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
//void test(int n) {
//	if (n < 10000) {
//		test(n + 1);
//	}
//}
//
//int main() {
//	test(1);
//	return 0;
//}

//不允许创建临时变量，求字符串的长度
//int my_strlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
int my_strlen(char* str) {
	if (*str != '\0') {
		return 1 + my_strlen(str + 1);    //转向下一个字符的地址
	}
	else {    //第一个字符就是'\0'
		return 0;
	}
}

int main() {
	char arr[] = "hello";
	//模拟实现strlen()函数
	printf("%d\n", my_strlen(arr));
	return 0;
}