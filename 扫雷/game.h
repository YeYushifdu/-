#pragma once
//9*9���̣�����11*11
#define ROW 9
#define COL 9		//����λ��
#define ROWS (ROW+2)
#define COLS (COL+2)
#define N 10	//�׵ĸ���


#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void Intboard(char board[ROWS][COLS], int rows, int cols, char set);	//��ʼ������

void Displayboard(char board[ROWS][COLS], int row, int col);		//��ӡ����//�������Ĳ�����11*11����

void Setmine(char board[ROWS][COLS], int row, int col);		//������

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);		//�Ų���