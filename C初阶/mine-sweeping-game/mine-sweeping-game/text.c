#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"

void menu() 
{
	printf("*********************************\n");
	printf("********    1.Play      *********\n");
	printf("********    0.exit      *********\n");
	printf("*********************************\n");
}

void game() 
{

}

int main() 
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input) 
		{
		case 1:
			game();//游戏本体
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}