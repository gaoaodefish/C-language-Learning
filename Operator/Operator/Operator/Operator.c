#define _CRT_SECURE_NO_WARNINGS 1

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

//C���Ե���������
int main() 
{
	char a = 0xb6;
	printf("%d", a);
	return 0;
}