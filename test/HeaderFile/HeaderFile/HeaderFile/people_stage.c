#define _CRT_SECURE_NO_WARNINGS 1
#include "People_Stage.H"

//�������ֺ�����
//��� ����+�Լ��������ڵĽ׶�
char* peopleStage(int p1)
{
	//�ж���������һ�׶�
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