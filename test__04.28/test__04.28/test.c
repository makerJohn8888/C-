#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int test(const char* str)
//{
//	printf("test()\n");
//	return 0;
//}
//int main()
//{
//	int (*pf)(const char*) = test;
//	(*pf)("abcd");
//	test("abcd");
//	pf("abcd");
//
//	return 0;
//}
//
//int main()
//{
//	//(*(void(*)())0)();
//
//
//	return 0;
//}
//void menu()
//{
//	printf("************************\n");
//	printf("**** 1.add  2.sub ******\n");
//	printf("**** 3.mul  4.div ******\n");
//	printf("**** 0.exit       ******\n");
//	printf("************************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int  div(int x, int y)
//{
//	return  x / y;
//}
//
//void calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������2�����֣� ");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 0:
//			printf("�˳����������\n");
//			break;
//		default:
//			printf("����������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//
//
//	return 0;
//
//void menu()
//{
//	printf("************************\n");
//	printf("**** 1.add  2.sub ******\n");
//	printf("**** 3.mul  4.div ******\n");
//	printf("**** 0.exit       ******\n");
//	printf("************************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������2 ����;  ");
//	scanf("%d %d",&x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//
//}
//
//
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 0:
//			printf("�˳�����");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
