#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//在一个有序数组中查找具体的某个数字n
//编写int binsearch(int x,int v[],int n);
//功能：在v[0]<=v[1]<=v[2]...<=v[n-1]的数组中查找x
//二分查找
//时间复杂度O(log(n))

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//在arr这个有序数组中查找k=7
//	int len = sizeof(arr) / sizeof(arr[0]);    //数组元素个数
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
//			printf("找到了,位置为：arr[%d]\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("找不到\n");
//	}
//	return 0;
//}
//int binsearch(int x, int v[], int n); 
//	int x = 0;

//调用函数实现
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
	return -1;    //找不到
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//找到了就返回找到的位置的下标
	//找不到就返回-1
	int ret = binary_search(arr, key, sz);
	if (-1 == ret) {
		printf("找不到！\n");
	}
	else {
		printf("找到了，下标是%d\n", ret);
	}
	return 0;
}
