#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>


//int main()
//{
//	unsigned int i = 0;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//
//
//
//	return 0;
//}
//
//unsigned char i = 0;
//
//int main()
//{
//	for (i = 0; i < 255; i++)
//	{
//		printf("hello world!\n");
//	}
//
//
//	return 0;
//}

#include<string.h>

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") >= 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ�� %d\n",n);
//	printf("*pFloat��ֵΪ�� %f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num��ֵΪ�� %d\n", n);
//	printf("*pFloat��ֵΪ�� %f\n", *pFloat);
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello world");
//	}
//
//
//	return 0;
//
//
//int main()
//{
//	int num = 0;
//	printf("��д���������֣� \n");
//	scanf("%d", &num);
//	if (num % 2 == 0)
//	{
//		printf("%d ��ż��", num);
//
//	}
//
//	else
//	{
//		printf("%d ������", num);
//	}
//
//	return 0;
//}


int main()
{
	//����
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", arr + i);
	}
	//����


	//���

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}


