#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��һ�����������в��Ҿ����ĳ������n
//��дint binsearch(int x,int v[],int n);
//���ܣ���v[0]<=v[1]<=v[2]...<=v[n-1]�������в���x
//���ֲ���
//ʱ�临�Ӷ�O(log(n))

int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//��arr������������в���k=7
	int len = sizeof(arr) / sizeof(arr[0]);    //����Ԫ�ظ���
	int left = 0;
	int right = len - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k) {
			left = mid + 1;
		}
		else if (arr[mid] > k) {
			right = mid - 1;
		}
		else {
			printf("�ҵ���,λ��Ϊ��arr[%d]\n", mid);
			break;
		}
	}
	if (left > right) {
		printf("�Ҳ���\n");
	}
	return 0;
}
int binsearch(int x, int v[], int n); 
	int x = 0;

