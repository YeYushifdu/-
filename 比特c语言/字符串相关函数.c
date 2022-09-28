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
//char* my_strcpy(char* dest, const char* src) {	//const如果放在*的左边，修饰*p，表示指针指向的内容，是不能通过指针来改变的
//	//const如果放在*右边，可以改变内容，不能改变指针
//	assert(src != NULL);			//断言,防止传参为NULL
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++) {
//		;
//	}
//	return ret;						//返回目标空间的起始地址
//}
//
//int main() {
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	//my_strcpy(arr1, arr2);			//1.目标空间的起始地址 2.源空间的起始地址
//	printf("%s\n", my_strcpy(arr1, arr2));			//把arr2中"o"之后的"\0"也copy过去，所以arr1截断在"o"处
//	return 0;
//}


//模拟实现strlen
//int my_strlen(char* arr) {
//	int count = 0;
//	while (*arr++ != '\0') {
//		count++;
//	}
//	return count;
//}
//int main() {
//	char arr[] = "hello";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//改进
size_t my_strlen(const char* str) {		//返回无符号整型
	//assert(str != NULL);
	assert(str);
	size_t count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}
int main() {
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}