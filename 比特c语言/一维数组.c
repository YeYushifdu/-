#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	//int n = 8;
//	//int arr[n];
//	//return 0;
//	int arr[10] = { 0 };	//��ʼ����һ��Ϊ0��������Ĭ��Ϊ0
//	arr[4] = 5;		//[]�±����ò�����
//}
//�洢λ��
//%pר��������ӡ��ַ(ʮ������)
int main() {
	//int arr[10] = { 0 };
	//int i = 0;
	//for (i = 0; i < 10; i++) {
	//	printf("&arr[%d]=%p\n", i, &arr[i]);
	//}
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;	//��������������Ԫ�صĵ�ַ
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("%d ", *p);
		p++;
	}
	return 0;
}