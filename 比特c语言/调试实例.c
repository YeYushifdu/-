#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��׳˺ͣ����������
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
//}//���Է���retֵδ��1

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

//ʵ��2
//int main() {
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++) {
//		arr[i] = 0;
//		printf("a");
//	}
//	return 0;
//}

//ʵ��3
//����һ���������飬ʵ�ֺ���
//�����������е������˳��
//ʹ�����������е�����λ�������ǰ�벿�֣�ż��λ�ں�벿��
void move(int arr[], int sz) {
	//��ǰ������ż�����Ӻ���ǰ��������Ȼ�󽻻�
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
