#pragma once

#ifndef __PEOPLESTAGE_H
#define __PEOPLESTAGE_H

#define MAX_NAME 20

enum Stage
{
	INFANCY = 18,	//ʮ�������£�������
	ADULT = 50,		//��ʮ�����£�ʮ�������ϳ�����
	GERONTIC = 51	//��ʮһ�����ϣ�������
};

typedef struct People
{
	char name[MAX_NAME];
	int age;
}People;

#include <stdio.h>

char* peopleStage(int p1);

#endif