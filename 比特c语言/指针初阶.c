#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	int a = 10;				//4��byte
//	int* pa = &a;			//ȡ��ַ����a��4���ֽ��е�һ���ֽڵĵ�ַ
//	*pa = 20;
//	return 0;
//}

//ָ�����͵�����
//int main() {
//	int a = 0x11223344;
//	//int* pa = &a;			//����-����-�ڴ�-&a-���Կ���44 33 22 11
//	//*pa = 0;				//���00 00 00 00
//	//char* pc = &a;
//	//*pc = 0;				//���00 33 22 11������Ȩ�޷����仯
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", pc);
//	printf("%p\n", p + 1);
//	printf("%p\n", pc + 1);
//	return 0;
//}

//Ұָ��
//int main() {
//	int* p;				//p��һ���ֲ���ָ��������ֲ�����δ��ʼ����Ĭ�������ֵ
//	*p = 20;			//�Ƿ������ڴ�
//	return 0;
//}
//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++) {
//		*p = i;
//		p++;
//	}
//	return 0;
//}
//int* test() {
//	int a = 10;
//	return &a;
//}
//int main() {
//	int* p = test();
//	*p = 20;
//	return 0;
//}//����a�ĵ�ַΪ0x0012ff40�����˳�test����ʱ�ÿռ�ͱ��ͷ���
////���ǿ�и�0x0012ff40�ռ丳ֵ���򱨴