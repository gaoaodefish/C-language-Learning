#define _CRT_SECURE_NO_WARNINGS 1
#include "People_Stage.H"

int main() 
{
	//�������ֺ�����
	People p1 = { 0 };
	printf("����������:>");
	scanf("%s", &p1.name);
	printf("����������:>");
	scanf("%d", &p1.age);
	//��������
	//�����Լ��������ڵĽ׶�
	char* stage = peopleStage(p1.age);
	//��ӡ���ֺ��������ڵĽ׶�
	printf("%s %s", p1.name, stage);
	return 0;
}