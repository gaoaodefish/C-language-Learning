#define _CRT_SECURE_NO_WARNINGS 1
//test һЩ���Ե�С����
#include <stdio.h>
///**
//һ�������������ڴ��еĶ������е�1�ĸ���
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
//		if ((b << i & a) > 0) //"<<"and">"���ȼ�����&
//		{
//			code++;
//		}
//	}
//	printf("code = %d\n", code);
//	printf("a = %d\n", a);				//����λ������ "<<" ro ">>" �����㣻
//	printf("a^b = %d\n", a ^ 0x80000000);//����λ��������
//	return 0;
//}

//int main() 
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));//sizeof����ı��ʽ�ǲ����������
//	printf("%d\n", s);
//	return 0;
//}

//void test(char arr[]) 
//{
//	printf("%d\n", (int)sizeof(arr));
//	printf("%p\n", arr);
//}
////arr=�����׵�ַ
//int main() 
//{
//	char arr[10];
//	test(arr);
//	return 0;
//}

////C���Ե���������
//int main() 
//{
//	char a = 0xb6;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	char arr[10];
//	printf("%d\n", sizeof(arr));
//	printf("%p\n", arr);
//
//	return 0;
//}

//int main() 
//{
//	int values[5];
//	int* vp;
//
//	for (vp = &values[0]; vp < &values[5];) 
//	{
//		*vp++ = 0;
//	}
//
//	return 0;
//}

////�õݹ�дһ�������ַ������ȵĺ�����
//int my_strlen(char* str)
//{
//	int a = 1;
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else 
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//
//int main() 
//{
//	char c[] = "abcdef";
//	int len = my_strlen(c);
//	printf("long = %d\n", len);
//	return 0;
//}

////��ָ������õ��ַ����ĳ��ȣ�
////ָ������õ��м�Ԫ�ظ�����
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0') 
//	{
//		str++;
//	}
//	return (int)(str - start);
//}
//
//int main() 
//{
//	char c[] = "123456";
//	int len = my_strlen(c);
//	printf("len = %d", len);
//	return 0;
//}

#define N_Values 5

int main() 
{

	char c[N_Values];
	char* vp = NULL;
	for (vp = &c[N_Values]; vp > &c[0];)
	{
		*--vp = 1;
	}
	return 0;
}