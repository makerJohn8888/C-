#define _CRT_SECURE_NO_WARNINGS

//调试阶段，debug或者release debug为程序员自己做调试，release则是为测试人员做调试的
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	//初始化赋值
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	//打印初始化数值
//	for (i = 0; i < 10; i++)
//	{
//		printf(" %d ", arr[i]);
//	}
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d \n", c);
//	return 0;
//}

//void test(int a[])
//{
//	
//}
//
//int main()
//{
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    test(arr);
//
//	return 0;
//}
///*void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	*/return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//
//
//	return  0;
//}

//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (j = 1; j <= n; j++)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//
//
//	return 0;
//}

//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//
//	return 0;
//}

//
//int main()
//{
//
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//		for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehehe\n");
//	}
//	return 0;
//}
#include<assert.h>
char*  my_strcpy(char* dest,  const char* src)
{
	char* ret = dest;
	assert(src != NULL);
	assert(dest != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}


int main()
{
	char arr1[20] = "XXXXXXXXXXXXXXXXX";
	char arr2[] = "hello word!";
	my_strcpy(arr1, arr2);
	printf("arr1=%s\n", arr1);
	printf("arr2=%s\n", arr2);


	return 0;

}

