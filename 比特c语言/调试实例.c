#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//求阶乘和，不考虑溢出
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0, j = 0;
//	int ret = 1;
//	int sum = 0;
//	for(j = 1; j <= n; j++) {
//		for (i = 1; i <= j; i++) {
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}//调试发现ret值未置1

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0, j = 0;
//	int ret;
//	int sum = 0;
//	for (j = 1; j <= n; j++) {
//		ret = 1;
//		for (i = 1; i <= j; i++) {
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//实例2
//int main() {
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++) {
//		arr[i] = 0;
//		printf("a");
//	}
//	return 0;
//}

//实例3
//输入一个整数数组，实现函数
//调整该数组中的数组的顺序
//使得数组中所有的奇数位于数组的前半部分，偶数位于后半部分
void move(int arr[], int sz) {
	//从前往后找偶数，从后往前找奇数，然后交换
	int left = 0;
	int right = sz - 1;
	while (left < right) {
		while ((left < right) && (arr[left] % 2 == 1)) {
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 0)) {
			right--;
		}
		if (left < right) {
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
void print(int arr[], int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr, sz);
	return 0;
}
