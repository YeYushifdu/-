#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��һ�����������в��Ҿ����ĳ������n
//��дint binsearch(int x,int v[],int n);
//���ܣ���v[0]<=v[1]<=v[2]...<=v[n-1]�������в���x
//���ֲ���
//ʱ�临�Ӷ�O(log(n))

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//��arr������������в���k=7
//	int len = sizeof(arr) / sizeof(arr[0]);    //����Ԫ�ظ���
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else {
//			printf("�ҵ���,λ��Ϊ��arr[%d]\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//int binsearch(int x, int v[], int n); 
//	int x = 0;

//���ú���ʵ��
int binary_search(int a[], int k, int s) {
	int left = 0, right = s - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (a[mid] > k) {
			right = mid - 1;
		}
		else if (a[mid] < k) {
			left = mid + 1;
		}
		else {
			return mid;
		}
	}
	return -1;    //�Ҳ���
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//�ҵ��˾ͷ����ҵ���λ�õ��±�
	//�Ҳ����ͷ���-1
	int ret = binary_search(arr, key, sz);
	if (-1 == ret) {
		printf("�Ҳ�����\n");
	}
	else {
		printf("�ҵ��ˣ��±���%d\n", ret);
	}
	return 0;
}
