#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void reverse(char* left, char* right) {//�ַ�����ת
	while (left < right) {
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main() {
	char arr[100] = { 0 };
	//scanf("%s", arr);
	//printf("%s", arr);
	gets(arr);
	//1.�ַ������巭ת
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	//2.ÿ����������
	char* start = arr;
	while (*start) {
		char* end = start;
		while ((*end != ' ') && (*end != '\0')) {
			end++;
		}//һֱȡֱ�������ո�
		reverse(start, end - 1);//��ת����
		if (*end == ' ') {
			start = end + 1;//����һ������
		}
		else {
			start = end;//��\0�ˣ��������ˣ�����while
		}
	}
	printf("%s", arr);
	return 0;
}