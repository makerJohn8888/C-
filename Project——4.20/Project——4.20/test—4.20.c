#define _CRT_SECURE_NO_WARNINGS



#include<stdio.h>
#include<string.h>


//int mian()
//{
//	int x = 0;
//	do
//	{
//		printf("%2d\n", x++);
//	} while (x--);
//	return 0;
//}
//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int c = 0;
//
//	do
//	{
//		--c;
//		a = a - 1;
//	} while (a > 0);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = (a > b ? a : b);
//	while (1)
//	{
//		if (c % a == 0 && c % b == 0)
//		{
//			break;
//		}
//		c++;
//	}
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	printf("%d\n", i * a);
//	return 0;
//}
//#include<stdio.h>
//                               
//int mian()
//{
//	char arr[10001] = { 0 };
//	gets(arr);
//	int left = 0;
//	int right = strlen(arr) - 1 ;
//	while (left < right)
//	{
//		int tmp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//
//
//	return 0;
//}
#include<stdio.h>
#include<assert.h>

void reverse(char* left, char* right)
{
	while (left < right)
	{
		assert(left);
		assert(right);
		int tem = *right;
		*right = *left;
		*left = tem;
		left++;
		right--;
	}
}
int main()
{
	char arr[101] = { 0 };
	//ÊäÈë
	gets(arr);


	//ÄæÖÃ
	int len = strlen(arr);
	reverse(arr, arr+len-1);
	char* star = arr;
	while (*star)
	{
		char* end = star;
		while (*end != ' '&&*end!='\0')
		{
			end++;
		}
		reverse(star, end - 1);
		if (*end != '\0');
		      end++;
		star = end;
	}

	//Êä³ö
	printf("%s\n", arr);

	return 0;
}