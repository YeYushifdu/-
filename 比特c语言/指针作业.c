#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���Ͼ���
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

//int find_num(int arr[3][3], int* px, int* py, int k) {
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y >= 0) {
//		if (arr[x][y] < k) {
//			x++;
//		}
//		else if (arr[x][y] > k) {
//			y--;
//		}
//		else {
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main() {
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int x = 3, y = 3;
//	int ret = find_num(arr, &x, &y, k);	//����ҵ�����1���Ҳ�������0
//	if (ret == 1) {
//		printf("Found.\n");
//		printf("λ��Ϊ(%d,%d)\n", x, y);
//	}
//	else {
//		printf("Not found.\n");
//	}
//	return 0;
//}

//�����ַ���
//void string_left_rotate(char* str, int k) {
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++) {
//		//ÿ������һ���ַ�
//		char tmp = *str;
//		//����n-1���ַ���ǰ�ƶ�
//		int j = 0;
//		for (j = 0; j < n - 1; j++) {
//			*(str + j) = *(str + j + 1);
//		}
//		//tmp�������
//		*(str + n - 1) = tmp;
//	}
//}
//
//int main() {
//	char arr[10] = "ABCDEF";
//	int k = 2;
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//��������������ת��
//1.�������
//2.�ұ�����
//3.��������
//#include<assert.h>
//void reverse(char* left, char* right) {	//����
//	assert(left);
//	assert(right);
//	while (left < right) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void string_left_rotate(char* str, int k) {
//	int n = strlen(str);
//	reverse(str, str + k - 1);
//	reverse(str + k, str + n - 1);
//	reverse(str, str + n - 1);
//}
//int main() {
//	char arr[10] = "ABCDEF";
//	int k = 2;
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//�ַ�����ת���
//int is_string_rotate(char* str1, char* str2) {
//	int i = 0;
//	int n = strlen(str1);
//	for (i = 0; i < n; i++) {
//		//ÿ������һ���ַ�
//		char tmp = *str1;
//		//����n-1���ַ���ǰ�ƶ�
//		int j = 0;
//		for (j = 0; j < n - 1; j++) {
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		//tmp�������
//		*(str1 + n - 1) = tmp;
//		if (strcmp(str1, str2) == 0) {
//			return 1;
//		}
//	}
//	return 0;
//}
//int main() {
//	char arr1[] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = is_string_rotate(arr1, arr2);
//	if (ret == 1) {
//		printf("yes\n");
//	}
//	else {
//		printf("no\n");
//	}
//	return 0; 
//}

//������
int is_string_rotate(char* str1, char* str2) {
	//�ж��ַ��������Ƿ����
	if (strlen(str1) != strlen(str2)) {
		return 0;
	}
	//1��str1�ַ�����׷��һ��str1
	//AABCDAABCD
	int len = strlen(str1);
	strncat(str1, str1, len);
	//2���ж�str2�Ƿ�Ϊ�Ӵ�
	char* ret = strstr(str1, str2);
	return ret != NULL;
	/*if (ret == NULL) {
		return 0;
	}
	else {
		return 1;
	}*/
}
int main() {
	char arr1[20] = "AABCD";
	char arr2[] = "BCDAA";
	int ret = is_string_rotate(arr1, arr2);
	if (ret == 1) {
		printf("yes\n");
	}
	else {
		printf("no\n");
	}
	return 0;
}