#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<string.h>
//int my_strlen(const char* str) {
//	int count = 0;	//计数器
//	assert(str != NULL);
//	while (*str != '\0') {
//		count++; 
//		str++;		//移向下一个字符
//	}
//	return count;
//}
//int main() {
//	char arr[] = "abc";
//	//int len = strlen(arr);
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

int main() {
	if (strlen("abc") - strlen("abcdef") > 0) {
		printf(">\n");
	}
	else {
		printf("<=\n");
	}
	return 0;
}