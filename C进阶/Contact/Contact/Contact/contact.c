#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

static int FindByName(Contact* pc, char name[]);

// ��̬�汾
//void InitContact(Contact* pc) 
//{
//	pc->sz = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

//��̬�汾
void InitContact(Contact* pc)
{
	pc->data = (Peoinof*)malloc(DEFAULT_SZ * sizeof(Peoinof));
	if (pc->data == NULL) {
		perror("InitConTact");
	}
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
}

void DestoryContact(Contact* pc) 
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}

//��̬�汾��������ϵ��
//void AddContact(Contact* pc) 
//{
//	if (pc->sz == MAX) 
//	{
//		printf("ͨѶ¼�������޷����\n");
//		return;
//	}
//
//	//����һ���˵���Ϣ
//	printf("����������:>");
//	scanf("%s", pc->data[pc->sz].name);
//	int i = 0;
//	for (i = 0; i < pc->sz; i++)
//	{
//		if (FindByName(pc, pc->data[pc->sz].name) != -1) 
//		{
//			printf("�ö����Ѵ��ڣ���ɾ�����������\n");
//			return;
//		}
//	}
//	printf("����������:>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("�������Ա�:>");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("������绰:>");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("�������ַ:>");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	pc->sz += 1;
//	printf("��ӳɹ�\n");
//}

//��̬�汾��������ϵ��
void AddContact(Contact* pc) 
{
	if (pc->sz == pc->capacity)
	{
		Peoinof* ptr = (Peoinof*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(Peoinof));
		if (ptr != NULL) 
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("Finish to add a space.");
		}
		else {
			perror("AddContact");
			printf("Failed to add a contact.");
			return;
		}
	}

	//����һ���˵���Ϣ
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (FindByName(pc, pc->data[pc->sz].name) != -1) 
		{
			printf("�ö����Ѵ��ڣ���ɾ�����������\n");
			return;
		}
	}
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz += 1;
	printf("��ӳɹ�\n");
}


void PrintContact(const Contact* pc) 
{
	int i = 0;
	//��ӡ����
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	//��ӡ����
	for(i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", 
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

static int FindByName(Contact* pc, char name[]) 
{
	int i = 0;
	for (i = 0; i < pc->sz; i++) 
	{
		if (strcmp(pc->data[i].name, name) == 0) 
		{
			return i;
		}
	}
	return -1;//�Ҳ���
}

void DleContact(Contact* pc) 
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0) 
	{
		printf("ͨѶ¼Ϊ�գ�����ɾ��\n");
	}
	//1.����Ҫɾ������
	//��/û��
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1) 
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	//2.ɾ��
	int i = 0;
	for (i = pos; i < pc->sz-1; i++) 
	{
		pc->data[i] = pc->data[i + 1];
	}

	pc->sz--;
	printf("ɾ���ɹ�\n");
}

void SearchContact(Contact* pc) 
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	//��ӡ����
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
		pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);
}

void ModifyContact(Contact* pc) 
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	//�޸Ĳ����˵���Ϣ
	printf("����������:>");
	scanf("%s", pc->data[pos].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pos].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pos].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pos].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pos].addr);
	printf("�޸ĳɹ�\n");
}

void SortContact(Contact* pc) 
{
	int i = 0;
	int j = 0;
	for (i = 0; i < pc->sz - 1; i++) 
	{
		for (j = 0; j < pc->sz - 1 - i; j++) 
		{
			if (strcmp(pc->data[j].name, pc->data[j + 1].name) > 0) 
			{
				Peoinof tmp;
				tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
			}
		}
	}
	printf("�������\n");
}