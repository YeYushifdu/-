#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//strcpy()����
//int main() {
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//memset()����--�ڴ�����
//��arr��ǰ5���ַ���Ϊ'x'
int main() {
	char arr[] = "hello world";
	memset(arr, 'x', 5);
	printf("%s\n", arr);
	return 0;
}




//���������
//ret_type fun_name(para1, *) {
//	statement;    //�����
//}
//ret_type  ��������
//fun_name  ������
//para1  ��������

