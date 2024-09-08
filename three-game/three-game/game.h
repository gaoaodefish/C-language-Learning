#pragma once

//ͷ�ļ��İ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//���ŵĶ���
#define ROW 3
#define COL 3

//����������

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ���̵ĺ���
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[][COL], int row, int col);

//��������
void ComputerMove(char board[][COL], int row, int col);

char IsWin(char board[][COL], int row, int col);