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

//void Displayboard(char board[ROW][COL], int row, int col) {		//��ӡ����//������
//	int i = 0;
//	for (i = 0; i < row; i++) {
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		if (i < row - 1) {
//			printf("---|---|---|\n");
//		}
//		//����+����+����+����+����
//	}
//}		//ֻ������3��

void Displayboard(char board[ROW][COL], int row, int col) {		//��ӡ����//������
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

//void Computermove(char board[ROW][COL], int row, int col) {		//��������//������//����
//	printf("���Իغϣ�>\n");
//	while (1) {
//		int x = rand() % row;
//		int y = rand() % col;		//���ɵ������һ���Ϸ�
//		//�ж������Ƿ�ռ��
//		if (board[x][y] == ' ') {		//δ��ռ��
//			board[x][y] = '#';		//������'#'
//			break;
//		}
//	}
//}

//void Computermove(char board[ROW][COL], int row, int col) {		//��������//������//����
//	printf("���Իغϣ�>\n");
//	while (1) {
//		int i = 0, j = 0;
//		for (i = 0; i < row; i++) {		//����ҳ��л��Լ�������
//			if (board[i][0] == board[i][1] && board[i][0] != ' ' && board[i][2] == ' ') {
//				board[i][2] = '#';
//				return;
//			}
//			else if (board[i][0] == board[i][2] && board[i][0] != ' ' && board[i][1] == ' ') {
//				board[i][1] = '#';
//				return;
//			}
//			else if (board[i][1] == board[i][2] && board[i][1] != ' ' && board[i][0] == ' ') {
//				board[i][0] = '#';
//				return;
//			}
//		}
//		for (j = 0; j < col; j++) {		//����ҳ��л��Լ�������
//			if (board[0][j] == board[1][j] && board[0][j] != ' ' && board[2][j] == ' ') {
//				board[2][j] = '#';
//				return;
//			}
//			else if (board[0][j] == board[2][j] && board[0][j] != ' ' && board[1][j] == ' ') {
//				board[1][j] = '#';
//				return;
//			}
//			else if (board[1][j] == board[2][j] && board[1][j] != ' ' && board[0][j] == ' ') {
//				board[0][j] = '#';
//				return;
//			}
//		}
//		if (board[0][0] == board[1][1] && board[0][0] != ' ' && board[2][2] == ' ') {
//			board[2][2] = '#';
//			return;
//		}
//		if (board[0][0] == board[2][2] && board[0][0] != ' ' && board[1][1] == ' ') {
//			board[1][1] = '#';
//			return;
//		}
//		if (board[1][1] == board[2][2] && board[1][1] != ' ' && board[0][0] == ' ') {
//			board[0][0] = '#';
//			return;
//		}
//		if (board[0][2] == board[1][1] && board[0][2] != ' ' && board[2][0] == ' ') {
//			board[2][0] = '#';
//			return;
//		}
//		if (board[0][2] == board[2][0] && board[0][2] != ' ' && board[1][1] == ' ') {
//			board[1][1] = '#';
//			return;
//		}
//		if (board[1][1] == board[2][0] && board[1][1] != ' ' && board[0][2] == ' ') {
//			board[0][2] = '#';
//			return;
//		}
//		while (1) {
//			int x = rand() % row;
//			int y = rand() % col;		//���ɵ������һ���Ϸ�
//					//�ж������Ƿ�ռ��
//			if (board[x][y] == ' ') {		//δ��ռ��
//				board[x][y] = '#';		//������'#'
//				return;
//			}
//		}
//	}
//}

void Computermove(char board[ROW][COL], int row, int col) {		//��������//�����������
	//1.��������(�����)
	//2.#+��������(���ұ�)
	//3.*+' '+*(�����)
	printf("���Իغϣ�>\n");
	while (1) {
		int i = 0, j = 0;
		for (i = 0; i < row; i++) {		//����ҳ��л��Լ�������
			for (j = 1; j < col - 2; j++) {
				if (board[i][j] == board[i][j + 1] && board[i][j] != ' ' && board[i][j - 1] == ' ') {
					board[i][j - 1] = '#';
					return;
				}
				else if (board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2] && board[i][j] != ' ') {
					board[i][j + 3] = '#';
					return;
				}
				else if (board[i][j] == board[i][j + 2] && board[i][j] != ' ') {
					board[i][j + 1] = '#';
					return;
				}
			}
		}
		for (i = 1; i < row - 2; i++) {
			for (j = 0; j < col; j++) {
				if (board[i][j] == board[i + 1][j] && board[i][j] != ' ' && board[i - 1][j] == ' ') {
					board[i - 1][j] = '#';
					return;
				}
				else if (board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j] && board[i][j] != ' ') {
					board[i + 3][j] = '#';
					return;
				}
				else if (board[i][j] == board[i + 2][j] && board[i][j] != ' ') {
					board[i + 1][j] = '#';
					return;
				}
			}
		}
		for (i = 1; i < row - 2; i++) {
			for (j = 1; j < col - 2; j++) {
				if (board[i][j] == board[i + 1][j + 1] && board[i][j] != ' ' && board[i - 1][j - 1] == ' ') {
					board[i - 1][j - 1] = '#';
					return;
				}
				else if (board[i][j] == board[i + 1][j + 1] && board[i][j] == board[i + 2][j + 2] && board[i][j] != ' ') {
					board[i + 3][j + 3] = '#';
					return;
				}
				else if (board[i][j] == board[i + 2][j + 2] && board[i][j] != ' ') {
					board[i + 1][j + 1] = '#';
					return;
				}
			}
		}
		for (i = 1; i < row - 2; i++) {
			for (j = 1; j < col - 2; j++) {
				if (board[i][j] == board[i + 1][j - 1] && board[i][j] != ' ' && board[i - 1][j + 1] == ' ') {
					board[i - 1][j] = '#';
					return;
				}
				else if (board[i][j] == board[i + 1][j - 1] && board[i][j] == board[i + 2][j - 2] && board[i][j] != ' ') {
					board[i + 3][j - 3] = '#';
					return;
				}
				else if (board[i][j] == board[i + 2][j - 2] && board[i][j] != ' ') {
					board[i + 1][j - 1] = '#';
					return;
				}
			}
		}
		while (1) {
			int x = rand() % row;
			int y = rand() % col;		//���ɵ������һ���Ϸ�
					//�ж������Ƿ�ռ��
			if (board[x][y] == ' ') {		//δ��ռ��
				board[x][y] = '#';		//������'#'
				return;
			}
		}
	}
}//ֻҪ����б�Խ�����2�ӣ����γ�"L"����ҾͿ���Ӯ��һ�����Ӯ����

