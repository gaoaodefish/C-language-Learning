#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

static int FindByName(Contact* pc, char name[]);

// 静态版本
//void InitContact(Contact* pc) 
//{
//	pc->sz = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

//动态版本
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

//静态版本的增加联系人
//void AddContact(Contact* pc) 
//{
//	if (pc->sz == MAX) 
//	{
//		printf("通讯录已满，无法添加\n");
//		return;
//	}
//
//	//增加一个人的信息
//	printf("请输入名字:>");
//	scanf("%s", pc->data[pc->sz].name);
//	int i = 0;
//	for (i = 0; i < pc->sz; i++)
//	{
//		if (FindByName(pc, pc->data[pc->sz].name) != -1) 
//		{
//			printf("该对象已存在，请删除后重新添加\n");
//			return;
//		}
//	}
//	printf("请输入年龄:>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("请输入性别:>");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("请输入电话:>");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("请输入地址:>");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	pc->sz += 1;
//	printf("添加成功\n");
//}

//动态版本的增加联系人
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

	//增加一个人的信息
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (FindByName(pc, pc->data[pc->sz].name) != -1) 
		{
			printf("该对象已存在，请删除后重新添加\n");
			return;
		}
	}
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz += 1;
	printf("添加成功\n");
}


void PrintContact(const Contact* pc) 
{
	int i = 0;
	//打印标题
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	//打印数据
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
	return -1;//找不到
}

void DleContact(Contact* pc) 
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0) 
	{
		printf("通讯录为空，无需删除\n");
	}
	//1.查找要删除的人
	//有/没有
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1) 
	{
		printf("要删除的人不存在\n");
		return;
	}
	//2.删除
	int i = 0;
	for (i = pos; i < pc->sz-1; i++) 
	{
		pc->data[i] = pc->data[i + 1];
	}

	pc->sz--;
	printf("删除成功\n");
}

void SearchContact(Contact* pc) 
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	//打印数据
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
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	//修改查找人的信息
	printf("请输入名字:>");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pos].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pos].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pos].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pos].addr);
	printf("修改成功\n");
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
	printf("排序完成\n");
}