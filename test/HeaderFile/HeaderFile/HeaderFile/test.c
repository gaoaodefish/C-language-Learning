#define _CRT_SECURE_NO_WARNINGS 1
#include "People_Stage.H"

int main() 
{
	//输入名字和年龄
	People p1 = { 0 };
	printf("请输入姓名:>");
	scanf("%s", &p1.name);
	printf("请输入年龄:>");
	scanf("%d", &p1.age);
	//函数调用
	//返回自己年龄所在的阶段
	char* stage = peopleStage(p1.age);
	//打印名字和年龄所在的阶段
	printf("%s %s", p1.name, stage);
	return 0;
}