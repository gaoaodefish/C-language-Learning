#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
////ָ�������
//int main() 
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��������������Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]);
//	return 0;
//}

////����ָ��
//int main()
//{
//	int a1 = 10;			//a1�����α���
//	int *pa = &a1;			//pa��һ��ָ�룬ָ��a1�ĵ�ַ
//	int* *ppa = &pa;		//ppa������ָ�룬ָ��pa�ĵ�ַ
//	printf("%d\n", a1);		//��ӡa1��ֵ
//	printf("%d\n", *pa);	//��pa�����ã��õ�a1��ֵ������ӡ
//	printf("%d\n", **ppa);	//��ppa���н����ã���һ�ν����õõ�pa�ĵ�ַ��paָ��a1�ĵ�ַ�����Եڶ��ν����õõ�a1��ֵ
//	printf("%p\n", *ppa);	//�����Ž�ppa������һ�Σ�ͨ�����Եõ� *ppa�ĵ�ַ == pa�ĵ�ַ�� Ҳ����˵�ٴζ�ppa�����õõ��Ľ���paָ���ַ��ֵ��Ҳ����a1��ֵ
//
//	printf("%p\n", &a1);	//a1�ĵ�ַ��address of a1��
//	printf("%p\n", &(pa));	//����pa���н����ò�����ȡpa�ĵ�ַ�������pa�ĵ�ַ ��= a1 �ĵ�ַ�����ڴ�����ָ������ĵ�ַ
//	printf("%d\n", (int)sizeof(ppa));//ָ�����͵ĳ��ȣ�Ϊ8byte
//	printf("%p\n", &(*ppa));//��ppa������һ�Σ��õ�pa�ĵ�ַ
//	return 0;
//   }

//ָ������ ���� ��������

int main() 
{
	int array[10];//�������� - ������α�����ָ��
	char character[5];//�ַ����� - ����ַ�������ָ��
	//ָ������ - ���ָ�������
	int* parr[5];//����ָ�������
	int* pch[5];//�ַ�ָ�������

	return 0;
}
