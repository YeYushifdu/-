#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//��������Ϸ
//�Զ�����һ��1-100֮��������
//�����֣��¶��˾͹�ϲ���´��˾͸�����´��˻��ǲ�С�ˣ�ֱ���¶�
//����һֱ�棬ֱ���˳���Ϸ

void menu() {
	printf("****************************\n");
	printf("********** 1.play **********\n");
	printf("********** 0.exit **********\n");
	printf("****************************\n");
}
void game() {    //��������Ϸ��ʵ��
	//���������   
	//rand����������һ��0-32767֮�������
	//rand�ڱ�����ǰ���Ѿ����ɺ��������

	int ret = rand()%100+1;    //%100��������0-99��Ȼ��+1����Χ����1-100
	//������
}
int main() {
	int input = 0;
	//ʱ��-ʱ���
	srand((unsigned int)time(NULL));
	do
	{
		menu();    //��ӡ�˵�
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��Чѡ��\n");
			break;
		}
	} while (input);
	return 0;
}