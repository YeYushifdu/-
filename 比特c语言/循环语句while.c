#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	int ch = getchar();    //��ȡһ���ַ�
//	//printf("%c\n", ch);
//	putchar(ch);    //���һ���ַ�
//	return 0;
//}

//int main() {
//	int ch = 0;
//	//EOF = end of file;
//	//ctrl+z - getchar��ȡ����
//	while ((ch = getchar()) != EOF) {
//		putchar(ch);
//	}
//	return 0;
//}

//int main() {
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);    //���ﲻ��&����Ϊpassword������
//	//�س���ֱ�ӽ����������ַ�������password[]������������"\n"����ch
//	printf("��ȷ�����루Y/N��:>");
//	int ch = getchar();
//	if (ch == 'Y') {
//		printf("ȷ�ϳɹ�\n");
//	}
//	else {
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}

//���������������ڵ�"\n"����
//int main() {
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);    //���ﲻ��&����Ϊpassword������
//	printf("��ȷ�����루Y/N��:>");
//	//��������
//	getchar();    //����"\n"
//	int ch = getchar();
//	if (ch == 'Y') {
//		printf("ȷ�ϳɹ�\n");
//	}
//	else {
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}

//����2��������ջ�����
//int main() {
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);    //���ﲻ��&����Ϊpassword������
//	printf("��ȷ�����루Y/N��:>");
//	//���������еĶ���ַ�
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n') {
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y') {
//		printf("ȷ�ϳɹ�\n");
//	}
//	else {
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}

int main() {
	int ch = 0;
	while ((ch = getchar()) != EOF) {
		if (ch < '0' || ch>'9')
			continue;    //���û�����־�����ѭ��
		putchar(ch);    //��������־ʹ�ӡ
	}
	return 0;
}