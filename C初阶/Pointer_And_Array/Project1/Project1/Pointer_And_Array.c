#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
////指针和数组
//int main() 
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//数组名是数组首元素的地址
//	printf("%p\n", &arr[0]);
//	return 0;
//}

////二级指针
//int main()
//{
//	int a1 = 10;			//a1，整形变量
//	int *pa = &a1;			//pa，一级指针，指向a1的地址
//	int* *ppa = &pa;		//ppa，二级指针，指向pa的地址
//	printf("%d\n", a1);		//打印a1的值
//	printf("%d\n", *pa);	//将pa解引用，得到a1的值，并打印
//	printf("%d\n", **ppa);	//将ppa进行解引用，第一次解引用得到pa的地址，pa指向a1的地址，所以第二次解引用得到a1的值
//	printf("%p\n", *ppa);	//我试着将ppa解引用一次，通过调试得到 *ppa的地址 == pa的地址， 也就是说再次对ppa解引用得到的将是pa指向地址的值，也就是a1的值
//
//	printf("%p\n", &a1);	//a1的地址（address of a1）
//	printf("%p\n", &(pa));	//不对pa进行解引用操作，取pa的地址，结果：pa的地址 ！= a1 的地址，属于创建的指针变量的地址
//	printf("%d\n", (int)sizeof(ppa));//指针类型的长度，为8byte
//	printf("%p\n", &(*ppa));//对ppa解引用一次，得到pa的地址
//	return 0;
//   }

//指针数组 —— 还是数组

int main() 
{
	int array[10];//整形数组 - 存放整形变量的指针
	char character[5];//字符数组 - 存放字符变量的指针
	//指针数组 - 存放指针的数组
	int* parr[5];//整形指针的数组
	int* pch[5];//字符指针的数组

	return 0;
}
