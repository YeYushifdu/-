#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu() {
	printf("********************\n");
	printf("****** 1.play ******\n");
	printf("****** 0.exit ******\n");
}
void game() {
	//�ö�ά����洢����
	char board[ROW][COL];
	//��ʼ��Ϊ�ո�
	Intboard(board, ROW, COL);		//�������ʼ���Ļ���ӡ���̻�����ʺ�
	//��ӡ���̡��������Ǵ�ӡ���������
	Displayboard(board, ROW, COL);
	while (1) {
		//�������
		Playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//��������
		Computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);

	}
}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("��������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����ѡ��\n");
			break;
		}
	} while (input);
	//���input��0�Ļ��Ͳ��ٴ�ѭ��
	return 0;
}