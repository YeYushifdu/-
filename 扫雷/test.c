#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu() {
	printf("****************************\n");
	printf("********** 1.play *********\n");
	printf("********** 0.exit **********\n");
	printf("****************************\n");
}

void game() {
	char mine[ROWS][COLS];		//隐式数组，存放布置好的雷的信息
	char show[ROWS][COLS];		//显式数组，存放排查出雷的信息
	//初始化棋盘
	Intboard(mine, ROWS, COLS, '0');
	Intboard(show, ROWS, COLS, '*');
	//打印棋盘//只打印中间9*9
	//Displayboard(mine, ROW, COL);		//仅供测试，实际游戏无需打印
	Displayboard(show, ROW, COL);
	//布置雷
	Setmine(mine, ROW, COL);
	//Displayboard(mine, ROW, COL);		//仅供测试
	//排查雷
	Findmine(mine, show, ROW, COL);
}

int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch(input) {
			case 1:
				printf("扫雷游戏\n");
				game();		//扫雷游戏
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，重新选择\n");
				break;
		}
	} while (input);
	return 0;
}