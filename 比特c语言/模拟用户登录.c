#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//ģ���û���¼������ֻ�ܵ�¼����
//ֻ����������������
//���������ȷ����ʾ��½�ɹ�
//������ξ�����������˳�����

int main() {
	int i = 0;
	//������ȷ�������ַ���"123456"
	char password[20] = { 0 };
	for (i = 0; i < 3; i++) {
		printf("���������룺>");
		scanf("%s",password );
		//if (password == "123456")    //err-�����ַ����Ƚϣ�����ʹ��"=="��Ӧ��ʹ��strcmp
		if (strcmp(password, "123456") == 0) {
			printf("��½�ɹ�\n");
			break;
		}
		else {
			printf("��������������룡\n");
		}
	}
	//����ȫ��
	if (i == 3) {
		printf("��������������˳�����\n");
	}
	return 0;
}