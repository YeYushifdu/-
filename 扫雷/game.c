#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void Intboard(char board[ROWS][COLS], int rows, int cols, char set) {		//��ʼ������
	int i = 0, j = 0;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			board[i][j] = set;
		}
	}
}

void Displayboard(char board[ROWS][COLS], int row, int col) {		//��ӡ����
	int i = 0, j = 0;
	printf("----------------------\n");
	for (j = 0; j <= col; j++) {
		printf("%d ", j);		//��ӡ�к�
	}
	printf("\n");
	for (i = 1; i <= row; i++) {
		printf("%d ", i);		//��ӡ�к�
		for (j = 1; j <= col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");		//��ӡ��һ��֮����
	}
	printf("----------------------\n");
}

void Setmine(char mine[ROWS][COLS], int row, int col) {		//������
	//����10����
	int count = N;
	while (count) {
		//��������±�
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0') {		//�ж��Ƿ��Ѿ�����
			mine[x][y] = '1';
			count--;
		}
	}
}

//static
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ�����ֻ���ڴ�Դ�ļ�ʹ��
static int get_mine_count(char mine[ROWS][COLS], int x, int y) {		//ͳ����Χ�׵ĸ���
	int count = 0, i = 0, j = 0;
	for (i = x - 1; i < x + 2; i++) {
		for (j = y - 1; j < y + 2; j++) {
			if (mine[i][j] == '1') {
				count++;		//�Լ��������ף�count����
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

int Judgemine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int win) {		//�ж���Χ8�ӿɲ�������
	int  count = get_mine_count(mine, x, y);
	if (count == 0) {		//��Χû����
		show[x][y] = '0';
		Judgemine(mine, show, x, y + 1, win);
	}
	else {		//��Χ����
		show[x][y] = count + '0';
		win++;
	}
	return win;
}


void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {		//�Ų���
	//1.�����Ų������
	//2.������괦�ǲ�����
	//  a.���ס������ź�game over
	//  b.�����ס���ͳ��������Χ�м����ף�չʾ��Ŀ��show����Ϸ����
	int x = 0, y = 0, i = 0, j = 0, win = 0;
	while (win < row * col - N) {
		printf("�������Ų����꣺>");
		scanf("%d%d", &x, &y);		//xȡ1��9��yȡ1��9
		//�ж������Ƿ�Ϸ�
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mine[x][y] == '1') {		//����
				printf("game over!\n");
				Displayboard(mine, row, col);
				break;
			}
			//else {		//������
			//	int count = get_mine_count(mine, x, y);
			//	show[x][y] = count + '0';		//��������һ���ַ�
			//	//��ʾ�Ų������Ϣ
			//	Displayboard(show, ROW, COL);
			//	//�ж����Ƿ��Ų���
			//	win++;
			//}
			else {		//�����ף��ж���Χ�ɲ�������
				win = Judgemine(mine, show, x, y, win);
				Displayboard(show, ROW, COL);
			}
		}
		else {
			printf("���겻�Ϸ������������룡\n");
		}
	}
	if (win == row * col - N) {		//һֱ����Ϸ������û�в���
		printf("��Ϸʤ��\n");
	}
}