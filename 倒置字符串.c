#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void reverse(char* left, char* right) {//字符串翻转
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
	//1.字符串整体翻转
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	//2.每个单词逆序
	char* start = arr;
	while (*start) {
		char* end = start;
		while ((*end != ' ') && (*end != '\0')) {
			end++;
		}//一直取直到遇到空格
		reverse(start, end - 1);//翻转单词
		if (*end == ' ') {
			start = end + 1;//找下一个单词
		}
		else {
			start = end;//到\0了，不继续了，跳出while
		}
	}
	printf("%s", arr);
	return 0;
}