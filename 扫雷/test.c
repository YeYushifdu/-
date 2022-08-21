#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu() {
	printf("****************************\n");
	printf("********** 1.play *********\n");
	printf("********** 0.exit **********\n");
	printf("****************************\n");
}

void game() {
	char mine[ROWS][COLS];		//��ʽ���飬��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS];		//��ʽ���飬����Ų���׵���Ϣ
	//��ʼ������
	Intboard(mine, ROWS, COLS, '0');
	Intboard(show, ROWS, COLS, '*');
	//��ӡ����//ֻ��ӡ�м�9*9
	//Displayboard(mine, ROW, COL);		//�������ԣ�ʵ����Ϸ�����ӡ
	Displayboard(show, ROW, COL);
	//������
	Setmine(mine, ROW, COL);
	//Displayboard(mine, ROW, COL);		//��������
	//�Ų���
	Findmine(mine, show, ROW, COL);
}

int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch(input) {
			case 1:
				printf("ɨ����Ϸ\n");
				game();		//ɨ����Ϸ
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ���������ѡ��\n");
				break;
		}
	} while (input);
	return 0;
}