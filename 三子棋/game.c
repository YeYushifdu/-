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
void Displayboard(char board[ROW][COL], int row, int col) {		//��ӡ����

}