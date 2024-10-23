#define _CRT_SECURE_NO_WARNINGS 1
#include "boot.h"

//int main()
//{
//	int num = 10;
//	int* p = &num;
//	int  * const * pt = &p;
//	*pt = 20;
//	printf("%d\n", num);
//	return 0;
//}

char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);//断言
	assert(src != NULL);
	char* ret = dest;
	while (*dest++ = *src++) 
	{
		;
	}
	return ret;
}

//void my_println(char * arr)
//{
//	assert(arr != NULL);
//	while (putchar(*arr),*arr++ != '\0')
//	{
//		;
//	}
//	putchar('\n');
//}
//

////模拟实现strlen函数
//size_t my_strlen(const char * pt) 
//{
//	assert(pt != NULL);
//	char* ret = pt;
//	while(*pt++ != '\0')
//	{
//		;
//	}
//	return pt - ret - 1;
//}
//
//void  main() 
//{
//	extern char arr[];
//	printf("string length : %zd\n", my_strlen(arr));
//	printf("string length : %zd\n", strlen(arr));
//
//	/*char arr1[20] = { 0 };
//	char arr2[] = "hello";
//	printf("%s\n", my_strcpy(arr1, arr2));*/
//
//	//// const 修饰变量， 这个变量被称为 常变量（常数变量）
//	////特性：不能被修改，本质上还是变量
//	//int num = 10;
//	//const int *p = &num;
//	//*p = 20;
//	//printf("%d\n", num);
//
//	/*int num = (1 , 2);
//	printf("1 or 2 : %d", num);*/
//
//	/*my_println("hello world!");*/
//
//	
//	/*assert(0);
//	printf("hello world!");*/
//	
//}

int main() 
{
	printf("%lf\n", 1.1 + 1.01);//c语言小数相加没问题
	int i = 0x44434241;
	char* p = &i;
	printf("%d\n", i);
	printf("%c\n", *(p+3));
	return 0;
}