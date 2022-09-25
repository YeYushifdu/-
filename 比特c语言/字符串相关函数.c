#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//模拟实现strcpy
//strcpy
//int main() {
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);			//1.目标空间的起始地址 2.源空间的起始地址
//	printf("%s\n", arr1);		//把arr2中"o"之后的"\0"也copy过去，所以arr1截断在"o"处
//	return 0;
//}

//void my_strcpy(char* dest, char* src) {
//	while (*src != '\0') {
//		*dest = *src;
//		dest++;
//		src++;						//hello的拷贝
//	}
//	*dest = *src;					//\0的拷贝
//}
void my_strcpy(char* dest, char* src) {
	assert(src != NULL);			//断言,防止传参为NULL
	assert(dest != NULL);
	while (*dest++ = *src++) {
		;
	}
}

int main() {
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);			//1.目标空间的起始地址 2.源空间的起始地址
	printf("%s\n", arr1);			//把arr2中"o"之后的"\0"也copy过去，所以arr1截断在"o"处
	return 0;
}