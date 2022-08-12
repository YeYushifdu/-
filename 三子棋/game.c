#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

//������ʵ��

void Intboard(char board[ROW][COL], int row, int col) {		//��ʼ������
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}

//void Displayboard(char board[ROW][COL], int row, int col) {		//��ӡ����
//	int i = 0;
//	for (i = 0; i < row; i++) {
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		if (i < row - 1) {
//			printf("---|---|---|\n");
//		}
//		//����+����+����+����+����
//	}
//}		//ֻ������3��

void Displayboard(char board[ROW][COL], int row, int col) {		//��ӡ����
	int i = 0;
	for (i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1) {
			//printf("---|---|---|\n");
			int j = 0;
			for (j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void Playermove(char board[ROW][COL], int row, int col) {		//�������
	int x = 0, y = 0;
	printf("��һغϣ�>\n");
	while (1) {
		printf("���������꣺>");
		scanf("%d %d", &x, &y);
		//�ж�����Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			//����
			//�ж������Ƿ�ռ��
			if (board[x - 1][y - 1] == ' ') {		//δ��ռ��
				board[x - 1][y - 1] = '*';		//�����'*'
				break;
			}
			else {
				printf("���λ���Ѿ���������Ŷ�����������룺>\n");
			}
		}
		else {
			printf("�Ƿ����꣬���������룺>\n");
		}
	}
}

void Computermove(char board[ROW][COL], int row, int col) {		//��������
	printf("���Իغϣ�>\n");
	while (1) {
		int x = rand() % row;
		int y = rand() % col;		//���ɵ������һ���Ϸ�
		//�ж������Ƿ�ռ��
		if (board[x][y] == ' ') {		//δ��ռ��
			board[x][y] = '#';		//������'#'
			break;
		}
	}
}