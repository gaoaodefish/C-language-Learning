#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*************************
����һ���ṹ�岢����Ϊbutton��
�ĸ���ͬ���ݽṹ�ĳ�Աrepeat,event,repeat1,event1,��������4bit��ȵ�λ��
*************************/
typedef struct {
	unsigned char repeat : 4;
	unsigned char event : 4;
	unsigned char repeat1 : 4;
	unsigned char event1 : 4;
}button;

int main()
{
	//����һ�� button ���͵Ľṹ������Ϊ demo�����������г�Ա
	button demo;		
	demo.repeat = 0xa;
	demo.event = 0xb;
	demo.repeat1 = 0xc;
	demo.event1 = 0xd;

	//�ȶԽṹ�����͵� demo���� unsigned int* ����ת�壬��� demo �ĵ�ַ�������н�����
	printf("button value: 0x%x\n", *((unsigned int*)&demo));
	return 0;
}

//�ó���0xcccc dcba,��visual studio�������
//�ӵ�λ��ʼ�ţ��ŵ���λ