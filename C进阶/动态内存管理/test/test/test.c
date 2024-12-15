#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main() 
//{
//	int* p = (int*)calloc(10, 4);
//	int* pt= (int*)realloc(p, 20);
//	if (pt != NULL) 
//	{
//		p = pt;
//	}
//
//	return 0;
//}

void test() 
{
	static int a = 1;
}

int main() 
{
	printf("%d", a);
	return 0;
}