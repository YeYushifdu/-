#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main() {
//	printf("hehe\n");
//	main();
//	return 0;
//}

//��˳���ӡ���͵�ÿһλ
//���룺1234
//�����1 2 3 4
//void print(unsigned int n) {
//	if (n > 9) {
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main() {
//	unsigned int num = 0;
//	scanf("%u", &num);    //1234
//	print(num);    //print()�������Դ�ӡ�����������ֵ�ÿһλ
//	return 0;
//}

//ջ���
//void test(int n) {
//	if (n < 10000) {
//		test(n + 1);
//	}
//}
//
//int main() {
//	test(1);
//	return 0;
//}

//����������ʱ���������ַ����ĳ���
//int my_strlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
int my_strlen(char* str) {
	if (*str != '\0') {
		return 1 + my_strlen(str + 1);    //ת����һ���ַ��ĵ�ַ
	}
	else {    //��һ���ַ�����'\0'
		return 0;
	}
}

int main() {
	char arr[] = "hello";
	//ģ��ʵ��strlen()����
	printf("%d\n", my_strlen(arr));
	return 0;
}