#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ַ�������
//�ѵ�һλ�����һλ����
int my_strlen(char* str) {
	int count = 0;
	while (*str != '0') {
		count++;
		str++;
	}
	return count;
}
void reverse_string(char* str) {
	int left = 0;
	int right = my_strlen(str) - 1;
	while (left < right) {
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}
int main() {
	char arr[] = "abcdef";
	reverse_string(arr);    //������arr������arr��Ԫ�صĵ�ַ
	printf("%s\n", arr);    //fedcba
	return 0;
}