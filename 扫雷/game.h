#pragma once
//9*9棋盘，数组11*11
#define ROW 9
#define COL 9		//棋盘位置
#define ROWS (ROW+2)
#define COLS (COL+2)
#define N 10	//雷的个数


#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void Intboard(char board[ROWS][COLS], int rows, int cols, char set);	//初始化棋盘

void Displayboard(char board[ROWS][COLS], int row, int col);		//打印棋盘//传过来的参数是11*11数组

void Setmine(char board[ROWS][COLS], int row, int col);		//布置雷

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);		//排查雷