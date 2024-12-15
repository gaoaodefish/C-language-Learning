#pragma once

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX 1000//存放人的最大个数

#define DEFAULT_SZ 3
#define INC_SZ 2
 
//定义结构体类型
typedef struct Peoinof 
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}Peoinof;

////通讯录---静态版本
//typedef struct Contact 
//{
//	Peoinof data[MAX];//存放添加进来的人的信息
//	int sz; //记录当前通信录中有效的信息个数
//}Contact;

//通讯录---动态版本
typedef struct Contact 
{
	Peoinof* data;//指向动态申请的空间，存放添加进来的人的信息
	int sz; //记录当前通信录中有效的信息个数
	int capacity;//记录当前通讯录的最大容量
}Contact;

//初始化通讯录
void InitContact(Contact* pc);

//增加一个人的信息
void AddContact(Contact* pc);

//打印通讯录
void PrintContact(const Contact* pc);

//删除一个人的信息
void DleContact(Contact* pc);

//查找指定练习人
void SearchContact(Contact* pc);

//修改指定联系人
void ModifyContact(Contact* pc);

//对通讯录排序
void SortContact(Contact* pc);

//销毁通讯录
void DestoryContact(Contact* pc);