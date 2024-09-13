#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
///**
//一个整数储存在内存中的二进制中的1的个数
//*/
//int main() 
//{
//	int a = 0B10001010000010100000101000001011;
//	int b = 0x01;
//	int i = 0;
//	int code = 0;
//	
//	for (i = 0; i < 32; i++) 
//	{
//		if ((b << i & a) > 0) //"<<"and">"优先级高于&
//		{
//			code++;
//		}
//	}
//	printf("code = %d\n", code);
//	printf("a = %d\n", a);				//符号位不参与 "<<" ro ">>" 的运算；
//	printf("a^b = %d\n", a ^ 0x80000000);//符号位参与运算
//	return 0;
//}

//int main() 
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));//sizeof里面的表达式是不参与运算的
//	printf("%d\n", s);
//	return 0;
//}

//void test(char arr[]) 
//{
//	printf("%d\n", (int)sizeof(arr));
//	printf("%p\n", arr);
//}
////arr=数组首地址
//int main() 
//{
//	char arr[10];
//	test(arr);
//	return 0;
//}

//C语言的整数提升
int main() 
{
	char a = 0xb6;
	printf("%d", a);
	return 0;
}