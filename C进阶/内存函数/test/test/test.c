#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <ctype.h>

//int main() 
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) 
//	{
//		//printf("%s\n", strerror(errno));
//		perror("");
//		return 1;
//	}
//	return 0;
//}
//
//int main() 
//{
//	char ch = 'a';
//	//int ret = isdigit(ch);
//	int ret = islower(ch);
//	printf("%d\n", ret);
//	return 0;
//}

//memcpy----内存操作函数-----内存拷贝
//#include <assert.h>
//
//void* my_memcpy(void* dest, const void* src, size_t num) 
//{
//	assert(dest && src);
//	void* start = dest;
//	while (num--) 
//	{
//		*((char*)dest)++ = *((char*)src)++;
//	}
//	return (void*)start;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	for (int i = 0; i < 10; i++) 
//	{
//		printf("%d\n", *((int*)my_memcpy(arr2, arr1, 20) + i));
//	}
//	
//	return 0;
//}

int main() 
{
	int num = 5;
	while (num--) 
	{
		printf("%d\n", num);
	}
	return 0;
}
