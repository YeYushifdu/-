#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��������
//�����������͵ĵط�д����void
//��ʾ��������������κ�ֵ��Ҳ����Ҫ����
//void Swap(int x, int y) {
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}    //�������Ϊx��y�ֿ����˿ռ䣬����x��y��ֵ
//
//int main() {
//	int a = 10, b = 20;
//	printf("����ǰa=%d,b=%d\n", a, b);
//	Swap(a, b);    //a��b��x��y�����Զ����ռ�
//	printf("������a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main() {
//	int a = 10;    //4���ֽڵĿռ�
//	int* pa = &a;    //pa����һ��ָ�����
//	*pa = 20;    //����ͨ��pa�ҵ�a
//	printf("%d\n", a);
//	return 0;
//}

void Swap(int* pa, int* pb) {
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

int main() {
	int a = 10, b = 20;
	printf("����ǰa=%d,b=%d\n", a, b);
	Swap(&a, &b);
	printf("������a=%d,b=%d\n", a, b);
	return 0;
}