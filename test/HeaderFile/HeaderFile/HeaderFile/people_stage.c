#define _CRT_SECURE_NO_WARNINGS 1
#include "People_Stage.H"

//输入名字和年龄
//输出 名字+自己年龄所在的阶段
char* peopleStage(int p1)
{
	//判断年龄在哪一阶段
	if (p1 <= INFANCY)
	{
		return "INFANCY";
	}
	else if (p1 <= ADULT)
	{
		return "ADULT";
	}
	else if (p1 > GERONTIC)
	{
		return "GERONTIC";
	}
}