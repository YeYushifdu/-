#pragma once
//9*9���̣�����11*11
#define ROW 9
#define COL 9		//����λ��
#define ROWS (ROW+2)
#define COLS (COL+2)


#include<stdio.h>


void Intboard(char board[ROWS][COLS], int rows, int cols, char set);	//��ʼ������

void Displayboard(char board[ROWS][COLS], int row, int col);		//��ӡ����//�������Ĳ�����11*11����