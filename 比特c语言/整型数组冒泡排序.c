#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int bubble_sort(int arr[], int sz) {	//ð������
//	int* p = arr;
//	int i = 0, j = 0, count = 0, temp = 0;
//	for (i = 0; i < sz - 1; i++) {		//����
//		for (j = 0; j < sz - 1 - i; j++) {		//һ��ð������Ĺ���
//			if (*p > *(p + 1)) {
//				temp = *p;
//				*p = *(p + 1);
//				*(p + 1) = temp;
//				count++;
//				p++;
//			}
//			else {
//				p++;
//			}
//		}
//		p = p + i + 1 - sz;
//	}
//	return count;
//}
//int bubble_sort(int arr[], int sz) {	//ð������
//	int i = 0, count = 0, temp = 0;
//	for (i = 0; i < sz - 1; i++) {		//����
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) {		//һ��ð������Ĺ���
//			if (arr[j] > arr[j + 1]){
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				count++;
//			}
//		}
//	}
//	return count;
//}
int bubble_sort(int arr[], int sz) {	//ð������
	int i = 0, count = 0, temp = 0;
	for (i = 0; i < sz - 1; i++) {		//����
		int j = 0, flag = 1;
		for (j = 0; j < sz - 1 - i; j++) {		//һ��ð������Ĺ���
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
				count++;
			}
		}
		if (flag == 1) {
			break;
		}
	}
	return count;
}
int main() {
	int arr[] = { 23,1,0,22,7,10,9,2 };	//����Ϊ����
	int count = 0, i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);	//��������Ԫ�ظ���
	count = bubble_sort(arr, sz);
	printf("�������Ϊ��%d\n", count);
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}