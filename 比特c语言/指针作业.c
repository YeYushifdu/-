#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//杨氏矩阵
//int find_num(int arr[3][3], int r, int c, int k) {
//	int x = 0; 
//	int y = c - 1;
//	while (x < r && y >= 0) {
//		if (arr[x][y] < k) {
//			x++;
//		}
//		else if (arr[x][y] > k) {
//			y--;
//		}
//		else {
//			return 1;
//		}
//	}
//	return 0;
//}

int find_num(int arr[3][3], int* px, int* py, int k) {
	int x = 0;
	int y = *py - 1;
	while (x < *px && y >= 0) {
		if (arr[x][y] < k) {
			x++;
		}
		else if (arr[x][y] > k) {
			y--;
		}
		else {
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main() {
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	int x = 3, y = 3;
	int ret = find_num(arr, &x, &y, k);	//如果找到返回1，找不到返回0
	if (ret == 1) {
		printf("Found.\n");
		printf("位置为(%d,%d)\n", x, y);
	}
	else {
		printf("Not found.\n");
	}
	return 0;
}