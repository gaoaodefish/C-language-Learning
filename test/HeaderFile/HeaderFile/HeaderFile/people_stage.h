#pragma once

#ifndef __PEOPLESTAGE_H
#define __PEOPLESTAGE_H

#define MAX_NAME 20

enum Stage
{
	INFANCY = 18,	//十八岁以下，幼年期
	ADULT = 50,		//五十岁以下，十八岁以上成年期
	GERONTIC = 51	//五十一岁以上，老年期
};

typedef struct People
{
	char name[MAX_NAME];
	int age;
}People;

#include <stdio.h>

char* peopleStage(int p1);

#endif