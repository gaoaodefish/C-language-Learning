#define _CRT_SECURE_NO_WARNINGS 1

//通讯录----------静态版本
//1.通讯录中能存放一千个人的信息
//每个人的信息：
//名字+年龄+性别+电话+地址
//2.增加人的信息
//3.删除指定人的信息
//4.修改指定人的信息
//5.查找指定人的信息
//6.排序通信录的信息
//
//test.c
//用来测试通讯录的模块
//
//contact.h
//函数的声明
//函数的实现
// 
//contact.c
//函数的实现
//

//通讯录----------动态增长版本
//1>开始智能存放3个人的信息
//2>每次不够就，增加两个

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
	//创建通信录
	//在堆区给data申请一块连续空间
	//sz = 0;
	//capacity 初始化为当前最大容量
	Contact con; 
	InitContact(&con);
	do 
	{
		menu();
		printf("请选择:> ");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//增加人的信息
			AddContact(&con);
			break;
		case DEL:
			//删除人的信息
			DleContact(&con);
			break;
		case SEARCH:
			//查找人的信息
			SearchContact(&con);
			break;
		case MODIFY:
			//修改人的信息
			ModifyContact(&con);
			break;
		case SORT:
			//对人的信息排序
			SortContact(&con);
			break;
		case PRINT:
			//打印人的信息
			PrintContact(&con);
			break;
		case EXIT:
			//退出系统
			//销毁通讯录
			DestoryContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}