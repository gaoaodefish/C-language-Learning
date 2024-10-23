#define _CRT_SECURE_NO_WARNINGS 1
//First stage of structure
#include <stdio.h>

//struct sb 
//{
//	char c;
//	short i;
//	struct sb* next;	//struct sb类型的指针 next
//};
//
//struct std	//类型 也就是共有特征 例如：学生：有名字、年龄、班级、学号等等
//{
//	//结构的成员变量
//	//有点像Java的类
//	struct sb w;
//	char name[20];
//	int age;
//	char class[20];
//	char id[20];
//}s1, s2;//s1 s2 是全局变量

//int main() 
//{
//	//s 是局部变量
//	//对象 细说名字叫什么 多大年龄 在哪一个班级 学号是什么
//	struct std s = { {'a', 10, NULL}, "gaoaodefish", 20, "电子232", "2330201234"};
//	struct std* ps = &s;//指向struct std类型 s 的结构体指针类型ps
//	//操作符'.'	结构体变量引用结构体成员
//	//操作符'->'结构体变量指针直接引用结构体成员
//	//也可以进行解引用后调用 (*ps) = s
//	printf("%p\n", s.w.next);//对结构体s 里的结构体w 里的struct sb* 类型的next进行打印 
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
	struct std s = { {'a', 10, 3.14}, "gaoaodefish", 20, "电子232", "2330201234" };
	//创建一个函数，打印s的内容
	print1(s);//传值调用		low
	print2(&s);//传址调用   传参效率tall，可以改变s里的值
	return 0;
}