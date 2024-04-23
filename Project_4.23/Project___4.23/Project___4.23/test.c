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
//	printf("n的值为： %d\n",n);
//	printf("*pFloat的值为： %f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为： %d\n", n);
//	printf("*pFloat的值为： %f\n", *pFloat);
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
//	printf("请写出您的数字： \n");
//	scanf("%d", &num);
//	if (num % 2 == 0)
//	{
//		printf("%d 是偶数", num);
//
//	}
//
//	else
//	{
//		printf("%d 是奇数", num);
//	}
//
//	return 0;
//}
//void  move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (((left<right)) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while (((left<right)) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tem = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tem;
//			left++;
//			right--;
//		}
//	}
//}
//
//
//int main()
//{
//	//输入
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	//调整
//	move_odd_even(arr,sz);
//
//	//输出
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[1000];
//	int arr2[1000];
//	//输入n个正数
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	//输入m个整个
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//合并打印
//	int j = 0;
//	int k = 0;
//	while (j < n && k < m)
//	{
//		if (arr1[j] < arr2[k])
//		{
//			printf("%d ", arr1[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d ", arr2[k]);
//			k++;
//		}
//	}
//	if (j < n)
//	{
//		for (; j < n; j++)
//		{
//			printf("%d ", arr1[j]);
//		}
//	}
//	else
//	{
//		for (; k < m; k++)
//		{
//			printf("%d ", arr2[k]);
//		}
//	}
//	return 0;
//}
//

//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[1000];
//	int arr2[1000];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", arr2[i]);
//	}
//	int j = 0;
//	int k = 0;
//	while (j < n && k < m)
//	{
//		if (arr1[j] < arr2[k])
//		{
//			printf("%d ", arr1[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d ", arr2[k]);
//			k++;
//		}
//	}
//	if (j < n)
//	{
//		for (; j < n; j++)
//		{
//			printf("%d ", arr1[j]);
//		}
//	}
//	else
//	{
//		for (; k < m; k++)
//		{
//			printf("%d ", arr2[k]);
//		}
//	}
//
//
//	return 0;
//}


int main()
{
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";
	 
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	if (p1 == p2)
	{
		printf("p1=p2\n");
	}
	else
	{
		printf("p1!=p2\n");

	}
	if (arr1[] == arr2[])
	{
		printf("arr1[]=arr2[]\n");
	}
	else
	{
		printf("arr1[]!=arr2[]\n");
	}
	return 0;

}
