#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("******************************\n");
	printf("*******     1.play     *******\n");
	printf("*******     0.exit     *******\n");
	printf("******************************\n");
}

void game() 
{
	char ret = 0;//��Ϸ״̬

	//�洢���� ���� ��ά����
	char board[ROW][COL];

	//��ʼ������ ���� ��ʼ���ո�
	InitBoard(board, ROW, COL);

	//���̴�ӡ ���� �����Ǵ�ӡ���������
	DisplayBoard(board, ROW, COL);

	//�����
	//������
	while (1) 
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ����Ϸ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		//��������
		printf("������:>\n");
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ����Ϸ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	printf("%c\n", ret);
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}

int main() 
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input)
		{ 
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��Ч��ѡ��������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}