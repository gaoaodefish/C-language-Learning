#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
//
//struct S 
//{
//	char c;
//	int i;
//	char c1;
//};
//
//struct S1 {
//	char c;
//	int i;
//	struct S s;
//};
//
//int main() 
//{
//	struct S1 s = { 0 };
//	printf("%u\n", sizeof(s));
//	return 0;
//}

extern aaa();
extern 
enum Option1
{
	ADD1,
	EXIT1,
	CCC,
} b;

extern
enum Option
{
	EXIT,
	ADD
} a;

int main() 
{
	a = EXIT;
	b = ADD;
	int c = ADD1;

	printf("%d\n", sizeof(c));
	printf("%d\n", c);
	aaa();
	return 0;
}