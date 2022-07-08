#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//printf("c:\test\test.c");
	//printf("%c", '\130');    //8进制的130转变为十进制
	//X的ASCII码值是88
	//如果要打印“A”，ASCII码对应65，八进制为101
	//printf("%c\n", '\101');
	//printf("%c\n", '\x30');    //16进制的30转变为十进制48，对应字符‘0’
	printf("%d\n", strlen("c:\test\328\test.c"));
	return 0;
}