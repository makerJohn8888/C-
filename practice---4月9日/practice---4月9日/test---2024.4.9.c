#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//获取一个整数二进制序列中奇数位和偶数位，分别打印二进制序列
//int main()
//{
//	int i ;
//	int num;
//	scanf("%d", &num);
//
//	//获取奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ",(num >> i ) & 1 );
//	}
//	printf("\n");
//	//获取偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//		printf("\n");
//
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("ret=%d", ret);
//
//
//
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (j == i)
//				{
//					printf("*");
//				}
//				else if (j + i == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//				
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) ==1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}
//int is_leap_years(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//
//
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int d = days[m];
//		if (is_leap_years(y)  && (m == 2))
//		{
//			d++;
//		}
//		printf("%d\n", d);
//	}
//
//	return 0;
//}
//int is_leap_years(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//
//
//
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int d = days[m];
//		if (is_leap_years(y) == 1 && (m = 2))
//		{
//			d++;
//		}
//		printf("%d", d);
//	}
//
//	return 0;
//}
//int is_leap_years(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//
//
//
//
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int d = days[m];
//		if ((is_leap_years(y)==1 )&& (m == 2))
//		{
//			d++;
//		}
//		printf("%d", d);
//	}
//
//
//
//	return 0;
//}
//
//int is_leap_years(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int d = days[m];
//		if ((is_leap_years(y) == 1) && (m == 2))
//		{
//			d++;
//
//		}
//		printf("%d\n", d);
//	}
//
//
//	return 0;
//
//}