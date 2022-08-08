#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int bubble_sort(int arr[], int sz) {	//冒泡排序
	int* p = arr;
	int i = 0, j = 0, count = 0, temp = 0;
	for (i = 0; i < sz - 1; i++) {		//趟数
		for (j = 0; j < sz - 1 - i; j++) {		//一趟冒泡排序的过程
			if (*p > *(p + 1)) {
				temp = *p;
				*p = *(p + 1);
				*(p + 1) = temp;
				count++;
				p++;
			}
			else {
				p++;
			}
		}
		p = p + i + 1 - sz;
	}
	return count;
}
int main() {
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };	//排序为升序
	int count = 0, i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);	//计算数组元素个数
	count = bubble_sort(arr, sz);
	printf("排序次数为：%d\n", count);
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}