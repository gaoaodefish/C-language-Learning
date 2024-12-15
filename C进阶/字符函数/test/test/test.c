#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>


//int my_strlen(const char* str) //计次型求字符串长度
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//
//int my_strlen1(const char* str) //递归型求字符串长度
//{
//	assert(str != NULL);
//	if (*str != '\0') 
//	{
//		return 1 + my_strlen1(++str);
//	}
//}
//
//int main() 
//{
//	char arr[] = "abc";
//	int len = my_strlen1(arr);
//	printf("%d", len);
//	return 0;
//}
//字符串copy
//void my_strcpy(char* arr, char* str)
//{
//	assert(arr);
//	assert(str);
//	while (*str != '\0')
//	{
//		*arr = *str;
//		str++;
//		arr++;
//	}
//	*arr = *str;
//}
//int main() 
//{
//	char arr[20] = { 0 };
//	my_strcpy(arr, "hello");
//	printf("%s", arr);
//	return 0;
//}
//
////strcat——————字符串追加函数(连接)
//char* my_strcat(char* dest, const char* src) 
//{
//	char* ret = dest;
//	assert(dest);
//	assert(src);
//	while (*dest) 
//	{
//		dest++;
//	}
//	while (*dest++ = *src++);
//	return ret;
//}
//
//int main() 
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	//my_strcat(arr1, arr2);//字符串追加
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	char arr[20] = "abcd";
//	strcat(arr, arr);
//	printf("%s", arr);
//	return 0;
//}

//strcmp-----字符串长度比较函数
//int main() 
//{
//	char* p = "obc";
//	char* q = "xbcdef";
//	if (strcmp(p, q) > 0) 
//	{
//		printf("p > q\n");
//	}
//	else
//	{
//		printf("p < q\n");
//	}
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2) 
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main() 
//{
//	char* p = "abbb";
//	char* q = "abb";
//	int ret = my_strcmp(p, q);
//	if (ret > 0) 
//	{
//		printf("p > q\n");
//	}
//	else if (ret < 0)
//	{
//		printf("p < q\n");
//	}
//	else 
//	{
//		printf("p = q\n");
//	}	
//	return 0;
//}

//int main() 
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwer";
//	strncpy(arr1, arr2, 2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main() 
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 8);
//	printf("%s", arr1);
//	return 0;
//}

//int main() 
//{
//	char* p = "abcdef";
//	char* q = "abcqwert";
//	//int ret = strcmp(p, q);
//	int ret = strncmp(p, q, 3);
//	printf("%d\n", ret);
//	return 0;
//}

//strstr-----在一个字符串里找另外一个字符串
//char* my_strstr(const char* str1, const char* str2) 
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* cp = str1;
//	while (cp) 
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2) 
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0') 
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//int main() 
//{
//	char arr1[] = "abbbcdefabcdef";
//	char arr2[] = "bbc";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL) 
//	{
//		printf("没找到\n");
//	}
//	else 
//	{
//		printf("找到了=> %s", ret);
//	}
//	return 0;
//}

//strtok----字符串切割函数
//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";
//
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p)) 
//	{
//		printf("%s\n", ret);
//	}
//
//	/*printf("%s\n", strtok(arr, p));
//	printf("%s\n", strtok(NULL, p));
//	printf("%s\n", strtok(NULL, p));*/
//	return 0;
//}

//使用库函数的时候
//调用库函数失败时，都会设置错误码
//strerror-----把错误码翻译成错误信息
//#include <errno.h>
//
//int main() 
//{
//	/*printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
////	printf("%s\n", strerror(3));*/
////	return 0;
////}
//
//int main() 
//{
//	int arr[5] = {0};
//	return 0;
//}

int main() 
{
	double source = 1000000;
	for (int i = 0; i < 12; i++) 
	{
		source = source + source * 0.15;
	}

	printf("%.5f", source / 10000);
	return 0;
}