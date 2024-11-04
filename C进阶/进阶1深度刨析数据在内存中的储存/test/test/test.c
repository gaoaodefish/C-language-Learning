#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <assert.h>

//int main() 
//{
//	int a = -10;
//	int b = 10;
//	a = ~a + 1;
//	return 0;
//}
//
//int main() 
//{
//	signed char i = 256;
//	printf("i = %d\n", i);
//	return 0;
//}

//00000000 00000000 00000000 00010100
//11111111 11111111 11111111 11101100
//00000000 00000000 00000000 00001010
//11111111 11111111 11111111 11110110
//10000000 00000000 00000000 00001001
//10000000 00000000 00000000 00001010
//10000000
//01111111
//10000000
//11111111
//10001010
//11110110
//10001001
//10001010

//int main() 
//{
//	int n = 0b00111111100000000000000000000001;
//	float* pFloat = &n;
//	*pFloat = 9.0;
//	printf("%f", *pFloat);
//	return 0;
//}

//int main() 
//{
//	//int arr[10] = { 0 };
//	//printf("%d\n", (int)sizeof(&arr));
//	float p = 9.0;
//	printf("%f\n", p);
//	printf("%d\n", (int)p);
//	int* ip = &p;
//	*ip = 9;
//	printf("%f\n", (float)*ip);
//	int(*p1)[5];
//	return 0;
//}

//void test(int *arr) 
//{
//	int i = 0;
//	for (i = 0; i < 20; i++) 
//	{
//		*(arr + i) = i;
//		printf("%d\n", *(arr + i));
//	}
//}
//
//int main() 
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//
//int main() 
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz =  sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//int main() 
//{
//	int i = 0;
//	int gw, sw, bw, qw, ww, sww;
//	for (i = 0; i < 100000; i++) 
//	{
//		gw = i % 10;
//		sw = i / 10 % 10;
//		bw = i / 100 % 10;
//		qw = i / 1000 % 10;
//		ww = i / 10000 % 10;
//		sww = i / 100000 % 10;
//		if (i < 10) 
//		{
//			if (gw == i)
//				printf("%d\n", i);
//		}else
//			if (i < 100) 
//			{
//				if (pow(gw, 2) + pow(sw, 2) == i)
//					printf("%d\n", i);
//			}else
//				if (i < 1000) 
//				{
//					if (pow(gw, 3) + pow(sw, 3) + pow(bw, 3) == i)
//						printf("%d\n", i);
//				}else 
//					if (i < 10000) 
//					{	
//						if (pow(gw, 4) + pow(sw, 4) + pow(bw, 4)  + pow(qw, 4) + pow(ww, 4) == i)
//							printf("%d\n", i);
//					}else 
//						if (i <= 100000) 
//						{
//							if (pow(gw, 5) + pow(sw, 5) + pow(bw, 5)  + pow(qw, 5) + pow(ww, 5) + pow(sww, 5) == i)
//								printf("%d\n", i);
//						}
//	}
//	return 0;
//}

//int main() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int(*p)[10] = &arr;
//	
//	return 0;
//}

//
//void reverse(char* p, int sz) 
//{
//	assert(p);
//	sz--;
//	sz--;
//	char tmp;
//	int i = 0;
//	for (i = 0; i < (sz+1)/2; i++) 
//	{
//		tmp = *(p + sz - i);
//		*(p + sz - i) = *(p + i);
//		*(p + i) = tmp;
//	}
//}
//
//int main() 
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ss = (int)strlen(arr);
//	printf("%d\n", ss);
//	reverse(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//}

//void printlx(int r, int c) 
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r / 2; i++) 
//	{
//		for (j = 0; j < c / 2 - i; j++) 
//		{
//			putchar(' ');
//		}
//		for (; j >= c / 2 - i && j <= c / 2 + i; j++)
//		{
//			putchar('*');
//		}
//		putchar('\n');
//	}
//
//	for (; i >= 0; i--)
//	{
//		for (j = 0; j < c / 2 - i; j++)
//		{
//			putchar(' ');
//		}
//		for (; j >= c / 2 - i && j <= c / 2 + i; j++)
//		{
//			putchar('*');
//		}
//		putchar('\n');
//	}
//}
//
//int main() 
//{
//	int r = 100, c=100;
//	printlx(r, c);
//	return 0;
//}

//int main() 
//{
//	int count = 0;
//	int bottle = 0;
//	int money = 20;
//	while (money != 0 || bottle >= 2) 
//	{
//		if (money != 0) 
//		{
//			money--;
//			bottle++;
//			count++;
//		}
//		else if (bottle >= 2) 
//		{
//			bottle -= 2;
//			bottle++;
//			count++;
//		}
//	}
//	printf("cola count = %d\n", count);
//	return 0;
//}

//int main() 
//{
//	/*int i = 10;
//	int b = 0;
//	int const *p = &i;
//	p = &b;*/
//	return 0;
//}

//void swap(int *p, int sz) 
//{
//	assert(p);
//	int tmp = 0;
//	int i = 0;
//	int count = 0;
//	sz--;
//	for (i = 0; i < sz; i++) 
//	{
//		if ((*(p + i)) % 2 == 0) 
//		{
//			while (!((*(p + sz - count)) % 2)) 
//			{
//				count++;
//			}
//			if (i >= sz - count)break;
//			tmp = *(p + sz - count);
//			*(p + sz - count) = *(p + i);
//			*(p + i) = tmp;
//		}
//	}
//}
//
//int main() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap(arr, sz);
//	int i = 0;
//	while (i < sz) 
//	{
//		printf("%d\n", *(arr + i));
//		i++;
//	}
//	return 0;
//}

//int main() 
//{
//	int i = 10;
//	int *p = &i;
//	return 0;
//}

//int add(int x, int y) 
//{
//	return x + y;
//}
//
//int aaa(int (*p)(int, int), int ret) 
//{
//	return (*p) (1, 1) + ret;
//}
//
//int main() 
//{
//	int (*pf)(int, int) = add;
//	int ret = (pf)(3, 5);
//	printf("%d ", aaa(add, ret));
//	return 0;
//}
//
int add(int x, int y) 
{
	return x + y;
}
//
//int subtract(int x, int y) 
//{
//	return x - y;
//}
//
//int multiply(int x, int y) 
//{
//	return x * y;
//}
//
//int divide(int x, int y) 
//{
//	return x / y;
//}
//
//void menu() 
//{
//	printf("****************************\n");
//	printf("***** 1. add   2. sub  *****\n");
//	printf("***** 3. mul   4. div  *****\n");
//	printf("********  0. exit   ********\n");
//	printf("****************************\n");
//}
//
//int main() 
//{
//	int (*arrpt[5])(int, int) = {NULL, add, subtract, multiply, divide};
//	int input = 0;
//	do 
//	{
//		menu();
//		int x = 0;
//		int y = 0;
//		printf("请输入:> ");
//		scanf("%d", &input);
//		
//		if (input >= 1 && input <= 4) 
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			int ret = (*arrpt[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0) 
//		{
//			printf("exit\n");
//		}
//		else 
//		{
//			printf("Error! Please re-enter\n");
//		}
//
//	} while (input);
//	return 0;
//}

//
//int test(int (*pt)(int, int)) 
//{
//	printf("1\n");
//	return (*pt)(1, 2);
//}
//
//int test1(int (*ppt)(int (*)(int, int)))
//{
//	int num = 0;
//	printf("2\n");
//	num = (*ppt);
//	return num;
//}
//
//int main() 
//{
//	printf("%d\n", test1(test(add)));
//
//	return 0;
//}

//#include <stdlib.h>
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int compare_char(const void* e1, const void* e2) 
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//int main() 
//{
//	struct stu s[3] = { {"zhuangsan", 30},{"lisi", 25},{"wangwu", 20} };
//
//	qsort(s, sizeof(s)/sizeof(s[0]), sizeof(s[0]), compare_char);
//	return 0;
//}