#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//ģ��ʵ��strcpy
//strcpy
//int main() {
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);			//1.Ŀ��ռ����ʼ��ַ 2.Դ�ռ����ʼ��ַ
//	printf("%s\n", arr1);		//��arr2��"o"֮���"\0"Ҳcopy��ȥ������arr1�ض���"o"��
//	return 0;
//}

//void my_strcpy(char* dest, char* src) {
//	while (*src != '\0') {
//		*dest = *src;
//		dest++;
//		src++;						//hello�Ŀ���
//	}
//	*dest = *src;					//\0�Ŀ���
//}
//char* my_strcpy(char* dest, const char* src) {	//const�������*����ߣ�����*p����ʾָ��ָ������ݣ��ǲ���ͨ��ָ�����ı��
//	//const�������*�ұߣ����Ըı����ݣ����ܸı�ָ��
//	assert(src != NULL);			//����,��ֹ����ΪNULL
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++) {
//		;
//	}
//	return ret;						//����Ŀ��ռ����ʼ��ַ
//}
//
//int main() {
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	//my_strcpy(arr1, arr2);			//1.Ŀ��ռ����ʼ��ַ 2.Դ�ռ����ʼ��ַ
//	printf("%s\n", my_strcpy(arr1, arr2));			//��arr2��"o"֮���"\0"Ҳcopy��ȥ������arr1�ض���"o"��
//	return 0;
//}


//ģ��ʵ��strlen
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

//�Ľ�
size_t my_strlen(const char* str) {		//�����޷�������
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