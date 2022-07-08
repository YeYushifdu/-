#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	int ch = getchar();    //获取一个字符
//	//printf("%c\n", ch);
//	putchar(ch);    //输出一个字符
//	return 0;
//}

//int main() {
//	int ch = 0;
//	//EOF = end of file;
//	//ctrl+z - getchar读取结束
//	while ((ch = getchar()) != EOF) {
//		putchar(ch);
//	}
//	return 0;
//}

//int main() {
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);    //这里不用&，因为password是数组
//	//回车后直接将缓冲区的字符串给到password[]，而缓冲区的"\n"给到ch
//	printf("请确认密码（Y/N）:>");
//	int ch = getchar();
//	if (ch == 'Y') {
//		printf("确认成功\n");
//	}
//	else {
//		printf("确认失败\n");
//	}
//	return 0;
//}

//改正：将缓冲区内的"\n"拿走
//int main() {
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);    //这里不用&，因为password是数组
//	printf("请确认密码（Y/N）:>");
//	//清理缓存区
//	getchar();    //处理"\n"
//	int ch = getchar();
//	if (ch == 'Y') {
//		printf("确认成功\n");
//	}
//	else {
//		printf("确认失败\n");
//	}
//	return 0;
//}

//改正2：彻底清空缓冲区
//int main() {
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);    //这里不用&，因为password是数组
//	printf("请确认密码（Y/N）:>");
//	//清理缓存区中的多段字符
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n') {
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y') {
//		printf("确认成功\n");
//	}
//	else {
//		printf("确认失败\n");
//	}
//	return 0;
//}

int main() {
	int ch = 0;
	while ((ch = getchar()) != EOF) {
		if (ch < '0' || ch>'9')
			continue;    //如果没有数字就跳出循环
		putchar(ch);    //如果有数字就打印
	}
	return 0;
}