#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
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
	Intboard(board, ROW, COL);
	//打印棋盘——本质是打印数组的内容
	Displayboard()
}
int main() {
	int input = 0;
	do {
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("三子棋游戏\n");
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