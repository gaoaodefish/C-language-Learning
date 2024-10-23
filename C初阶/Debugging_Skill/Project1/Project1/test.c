#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void test2() 
//{
//	printf("hehe\n");
//}
//
//void test1() 
//{
//	test2();
//}
//
//void test() 
//{
//	test1();
//}
//
//int main() 
//{
//	test();
//	return 0;
//}

////写一个1！+ 2！+ 3！+ n！的程序，不考虑溢出
//int factorial(int n) 
//{
//	int i = 0;
//	int ret = 1;
//	int num = 0;
//	int j = 0;
//	for(j = 1; j <= n; j++)
//	{
//		for (i = 1, ret = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		num += ret;
//	}
//	return num;
//}
//
//int main() 
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = factorial(n);
//	printf("factorial = %d\n", num);
//	return 0;
//}

int main() 
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	char q = 97;
	printf("%c\n", q);
	for (i = 0; i <= 14; i++) 
	{
		arr[i] = 0;
		printf("hehe\n");
	}
	return 0;
}