//char Iswin(char board[ROW][COL], int row, int col) {		//�ж���Ϸ״̬//������
//	int i = 0;
//	for (i = 0; i < row; i++) {		//�ж�����
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
//			return board[i][0];		//�����ж��������е����ĸ�����
//		}
//	}
//	for (i = 0; i < col; i++) {		//�ж�����
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
//			return board[0][i];
//		}
//	}
//	//�ж϶Խ���
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
//		return board[0][0];
//	}
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
//		return board[0][2];
//	}
//	//�ж�ƽ��,�������˷���1����������0
//	int ret = Isfull(board, row, col);
//	if (ret == 1) {
//		return 'Q';
//	}
//	return 'C';		//��Ϸ����
//}

//char Iswin(char board[ROW][COL], int row, int col) {		//�ж���Ϸ״̬//�����������
//	int i = 0, j = 0;
//	for (i = 0; i < row; i++) {		//�ж�����
//		for (j = 0; j < col - 2; j++) {
//			if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j] != ' ') {
//				return board[i][j];		//�����ж��������е����ĸ�����
//			}
//		}
//	}
//	for (i = 0; i < row - 2; i++) {		//�ж�����
//		for (j = 0; j < col; j++) {
//			if (board[i][j] == board[i + 1][j] && board[i][j + 1] == board[i][j + 2] && board[i][j] != ' ') {
//				return board[i][j];
//			}
//		}
//	}
//	//�ж϶Խ���
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
//	//�ж�ƽ��,�������˷���1����������0
//	int ret = Isfull(board, row, col);
//	if (ret == 1) {
//		return 'Q';
//	}
//	return 'C';		//��Ϸ����
//}

int Isfull(char board[ROW][COL], int row, int col) {
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return 0;		//����û��
			}
		}
	}
	return 1;		//��������
}

char Iswin(char board[ROW][COL], int row, int col,int n) {		//�ж���Ϸ״̬//n����
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
	//�ж϶Խ���
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
	//�ж�ƽ��,�������˷���1����������0
	int ret = Isfull(board, ROW, COL);
	if (ret == 1) {
		return 'Q';
	}
	return 'C';		//��Ϸ����
}

