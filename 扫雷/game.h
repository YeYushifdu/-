#pragma once
//9*9棋盘，数组11*11
#define ROW 9
#define COL 9		//棋盘位置
#define ROWS (ROW+2)
#define COLS (COL+2)


#include<stdio.h>


void Intboard(char board[ROWS][COLS], int rows, int cols, char set);	//初始化棋盘

void Displayboard(char board[ROWS][COLS], int row, int col);		//打印棋盘//传过来的参数是11*11数组