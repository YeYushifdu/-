#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void Intboard(char board[ROWS][COLS], int rows, int cols, char set) {		//初始化棋盘
	int i = 0, j = 0;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			board[i][j] = set;
		}
	}
}

void Displayboard(char board[ROWS][COLS], int row, int col) {		//打印棋盘
	int i = 0, j = 0;
	printf("----------------------\n");
	for (i = 1; i <= row; i++) {
		for (j = 1; j <= col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");		//打印完一行之后换行
	}
	printf("----------------------\n");
}