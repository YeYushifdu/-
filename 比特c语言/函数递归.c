#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	printf("hehe\n");
//	main();
//	return 0;
//}

//��˳���ӡ���͵�ÿһλ
//���룺1234
//�����1 2 3 4
void print(unsigned int n) {
	if (n > 9) {
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main() {
	unsigned int num = 0;
	scanf("%u", &num);    //1234
	print(num);    //print()�������Դ�ӡ�����������ֵ�ÿһλ
	return 0;
}