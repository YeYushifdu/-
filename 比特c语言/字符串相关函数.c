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
void my_strcpy(char* dest, char* src) {
	assert(src != NULL);			//����,��ֹ����ΪNULL
	assert(dest != NULL);
	while (*dest++ = *src++) {
		;
	}
}

int main() {
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);			//1.Ŀ��ռ����ʼ��ַ 2.Դ�ռ����ʼ��ַ
	printf("%s\n", arr1);			//��arr2��"o"֮���"\0"Ҳcopy��ȥ������arr1�ض���"o"��
	return 0;
}