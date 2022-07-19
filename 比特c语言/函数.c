#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//strcpy()函数
//int main() {
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//memset()函数--内存设置
//把arr中前5个字符设为'x'
int main() {
	char arr[] = "hello world";
	memset(arr, 'x', 5);
	printf("%s\n", arr);
	return 0;
}




//函数的组成
//ret_type fun_name(para1, *) {
//	statement;    //语句项
//}
//ret_type  返回类型
//fun_name  函数名
//para1  函数参数

