#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	flag:
	printf("hehe\n");
	printf("haha\n");
	goto flag;
	return 0;
}

//�ػ�����
//ֻҪ�������������Ծ���60s�ڹػ���������룺stop  ��ȡ���ػ�
//shutdown -s -t 60  ִ��60s�ػ�
//shutdown -a  ȡ���ػ�
int main() {
	//system()--ִ��ϵͳ����
	system("shutdown -s -t 60");
	printf("���Խ���60s�ڹػ������룺stop��ȡ���ػ�");
	return 0;
}