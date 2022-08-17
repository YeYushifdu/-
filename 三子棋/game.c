#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

//函数的实现

void Intboard(char board[ROW][COL], int row, int col) {		//初始化棋盘
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}

//void Displayboard(char board[ROW][COL], int row, int col) {		//打印棋盘
//	int i = 0;
//	for (i = 0; i < row; i++) {
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		if (i < row - 1) {
//			printf("---|---|---|\n");
//		}
//		//数据+横线+数据+横线+数据
//	}
//}		//只适用于3列

void Displayboard(char board[ROW][COL], int row, int col) {		//打印棋盘
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

void Playermove(char board[ROW][COL], int row, int col) {		//玩家下棋
	int x = 0, y = 0;
	printf("玩家回合：>\n");
	while (1) {
		printf("请输入坐标：>");
		scanf("%d %d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			//下棋
			//判断坐标是否被占用
			if (board[x - 1][y - 1] == ' ') {		//未被占用
				board[x - 1][y - 1] = '*';		//玩家下'*'
				break;
			}
			else {
				printf("这个位置已经有棋子了哦！请重新输入：>\n");
			}
		}
		else {
			printf("非法坐标，请重新输入：>\n");
		}
	}
}

void Computermove(char board[ROW][COL], int row, int col) {		//电脑下棋
	printf("电脑回合：>\n");
	while (1) {
		int x = rand() % row;
		int y = rand() % col;		//生成的随机数一定合法
		//判断坐标是否被占用
		if (board[x][y] == ' ') {		//未被占用
			board[x][y] = '#';		//电脑下'#'
			break;
		}
	}
}


//char Iswin(char board[ROW][COL], int row, int col) {		//判断游戏状态
//	int i = 0;
//	for (i = 0; i < row; i++) {		//判断三行
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
//			return board[i][0];		//无需判断连成三行的是哪个符号
//		}
//	}
//	for (i = 0; i < col; i++) {		//判断三列
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
//			return board[0][i];
//		}
//	}
//	//判断对角线
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
//		return board[0][0];
//	}
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
//		return board[0][2];
//	}
//	//判断平局,棋盘满了返回1，不满返回0
//	int ret = Isfull(board, row, col);
//	if (ret == 1) {
//		return 'Q';
//	}
//	return 'C';		//游戏继续
//}

//char Iswin(char board[ROW][COL], int row, int col) {		//判断游戏状态
//	int i = 0, j = 0;
//	for (i = 0; i < row; i++) {		//判断三行
//		for (j = 0; j < col - 2; j++) {
//			if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j] != ' ') {
//				return board[i][j];		//无需判断连成三行的是哪个符号
//			}
//		}
//	}
//	for (i = 0; i < row - 2; i++) {		//判断三列
//		for (j = 0; j < col; j++) {
//			if (board[i][j] == board[i + 1][j] && board[i][j + 1] == board[i][j + 2] && board[i][j] != ' ') {
//				return board[i][j];
//			}
//		}
//	}
//	//判断对角线
//	for (i = 0; i < row - 2; i++) {
//		for (j = 0; j < col - 2; j++) {
//			if (board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2] && board[i][j] != ' ') {
//				return board[i][j];
//			}
//		}
//	}
//	for (i = 2; i < row ; i++) {
//		for (j = 0; j < col - 2; j++) {
//			if (board[i][j] == board[i - 1][j + 1] && board[i - 1][j + 1] == board[i - 2][j + 2] && board[i][j] != ' ') {
//				return board[i][j];
//			}
//		}
//	}
//	//判断平局,棋盘满了返回1，不满返回0
//	int ret = Isfull(board, row, col);
//	if (ret == 1) {
//		return 'Q';
//	}
//	return 'C';		//游戏继续
//}

int Isfull(char board[ROW][COL], int row, int col) {
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return 0;		//棋盘没满
			}
		}
	}
	return 1;		//棋盘满了
}

char Iswin(char board[ROW][COL], int row, int col,int n) {		//判断游戏状态
	int i = 0, j = 0, k = 0, flag = 1;
	for (i = 0; i < row; i++) {		
		for (j = 0; j < col + 1 - n; j++) {
			flag = 1;
			for (k = 0; k < n - 1; k++) {
				if (board[i][j + k] != board[i][j + k + 1]) {
					flag = 0;
				}
			}
			if (flag == 1 && board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}
	for (i = 0; i < row + 1 - n; i++) {		
		for (j = 0; j < col; j++) {
			flag = 1;
			for (k = 0; k < n - 1; k++) {
				if (board[i + k][j] != board[i + k + 1][j]) {
					flag = 0;
				}
			}
			if (flag == 1 && board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}
	//判断对角线
	for (i = 0; i < row + 1 - n; i++) {
		for (j = 0; j < col + 1 - n; j++) {
			flag = 1;
			for (k = 0; k < n - 1; k++) {
				if (board[i + k][j + k] != board[i + k + 1][j + k + 1]) {
					flag = 0;
				}
			}
			if (flag == 1 && board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}
	for (i = 2; i < row; i++) {
		for (j = 0; j < col + 1 - n; j++) {
			flag = 1;
			for (k = 0; k < n - 1; k++) {
				if (board[i - k][j + k] != board[i - k - 1][j + k + 1]) {
					flag = 0;
				}
			}
			if (flag == 1 && board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}
	//判断平局,棋盘满了返回1，不满返回0
	int ret = Isfull(board, ROW, COL);
	if (ret == 1) {
		return 'Q';
	}
	return 'C';		//游戏继续
}

