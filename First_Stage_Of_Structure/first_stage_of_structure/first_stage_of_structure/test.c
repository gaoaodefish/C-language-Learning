#define _CRT_SECURE_NO_WARNINGS 1
//First stage of structure
#include <stdio.h>

//struct sb 
//{
//	char c;
//	short i;
//	struct sb* next;	//struct sb���͵�ָ�� next
//};
//
//struct std	//���� Ҳ���ǹ������� ���磺ѧ���������֡����䡢�༶��ѧ�ŵȵ�
//{
//	//�ṹ�ĳ�Ա����
//	//�е���Java����
//	struct sb w;
//	char name[20];
//	int age;
//	char class[20];
//	char id[20];
//}s1, s2;//s1 s2 ��ȫ�ֱ���

//int main() 
//{
//	//s �Ǿֲ�����
//	//���� ϸ˵���ֽ�ʲô ������� ����һ���༶ ѧ����ʲô
//	struct std s = { {'a', 10, NULL}, "gaoaodefish", 20, "����232", "2330201234"};
//	struct std* ps = &s;//ָ��struct std���� s �Ľṹ��ָ������ps
//	//������'.'	�ṹ��������ýṹ���Ա
//	//������'->'�ṹ�����ָ��ֱ�����ýṹ���Ա
//	//Ҳ���Խ��н����ú���� (*ps) = s
//	printf("%p\n", s.w.next);//�Խṹ��s ��Ľṹ��w ���struct sb* ���͵�next���д�ӡ 
//	printf("%p\n", (*ps).w.next);
//	printf("%p\n", ps->w.next);
//	return 0;
//}


struct sb
{
	char c;
	short i;
	float f;
};

struct std	
{
	struct sb w;
	char name[20];
	int age;
	char class[20];
	char id[20];
};

void print1(struct std t)
{
	printf("%c\n", t.w.c);
	printf("%d\n", t.w.i);
	printf("%.2f\n", t.w.f);
	printf("%s\n", t.name);
	printf("%d\n", t.age);
	printf("%s\n", t.class);
	printf("%s\n", t.id);
}

void print2(struct std* ps)
{
	printf("%c\n", ps->w.c);
	printf("%d\n", ps->w.i);
	printf("%.2f\n", ps->w.f);
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->class);
	printf("%s\n", ps->id);
}

int main()
{
	struct std s = { {'a', 10, 3.14}, "gaoaodefish", 20, "����232", "2330201234" };
	//����һ����������ӡs������
	print1(s);//��ֵ����		low
	print2(&s);//��ַ����   ����Ч��tall�����Ըı�s���ֵ
	return 0;
}