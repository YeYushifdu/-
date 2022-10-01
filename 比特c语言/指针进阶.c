#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	return 0;
//}

//int main() {
//	char* pstr = "hello!";
//	printf("%s\n", pstr);
//	printf("%c\n", *pstr);
//	return 0;
//}

int main() {
	char str1[] = "hello";
	char str2[] = "hello";
	char* str3 = "hello";
	char* str4 = "hello";
	if (str1 == str2) {
		printf("str1 and str2 are same.\n");
	}
	if (str3 == str4) {
		printf("str3 and str4 are same.\n");
	}
	return 0;
}