#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu() {
	printf("********************\n");
	printf("****** 1.play ******\n");
	printf("****** 0.exit ******\n");
}
void game() {
	//用二维数组存储数据
	char board[ROW][COL];
	//初始化为空格
	Intboard(board, ROW, COL);		//如果不初始化的话打印棋盘会出现问号
	//打印棋盘——本质是打印数组的内容
	Displayboard(board, ROW, COL);
	char ret = 0;		//接收游戏状态
	while (1) {
		//玩家下棋
		Playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断玩家是否先连成三子
		ret = Iswin(board, ROW, COL, N);
		if (ret != 'C') {
			break;		//game over
		}
		//电脑下棋
		Computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断电脑是否先连成三子
		ret = Iswin(board, ROW, COL, N);
		if (ret != 'C') {
			break;		//game over
		}
	}
	if (ret == '*') {
		printf("玩家获胜\n");
	}
	else if (ret == '#') {
		printf("电脑获胜\n");
	}
	else {
		printf("平局\n");
	}
	Displayboard(board, ROW, COL, N);
}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("%d子棋游戏\n",N);
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("重新选择\n");
			break;
		}
	} while (input);
	//如果input是0的话就不再次循环
	return 0;
}