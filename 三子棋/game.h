#pragma once
//符号的定义
#define ROW 3
#define COL 3

//头文件的包含
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//函数的声明
//初始化棋盘
void Intboard(char board[ROW][COL], int row, int col);
//打印棋盘
void Displayboard(char board[ROW][COL], int row, int col);
//玩家下棋
void Playermove(char board[ROW][COL], int row, int col);
//电脑下棋
void Computermove(char board[ROW][COL], int row, int col);
//判断游戏状态
char Iswin(char board[ROW][COL], int row, int col);