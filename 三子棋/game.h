#pragma once
//���ŵĶ���
#define ROW 3
#define COL 3

//ͷ�ļ��İ���
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//����������
//��ʼ������
void Intboard(char board[ROW][COL], int row, int col);
//��ӡ����
void Displayboard(char board[ROW][COL], int row, int col);
//�������
void Playermove(char board[ROW][COL], int row, int col);
//��������
void Computermove(char board[ROW][COL], int row, int col);
//�ж���Ϸ״̬
char Iswin(char board[ROW][COL], int row, int col);