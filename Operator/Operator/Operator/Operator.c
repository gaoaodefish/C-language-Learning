#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
/**
һ�������������ڴ��еĶ������е�1�ĸ���
*/
int main() 
{
	int a = 0B00001010000010100000101000001011;
	int b = 0x01;
	int i = 0;
	int code = 0;
	
	for (i = 0; i < 32; i++) 
	{
		if (((b << i) & a) > 0) 
		{
			code++;
		}
	}
	printf("code = %d", code);
	return 0;
}