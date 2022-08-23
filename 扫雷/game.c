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
	for (j = 0; j <= col; j++) {
		printf("%d ", j);		//打印列号
	}
	printf("\n");
	for (i = 1; i <= row; i++) {
		printf("%d ", i);		//打印行号
		for (j = 1; j <= col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");		//打印完一行之后换行
	}
	printf("----------------------\n");
}

void Setmine(char mine[ROWS][COLS], int row, int col) {		//布置雷
	//布置10个雷
	int count = N;
	while (count) {
		//生成随机下标
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0') {		//判断是否已经有雷
			mine[x][y] = '1';
			count--;
		}
	}
}

//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数，只能在此源文件使用
static int get_mine_count(char mine[ROWS][COLS], int x, int y) {		//统计周围雷的个数
	int count = 0, i = 0, j = 0;
	for (i = x - 1; i < x + 2; i++) {
		for (j = y - 1; j < y + 2; j++) {
			if (mine[i][j] == '1') {
				count++;		//自己本身不是雷，count不变
			}
		}
	}
	return count;
}

//int get_mine_count(char mine[ROWS][COLS], int x, int y) {
//	return mine[x - 1][y - 1] +
//		mine[x - 1][y] +
//		mine[x - 1][y + 1] +
//		mine[x][y - 1] +
//		mine[x][y + 1] +
//		mine[x + 1][y - 1] +
//		mine[x + 1][y] +
//		mine[x + 1][y + 1] - 8 * '0';
//}

int Judgemine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int win) {		//判断周围8子可不可以清
	int  count = get_mine_count(mine, x, y);
	if (count == 0) {		//周围没有雷
		show[x][y] = '0';
		Judgemine(mine, show, x, y + 1, win);
	}
	else {		//周围有雷
		show[x][y] = count + '0';
		win++;
	}
	return win;
}


void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {		//排查雷
	//1.输入排查的坐标
	//2.检查坐标处是不是雷
	//  a.是雷——很遗憾game over
	//  b.不是雷——统计坐标周围有几个雷，展示数目到show，游戏继续
	int x = 0, y = 0, i = 0, j = 0, win = 0;
	while (win < row * col - N) {
		printf("请输入排查坐标：>");
		scanf("%d%d", &x, &y);		//x取1到9，y取1到9
		//判断坐标是否合法
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mine[x][y] == '1') {		//是雷
				printf("game over!\n");
				Displayboard(mine, row, col);
				break;
			}
			//else {		//不是雷
			//	int count = get_mine_count(mine, x, y);
			//	show[x][y] = count + '0';		//这样就是一个字符
			//	//显示排查出的信息
			//	Displayboard(show, ROW, COL);
			//	//判断雷是否排查完
			//	win++;
			//}
			else {		//不是雷，判断周围可不可以清
				win = Judgemine(mine, show, x, y, win);
				Displayboard(show, ROW, COL);
			}
		}
		else {
			printf("坐标不合法，请重新输入！\n");
		}
	}
	if (win == row * col - N) {		//一直到游戏结束都没有踩雷
		printf("游戏胜利\n");
	}
}