#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ַ�������
int main() {
	char arr[] = "abcdef";
	reverse_string(arr);    //������arr������arr��Ԫ�صĵ�ַ
	printf("%s\n", arr);    //fedcba
	return 0;
}