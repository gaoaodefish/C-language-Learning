#define _CRT_SECURE_NO_WARNINGS 1

//ͨѶ¼----------��̬�汾
//1.ͨѶ¼���ܴ��һǧ���˵���Ϣ
//ÿ���˵���Ϣ��
//����+����+�Ա�+�绰+��ַ
//2.�����˵���Ϣ
//3.ɾ��ָ���˵���Ϣ
//4.�޸�ָ���˵���Ϣ
//5.����ָ���˵���Ϣ
//6.����ͨ��¼����Ϣ
//
//test.c
//��������ͨѶ¼��ģ��
//
//contact.h
//����������
//������ʵ��
// 
//contact.c
//������ʵ��
//

//ͨѶ¼----------��̬�����汾
//1>��ʼ���ܴ��3���˵���Ϣ
//2>ÿ�β����ͣ���������

#include "contact.h"


void menu() 
{
	printf("************************************\n");
	printf("****  1. add    2. del      ********\n");
	printf("****  3. search 4. modify   ********\n");
	printf("****  5. sort   6. print    ********\n");
	printf("****  0.exit                ********\n");
	printf("************************************\n");
}

enum Option 
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT,
};

int main() 
{
	int input = 0;
	//����ͨ��¼
	//�ڶ�����data����һ�������ռ�
	//sz = 0;
	//capacity ��ʼ��Ϊ��ǰ�������
	Contact con; 
	InitContact(&con);
	do 
	{
		menu();
		printf("��ѡ��:> ");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//�����˵���Ϣ
			AddContact(&con);
			break;
		case DEL:
			//ɾ���˵���Ϣ
			DleContact(&con);
			break;
		case SEARCH:
			//�����˵���Ϣ
			SearchContact(&con);
			break;
		case MODIFY:
			//�޸��˵���Ϣ
			ModifyContact(&con);
			break;
		case SORT:
			//���˵���Ϣ����
			SortContact(&con);
			break;
		case PRINT:
			//��ӡ�˵���Ϣ
			PrintContact(&con);
			break;
		case EXIT:
			//�˳�ϵͳ
			//����ͨѶ¼
			DestoryContact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}