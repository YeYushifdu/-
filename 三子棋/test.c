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
	char ret = 0;		//������Ϸ״̬
	while (1) {
		//�������
		Playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//�ж�����Ƿ�����������
		ret = Iswin(board, ROW, COL, N);
		if (ret != 'C') {
			break;		//game over
		}
		//��������
		Computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//�жϵ����Ƿ�����������
		ret = Iswin(board, ROW, COL, N);
		if (ret != 'C') {
			break;		//game over
		}
	}
	if (ret == '*') {
		printf("��һ�ʤ\n");
	}
	else if (ret == '#') {
		printf("���Ի�ʤ\n");
	}
	else {
		printf("ƽ��\n");
	}
	Displayboard(board, ROW, COL, N);
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
			printf("%d������Ϸ\n",N);
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