#define _CRT_SECURE_NO_WARNINGS
#include<stidio.h>
//�ж��Ǵ�˷�����С�˷�
int main() {
	int a = 1;				//С�ˣ�01 00 00 00����ˣ�00 00 00 01
	//ȡ��һ���ֽڿ���ʲô
	char* p = (char*)&a;	//int*
	if (*p == 1) {
		printf("С��\n");
	}
	else {
		printf("���\n");
	}
	return 0;
}