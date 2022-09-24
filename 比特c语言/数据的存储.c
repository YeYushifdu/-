#define _CRT_SECURE_NO_WARNINGS
#include<stidio.h>
//判断是大端法还是小端法
int main() {
	int a = 1;				//小端：01 00 00 00；大端：00 00 00 01
	//取第一个字节看是什么
	char* p = (char*)&a;	//int*
	if (*p == 1) {
		printf("小端\n");
	}
	else {
		printf("大端\n");
	}
	return 0;
}