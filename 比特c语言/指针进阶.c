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

//int main() {
//	char str1[] = "hello";
//	char str2[] = "hello";
//	char* str3 = "hello";
//	char* str4 = "hello";
//	if (str1 == str2) {
//		printf("str1 and str2 are same.\n");
//	}
//	if (str3 == str4) {
//		printf("str3 and str4 are same.\n");
//	}
//	return 0;
//}

//Ö¸ÕëÊý×é
int main() {
	int a = 10, b = 20, c = 30;
	int* arr[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++) {
		printf("%d ", *(arr[i]));
	}
	return 0;
}