#pragma once

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX 1000//����˵�������

#define DEFAULT_SZ 3
#define INC_SZ 2
 
//����ṹ������
typedef struct Peoinof 
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}Peoinof;

////ͨѶ¼---��̬�汾
//typedef struct Contact 
//{
//	Peoinof data[MAX];//�����ӽ������˵���Ϣ
//	int sz; //��¼��ǰͨ��¼����Ч����Ϣ����
//}Contact;

//ͨѶ¼---��̬�汾
typedef struct Contact 
{
	Peoinof* data;//ָ��̬����Ŀռ䣬�����ӽ������˵���Ϣ
	int sz; //��¼��ǰͨ��¼����Ч����Ϣ����
	int capacity;//��¼��ǰͨѶ¼���������
}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//����һ���˵���Ϣ
void AddContact(Contact* pc);

//��ӡͨѶ¼
void PrintContact(const Contact* pc);

//ɾ��һ���˵���Ϣ
void DleContact(Contact* pc);

//����ָ����ϰ��
void SearchContact(Contact* pc);

//�޸�ָ����ϵ��
void ModifyContact(Contact* pc);

//��ͨѶ¼����
void SortContact(Contact* pc);

//����ͨѶ¼
void DestoryContact(Contact* pc);