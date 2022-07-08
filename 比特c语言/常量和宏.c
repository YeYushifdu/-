#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//define是一个预处理指令
//define定义符号
//#define MAX 1000
//int main() {
//	printf("%d\n", MAX);
//	return 0;
//}
//define定义宏
#define ADD(X,Y) (X+Y)
int main() {
	printf("%d\n", 4*ADD(2, 3));
	return 0;
}