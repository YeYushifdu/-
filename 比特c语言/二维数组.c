#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	int arr[][4] = { {1,2},{3,4},{4,5} };
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");	//打印完一行后换行
//	}
//	return 0;
//}
//int main() {
//	int arr[][4] = { {1,2},{3,4},{4,5} };
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
int main() {
	int arr[][4] = { {1,2},{3,4},{4,5} };
	int i = 0;
	int* p = &arr[0][0];
	for (i = 0; i < 12; i++) {
		printf("%d ", *p);
		p++;
	}
	return 0;
}