#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//
//	return 0;
//} 

//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//printf("%p\n", &add);
//	int (*pf)(int, int) = &add;
//	//函数的地址存放在函数指针变量中
//
//	//int sum=(*pf)(2, 3);
//	//printf("%d\n", sum);
//
//
//	return 0;
//}
//
//
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf
//
//	return 0;
//}

int main()
{

	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a + 0));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(a[1]));
	printf("%d\n", sizeof(&a));
	printf("%d\n", sizeof(*&a));
	printf("%d\n", sizeof(&a + 1));
	printf("%d\n", sizeof(&a[0]));
	printf("%d\n", sizeof(&a[0] + 1));
	return 0;
}












