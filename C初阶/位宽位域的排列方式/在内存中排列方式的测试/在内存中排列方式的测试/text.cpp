#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*************************
定义一个结构体并命名为button，
四个相同数据结构的成员repeat,event,repeat1,event1,并都分配4bit宽度的位域
*************************/
typedef struct {
	unsigned char repeat : 4;
	unsigned char event : 4;
	unsigned char repeat1 : 4;
	unsigned char event1 : 4;
}button;

int main()
{
	//定义一个 button 类型的结构体命名为 demo，并引出所有成员
	button demo;		
	demo.repeat = 0xa;
	demo.event = 0xb;
	demo.repeat1 = 0xc;
	demo.event1 = 0xd;

	//先对结构体类型的 demo，用 unsigned int* 进行转义，获得 demo 的地址，最后进行解引用
	printf("button value: 0x%x\n", *((unsigned int*)&demo));
	return 0;
}

//得出答案0xcccc dcba,得visual studio编译软件
//从低位开始排，排到高位