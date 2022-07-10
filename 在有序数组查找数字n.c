#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//在一个有序数组中查找具体的某个数字n
//编写int binsearch(int x,int v[],int n);
//功能：在v[0]<=v[1]<=v[2]...<=v[n-1]的数组中查找x
//二分查找
//时间复杂度O(log(n))

int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//在arr这个有序数组中查找k=7
	int len = sizeof(arr) / sizeof(arr[0]);    //数组元素个数
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
			printf("找到了,位置为：arr[%d]\n", mid);
			break;
		}
	}
	if (left > right) {
		printf("找不到\n");
	}
	return 0;
}
int binsearch(int x, int v[], int n); 
	int x = 0;

