#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//float a = 9 / 2.0;
	//printf("%f\n", a);
	//int a = 2;
	//int b = a << 1;    //a����1λ
	//a += 5;    //a=a+5
	//a -= 3;    //a=a-3
	//printf("%d\n", b);
	//int a = 10;    //0��ʾ�٣���0������
	//printf("%d\n", !a);
	//if (a)
	//{
	//	//���aΪ�棬ִ��
	//}
	//if (!a) {
	//	//���aΪ�٣�ִ��
	//}
	//sizeof�ǲ��������Ǻ��������ſ�ʡ��
	//int a = 10;
	////�������ͻ��߱�����С
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);
	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));    //�������������ܴ�С����λ���ֽ�
	////10*4�ֽ�
	//int sz = sizeof(arr) / sizeof(arr[0]);    //��������Ԫ�ظ���
	//printf("%d\n", sz);
	//int a = 0;
	//printf("%d\n", ~a);    //��λȡ��
	//int a = 10;
	//int b = ++a;    //ǰ��++����++����ʹ��
	//printf("%d\n", b);
	//printf("%d\n", a);
	int a = 10;
	int b = a++;    //����++��ֱ��ʹ�ã���++
	printf("%d\n", b);
	printf("%d\n", a);
	return 0;
}