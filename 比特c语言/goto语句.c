#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	flag:
	printf("hehe\n");
	printf("haha\n");
	goto flag;
	return 0;
}

//关机程序
//只要运行起来，电脑就在60s内关机，如果输入：stop  就取消关机
//shutdown -s -t 60  执行60s关机
//shutdown -a  取消关机
int main() {
	//system()--执行系统命令
	system("shutdown -s -t 60");
	printf("电脑将在60s内关机，输入：stop以取消关机");
	return 0;
}