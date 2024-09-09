#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() 
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int temp = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz - 1; i++) 
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++) 
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (i = 0; i < sz; i++) 
	{
		printf("%d\n", arr[i]);
	}
	
	return 0;
}