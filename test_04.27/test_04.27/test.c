#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//
//int main()
//{
//	//int arr[10] = { 0 };
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//	char* arr[5] = { 0 };
//	char* (*pc)[5] = &arr;
//
//	return 0;
//}
//���µ��÷�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(*p + i));
//	}
//
//	return 0;
//}
//�����÷�
// �����÷��������÷����Ǵ�ӡforѭ�������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//��������1
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//�ڶ��ַ���

//void print2(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print2(arr, 3, 5);
//
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//
//
//	printf("%p\n", &add);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//
//	int (*pf)(int, int) = &add;
//	int ret = (*pf)(2, 3);
//	printf("%d\n", ret);
//	return 0;
//}

int add(int x, int y)
{
	return x + y;
}
//���ú���ָ����м����̲���
int calc(int (*pf)(int, int))
{
	int a = 5;
	int b = 6;
	int ret = pf(a, b);
	printf("%d\n", ret);
}
int main()
{

	calc(add);

	return 0;
}