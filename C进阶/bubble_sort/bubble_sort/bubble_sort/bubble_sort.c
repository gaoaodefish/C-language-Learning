#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

void Swap(char* buf1, char* buf2, int width) 
{
	int i = 0;
	for (i = 0; i < width; i++) 
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

//模仿实现qsort实现一个冒泡排序的通用算法
void bubble_sort(void* base,
				 int sz,
				 int width,
				 int (*cmp)(const void* e1, const void* e2)
				) 
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++) 
	{
		int j = 0;
		//一趟的排序
		for (; j < sz - 1 - i; j++) 
		{
			//两个元素比较
			if (cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
			{
				//compare
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int int_cmp(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void print_arr(int* arr, int sz) 
{
	int i = 0;
	for (i = 0; i < sz; i++) 
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
}

void test() 
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), int_cmp);
	print_arr(arr, sz);
}

typedef struct stu 
{
	char name[20];
	int age;
} s;

int cmp_struct(const void* e1, const void* e2) 
{
	return strcmp(((s*)e1)->name, ((s*)e2)->name);
}

void test1() 
{
	s q[3] = { {"zhuangsan", 32},{"lisi", 26},{"wangwu", 20} };
	int sz = sizeof(q) / sizeof(q[0]);
	bubble_sort(q, sz, sizeof(q[0]), cmp_struct);
}
int main() 
{
	test();
	test1();
	return 0;
}