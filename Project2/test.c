#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//////{
//////	const int a = 10;
//////	a = 20;
//////	printf("%d\n", a);
//////	return 0;
//////
//////
#include<string.h>
//int main()
//{
//	char arr1[]= "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f','\0'};
//	//printf("%s\n",arr1);
//	//printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	
//	return 0;
//
//}
//int main()
//{
//	//printf("%s","(are you ok ??)");
//	//printf("abcd\\0afd");
//	//printf("\a");
	//printf("abcd\nefg");
//	//printf("%c\n", '\130');
//	//printf("%c\n", '\x66');
//	//printf("%d\n", strlen("abcd  ef"));
//	//printf("%d\n", strlen("c:\test\628\test.c"));
//
//	return 0;
//}
/*
int main()
{
	//ѡ������Ҫ�Ķ���
	int input = 0;
	printf("�����ҵ���֯\n");
	printf("Ҫ׬�ö�ö�Ǯ��?(1\\0)");
	scanf("%d", &input);
	if (input == 1)
	{
		printf("�õ�����׬�ö�Ǯ\n");
	}
	else if (input == 0)
	{
		printf("�ټ�������\n");
	}
	return 0;
}
*/
/*int main()
{
	//һ��ʼ���Ǵ�0��ʼ��Ȼ�������һ������
	int line = 0;
	//��ʼ����һѡ����ѭ��
	printf("�������ǵ���֯����ȥ��Ǯ\n");
	//һ��ʼ��ѭ������
	while(line<20000)
	{
		printf("������Ǯ:%d\n",line);
		line++;
	}
	//��һ�����
	if (line >= 20000)
	{
		printf("�͸��������\n");
	}
	//�ڶ������Ҳ����˵line<20000
	else
	{
		printf("�͸�����������\n");
	}
	return 0;
}
*/
//������������������ӣ�
///* int add(int x, int y)//add�Ǻ����� x��y�Ǻ�������
//{                       //������int���Ƿ��غ���ֵ
//	int z = 0;         //������Ǻ�����
//	z = x + y;         //ͨ�����������������㷨����
//	return z;
//}
// int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//���������ֱ
//	//������������
//	scanf("%d %d",&n1,&n2);
//	//���
//	/*int sum = n1 + n2; */
//	int sum = add(n1, n2);
//	//��ӡ
//	int t1 = 100;
//	int t2 = 300;
//
//	int ret=add(t1,t2);
//	printf("%d\n", sum);
//	return 0;
////}
//int main()
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	while (i < 10)
//	{	
//		printf("%d ", arr[i]);
//		i = i + 1;
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int num = 10;
//int main()
//{
//	int num = 1;
//	printf("num=%d\n",num);
//	//���ս����num=1������;��ȫ�ֱ����;ֲ�������ͬʱ��Ҳ����Ŀǰ��num���ֲ���������
//	return 0;
//
//
//}
//#include<stdio.h>
//
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	printf("I lost my cellphone!\n");
//	return 0;
//}
//
#include<stdio.h>
#include<string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'b','i','t' };
//	printf("%d\n", strlen(arr));
//	return 0;
//
//}
//#include<stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	scanf("%d %d", &a,&b);
//	int r=Max(a,b);
//	printf("%d\n",r);
//	return 0;
// }
//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d",&x);
//	if (x > 0)
//		y = -1;
//	else if (x ==0)
//		y = 0;
//	else
//		y = 1;
//	printf("%d\n",y);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	/*printf("abcd\nefg");*/
//	//printf("abcd\\0afd");
//      /*printf("%d\n", strlen("abcd  ef"));*/
//	int input = 0;
//	printf("�������ǵ���֯��\n");
//	printf("Ҫ׬�ö�ö�Ǯ�𣿣�1/0��");
//	scanf("%d",&input);
//	if (input==1)
//	{
//		printf("��ϲ���ܸ���׬���ö�Ǯ");
//	}
//	else if(input==0)
//	{
//		printf("�������ʰ��ʰȥ����");
//	}
//	return 0;
//
//}��
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int input = 0;
//	printf("Ҫ�������ǵ���֯��\n");
//	scanf("%d", &input);
//	if (input ==1)
//	{
//		printf("��������һ�����ǵ�ѡ��");
//	}
//	else if (input ==0)
//	{
//		printf("�������ʰ��ʰ���˰�");
//	}
//	return 0;
// }
#include<stdio.h>
#include<string.h>
//int main()
//{
//	float a = 7 / 2.0;
//	printf("%.1f\n",a);
//	return 0;
//
//}t
//int main()
//{
//	int a = 10;
//	int b = --a;
//	//b=a,a=a+1
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	arr[3]=20 ;
//	printf("%d\n", arr[3]);
//	return 0;
//
//}
#include<stdio.h>
#include<string.h>
//typedef unsigned int uint;
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 2;
//
//	return 0;
//
//}
//
//
//#include<stdio.h>
////extern int g_val;
////int main()
////{
////	printf("%d", g_val);
////	return 0;
////}
//define �ܶ��峣��
#define Num 100
//defineҲ�ܶ����
//�����в�����
#define ADD(x,y) ����x��+��y����//ADD�Ǻ����֣������x,y�Ǻ�Ĳ���
           //��Ĳ����������͵ġ�����ģ�����������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	&a;
//	/*printf("%p\n",&a);*/
//	int* p = &a;
//	//�����p����ָ�����
//	return 0;
//}
//
//struct stu
//{
//	//����Ϊ�ṹ���Ա
//	char name[20];
//	int age;
//	char telephone[40];
//	char sex[20];
//};
//void print(struct stu *pa)//���ִ�ӡҲ���Ե���ǰ���ǵõ���ַ
////Ҳ����*pa
//{
//	printf("%s %d %s %s\n", (*pa).name, (*pa).age, (*pa).telephone, (*pa).sex);//1
//	//->��һ��������
//	//->�����ǽṹ��ָ��ı���->�Ҳ���ǳ�Ա
//	printf("%s %d %s %s\n",pa->name,pa->age,pa->telephone,pa->sex);//2
//}
//int main()
//{
//	struct stu a = {"����",20,"110119120","��"};
//	//�����a�����Ի����κ���ĸ�����ǽṹ�����  .������ĳ�Ա����
//	//.���ڲ�����
//	printf("%s %d %s %s\n",a.name,a.age,a.telephone,a.sex);//3
//	print(&a);
//	//���ϱ��//1 2 3��ӡ�Ľ������һ����
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//����
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a, &b);
//	//����
//	int m = a / b;
//	int n = a % b;
//
//	//���
//	printf("%d %d\n", m,n);
//	return 0;
//}
#include<stdio.h>
#include<string.h>
//int main()
//{
	//int a = 6;
	//if (a < 10)
	//{
	//	printf("����˯��\n");
	//	printf("����������\n");
	//}
	//else
	//	printf("����˯��\n");
	//int age = 27;
	//scanf("%d", &age);
	//if (age < 10)
	//	printf("�ú÷�������\n");
	//else if (age >= 10 && age < 26)
	//	printf("�����������󣬺���\n");
	//else if (age >= 26 && age < 34)
	//	printf("����ζ����Ҳ�����\n");
	//else
//	//	printf("�Ҳ�ɶ���Ⱑ\n");
//
//	//return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//			printf("hahaha\n");
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	if (num % 2 == 1)
//
//		printf("����\n");
//	else
//		printf("ȥ��ĳ�ɧ��\n");
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ",i);
//		i++;
//	}
//	return 0;
//
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf(" %d ", i);
//		i++;
//
//	}
//	return 0;
//
//}in
//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	/*int n 1;*/
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//
//}
//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("�����պúù���\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ�պú���ˣ������\n");
//		break;
//	default:
//		printf("�ǲ�����������\n");
//		break;
//	
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++;
//			break;
//
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//
//	}
//	printf("m=%d,n=%d\n",m,n);
//	return 0;
//
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d",i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);*/

	//}
//	char password[20] = { 0 };
//	printf("����������:");
//	scanf("%s",password);
//	getchar();
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ������(Y/N):");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//	{
//
//		return 0;
//	}
//#include<stdio.h>
//	int main()
//	{
//		int arr[] = { 72,32,99,97,110,32,100,111,32,105,116,33 };
//		int i = 0;
//		int sz = sizeof(arr) / sizeof(arr[0]);
//		//sizeo(arr)����������ܴ�С����λ���ֽ�
//		//sizeof��arr[0]�������������Ԫ�صĴ�С
//		while (i < sz)
//		{
//			printf("%c", arr[i]);
//			i++;
//
//		}
//		return 0;
//	}
//	
//#include<stdio.h>
//int main()
//{
//	//��������
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d",&year, &month, &date);
//	//�������
//	printf("year=%d\n",year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n",date);
//	return 0;
//
//}
#include<stdio.h>
//int main()
//{
//	int id = 0;
//	float c = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//	scanf("%d;%f,%f,%f",&id , &c , &math , &eng);
//	printf("The each subject score of NO.%d is %.2f, %.2f, %.2f.\n",id ,c,math,eng);
//	return 0;
//}
//int main()
//{
//
//	int n = printf("Hello world!");
//	printf("\n%d\n",n);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d",&arr[i]);
//		i++;
//
//	}
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n",max);
//	return 0;
//}
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int max = 0;
//	scanf("%d",&max);
//	while (i < 4)
//	{
//		scanf("%d",&n);
//		if (n > max)
//		{
//			max = n;
//			i++;
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}
//int main()
//{
//	double r = 0.0f;
//	double v = 0.0f;
//	scanf("%lf",&v);
//	v = 4 / 3.0 * 3.1415926 * r * r * r;
//	printf("%.3lf\n",v);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int weight = 0;
//	int hight = 0;
//	scanf("%d %d", &weight, &hight);
//	float bmi= weight / (hight / 100.0) / (hight / 100.0);
//	printf("%.2f\n",bmi);
//
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//		printf("%d ", i);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			printf("��\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	    for (n=1; n<=3;n++)
//		{
//			ret = 1;
//
//			for (i = 1; i <= n; i++)
//			{
//				ret = ret * i;
//			}
//			sum = sum + ret;
//		}
//		printf("%d\n", sum);
//	return 0;
//
////}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr)/ sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz-1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] <k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//			printf("�ҵ����±���:%d\n",mid);
//		    break;
//
//	}
//	if (left > right)
//	{
//		printf("���������ʧ��\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		//int mid = (right + left) / 2;
//		int mid = right + (left - right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,����Ĵ�ӡ������%d\n",mid);
//			break;
//		}
//    }
//	if (left > right)
//	{
//		printf("�Ҳ����Ƕ���\n");
//	}
//	return 0;
//}
//int main()
//{
//	printf("hello world\n");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>//Sleep()��Դ�ļ�
//#include<stdlib.h>//system����cls������Դ�ļ�
//int main()
//{
//	char arr1[] = { "welcome to dongbei" };
//	char arr2[] = { "##################" };
//	
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//
//	return 0;
////}
//#include<stdio.h>
//#include<string.h>//�����strcmp��ͷ�ļ�
////�Ƚ������ַ����Ƿ���ȣ�����ʹ��==Ӧ��ʹ�ÿ⺯��strcmp
////�������ֵ=0����ʾ�����ַ�����ȣ�strcmp��
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password,"qwerdf")==0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
////		{
////			printf("�����������\n");
////		}
////	}
////	if (i == 3)
////	{
////		printf("�����������������˳�����\n");
////	}
////	return 0;
////}
//#include<stdio.h>
//#include <cstdlib>
//
//void menu()
//{
//	printf("**********************\n");
//	printf("****** 1.play ********\n");
//	printf("****** 0.exit ********\n");
//	printf("**********************\n");
//
//}
//void game()
//{
//	srand(100);
//	RAND_MAX;
//	int ret = rand(); //���������������������ֵ�
//	printf("%d\n",ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
////		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			 break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����,����ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>//rand������ͷ�ļ�
#include<time.h> //time������ͷ�ļ�

//////////////////void menu()
//////////////////{
//////////////////	printf("*******************\n");
//////////////////	printf("***** 1.play ******\n");
//////////////////	printf("***** 0.exit ******\n");
//////////////////	printf("*******************\n");
//////////////////}
//////////////////
//////////////////
//////////////////void game()
//////////////////{
//////////////////	 int guess = 0;
//////////////////	 int ret = rand ()%100+1;
//////////////////	 //printf("%d\n", ret);
//////////////////	 while (1)
//////////////////	 {
//////////////////		 printf("��д����Ҫ�µ�����:");
//////////////////		 scanf("%d", &guess);
//////////////////		 if (guess < ret)
//////////////////		 {
//////////////////			 printf("������˼����С��\n");
//////////////////		 }
//////////////////		 else if (guess > ret)
//////////////////		 {
//////////////////			 printf("������˼���´���\n");
//////////////////		 }
//////////////////		 else
//////////////////		 {
//////////////////			 printf("��Ʊ�н���\n");
//////////////////			 break;
//////////////////		 }
//////////////////	 }
//////////////////}
//////////////////
//////////////////
//////////////////int main()
//////////////////{
//////////////////	srand((unsigned int)time(NULL));
//////////////////	int input = 0;
//////////////////	do
//////////////////	{
//////////////////		menu();
//////////////////		printf("��ѡ��");
//////////////////		scanf("%d", &input);
//////////////////		switch (input)
//////////////////		{
//////////////////		case 1:
//////////////////			game ();
//////////////////			break;
//////////////////		case 0:
//////////////////			printf("�˳���Ϸ\n");
//////////////////			break;
//////////////////		default:
//////////////////			printf("ѡ���������ѡ��\n");
//////////////////			break;
//////////////////		}
//////////////////	} while (input);
//////////////////	return 0;
//////////////////}
//////
//////#include<stdio.h>
//////#include<string.h>
//////#include<stdlib.h>
//////
//////int main()
//////{
//////	char input[20] = { 0 };
//////	system("shutdown -s -t 60");
//////again:
//////	printf("��ע�����ĵ��Խ���60���ڹػ���������룺��������ȡ���ػ�\n");
//////	scanf("%s",input);
//////	if (strcmp(input, "������") ==0 )
//////	{
//////		system("shutdown -a");
//////	}
//////	else
//////	{
//////		goto again;
//////	}
//////	return 0;
//////}
//#include<stdio.h>
//int main()
//{
//	//char arr1[20] = { 0 };
//	char arr2[] = "hello world!";
//	/*strcpy(arr1, arr2);*/
//	memset(arr2, 'l', 5);
//	printf("%s\n", arr2);
//	return 0;
// }
//#include<stdio.h>
// 
//int get_max(int x, int y)
//{
//	return (x > y ?  x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//
//	int m = get_max(a, b);
//	printf("%d\n",m);
//	return 0;
//}
//void Swap(int* px, int* py)
//{
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//
//
//int main()
//{
//
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}
#include<stdio.h>
//void Swap(int* px, int* py)
//{
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ�� a=%d, b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("������ a=%d, b=%d\n", a, b);
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i < 200;i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf(" %d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <=2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//
//			}	
//		}
//	    if (year%400==0)
//		{
//			printf("%d ", year);
//		}
//		
//
//	}
//
//
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
#include<stdio.h>
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//
//
//	return 0;
//}
#include<string.h>

//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left<= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int ret=binary_search(arr,k,sz);
//
//	if (ret == -1)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ�С��Ϊ: %d\n",ret);
//
//	}
//	return 0;
//}
#include<stdio.h>
#include<string.h>
//#include "add.h"
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	int sum= Add(a, b);
//
//
//	printf("%d\n",sum);
//	return 0;
//}
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n /10);
//	}
//	printf("%d ", n % 10);
//}
//
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//    print(num);
//
//
//	return 0;
//}
#include<stdio.h>
#include<string.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	} 
//	return count;
//}


//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr [] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//
//
//int main()
//{
//	char arr[] = "abcd";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
#include<stdio.h>
#include<string.h>
//int fac(int n)//�ݹ�ʽ���
//{
//	if (n <= 1)
//		return 1;
//	else if (n > 1)
//		return n * fac(n - 1);
//	
//}
//int fac(int n)//����ʽ�������
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
#include<stdio.h>
#include<string.h>
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("ret=%d\n", ret);
//
//	return 0;
//}


#include<stdio.h>
//void  Swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//
//}
//
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//
//	//int tmp = 0;
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}


#include<stdio.h>
#include<string.h>

//int main()
//{
//	int i = 0;
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d ", i);
//
//	//	}
//	//}
//
//	return 0;
//}
#include<stdio.h>
#include<string.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d",&a,&b,&c);
//
//	while (c=a % b)
//	{
//		
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//
//
//	return 0;
//}
#include<stdio.h>
#include<string.h>
//
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year)
//		{
//			printf("%d ", year);
//
//		}
//	}
//
//	return 0;
//}
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y%400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//
//	}
//}
//
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year<= 2000; year++)
//	{
//		if (is_leap_year)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf ", sum);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i]> max)
//		{
//			max = arr[i];
//
//		}
//
//	}
//	printf("%d\n", max);
//	return 0;
//}
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//
//		for (j = 1; j <= i; j++)
//
//		printf("%d*%d=%-2d ", i,j,i*j);
//
//		/*Sleep(1000);
//		system("cls");*/
//		printf("\n");
//
//	}
//	return 0;
//}
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-2d  ", i, j, i * j);
//	              
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	print_table(n);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*for (i = 1; i <= sz; i++) //����ӡ
//	{
//		printf("%d ", arr[i]);
//	}*/
//	//����ӡ
//	for (i = sz - 1; i >= 0; i--)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//
//}
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,3,4,5,6,3,4,6,7 };
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,3,4,5,6,3,4,6,7 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n",i,j,&arr[i][j]);
//		}
//	}
//
//	return 0;
//}
#include<stdio.h>
#include<string.h>
//
//void bubble_sort(int arr[],int sz)
//{
//
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//	}
//}
//
//
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort (arr, sz);//ð������������������
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//
//}
//
//int main()
//{
//	int arr[][4] = { 0 };
//	//printf("%p\n", arr);
//	//printf("%p\n", arr + 1);
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
//
//	return 0;
//}
////////#include<stdio.h>
////////#include<stdlib.h>//rand������ͷ�ļ�
////////#include<time.h> //time������ͷ�ļ�
////////
////////void menu()
////////{
////////	printf("*******************\n");
////////	printf("***** 1.play ******\n");
////////	printf("***** 0.exit ******\n");
////////	printf("*******************\n");
////////}
////////
////////
////////void game()
////////{
////////	 int guess = 0;
////////	 int ret = rand ()%100+1;
////////	 printf("%d\n", ret);
////////	 while (1)
////////	 {
////////		 printf("��д����Ҫ�µ�����:");
////////		 scanf("%d", &guess);
////////		 if (guess < ret)
////////		 {
////////			 printf("������˼����С��\n");
////////		 }
////////		 else if (guess > ret)
////////		 {
////////			 printf("������˼���´���\n");
////////		 }
////////		 else
////////		 {
////////			 printf("��Ʊ�н���\n");
////////			 break;
////////		 }
////////	 }
////////}
////////
////////
////////int main()
////////{
	////////srand((unsigned int)time(NULL));
////////	int input = 0;
////////	do
////////	{
////////		menu();
////////		printf("��ѡ��");
////////		scanf("%d", &input);
////////		switch (input)
////////		{
////////		case 1:
////////			game ();
////////			break;
////////		case 0:
////////			printf("�˳���Ϸ\n");
////////			break;
////////		default:
////////			printf("ѡ���������ѡ��\n");
////////			break;
////////		}
////////	} while (input);
////////	return 0;
////////}
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("************************\n");
//	printf("**** 1.play  0.exit ****\n");
//	printf("************************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	/*printf("%d\n", ret);*/
//
//	while (1)
//	{
//		printf("������Ҫ�µ�����");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("���´��������²²�");
//		}
//		else if (guess < ret)
//		{
//			printf("����С�������²²�");
//		}
//		else
//		{
//			printf("��ϲ���н���");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("ѡ�����������ѡ��\n");
//					break;
//		}
//	} while (input);
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//void menu()
//{
//	printf("*******************\n");
//	printf("***** 1.play ******\n");
//	printf("***** 0.exit ******\n");
//	printf("*******************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("��д����Ҫ�µ����֣� ");
//		/*printf("\n");*/
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("���´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("����С��\n");
//		}
//		else
//		{
//			printf("���н���\n");
//			break;
//		}
//	}
//}
//
//
//
//int main()
//
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("��Ϸ����\n");
//			break;
//		default:
//			printf("�������ָ������������\n");
//			break;
//		}
//	} while (input);
//
//
//	return 0;
//}
#include<stdio.h>
#include<string.h>
//void reverse(char arr[])
//	{
//		int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//
//		left++;
//		right--;
//	}
//	}
//
//
//
//
//int main()
//{
//	char arr[] = {"abcdef"};
//	reverse(arr);
//	/*int sz = sizeof(arr) / sizeof(arr[0]);*/
//	
//	printf("%s\n", arr);
//		return 0;
//}
//int  my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse(char* str)
//{
//	char tem = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if(my_strlen(str+1)>=2)
//	reverse(str+1);
//	*(str + len - 1) = tem;
//
//}
//
//
//
//
//int main()
//{
//	char arr[] = { "abcdef" };
//	reverse(arr);
//	/*int sz = sizeof(arr) / sizeof(arr[0]);*/
//
//	printf("%s\n", arr);
//	return 0;
//}

//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//
//	return 0;
//}
//int  DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//
//	return 0;
//}
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//
//
//
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//
//	return 0;
//}
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n/10)+n%10;
//	}
//	else
//		return n;
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d", sum);
//	return 0;
//}
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d", sum);
//	return 0;
//}
//double  pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return  n * pow(n, k - 1);
//	}
//	else if(k==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0/ pow(n, -k);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double  ret = pow(n, k);
//	printf("%lf\n", ret);
//
//
//
//	return 0;
//}

//int main()
//{
//
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,6,8 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i]=arr2[i];
//		arr2[i]=tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d ", arr1[i]);
//	}
//	printf("\n");
//	 for (i = 0; i < sz;i++)
//	{
//		printf(" %d ", arr2[i]);
//	}
//	 printf("\n");
//	return 0;
//}

//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d ", arr[i]);
//	}
//	printf("\n");
//} 
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//    reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//
//
//	return 0;
//}


#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = a >> 1;
//	printf(" a=%d \n", a);
//	printf(" b=%d \n", b);
//
//	return 0;
// }

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("����ǰ�� a=%d b=%d  \n",a,b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������ a=%d b=%d  \n", a, b);
//
//	 
//	return 0;
//}
#include <stdio.h>

// ���������ж�����1�ĸ���
//int countSetBits(int num) 
//{
//	int count = 0;
//	while (num) 
//	{
//		count += num & 1; // ������λ��1��count��1
//		num >>= 1; // ����һλ������һλ��ֵ�Ƶ����λ
//	}
//	return count;
//}
//
//int main()
//{
//	int num;
//	printf("������һ��������");
//	scanf("%d", &num);
//
//	int bits = countSetBits(num);
//	printf("���� %d �洢���ڴ��еĶ����� 1 �ĸ���Ϊ��%d\n", num, bits);
//
//	return 0;
//}
//int countSetBits(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		count = count + (num & 1);
//		num >>=1;
//
//	}
//	return count;
// }
//int main()
//{
//	int num = 0;
//	printf("������һ��������");
//	scanf("%d", &num);
//	int bits = countSetBits(num);
//	printf("���� %d �洢���ڴ��еĶ����� 1 �ĸ���Ϊ�� %d\n", num, bits);
//	return 0;
//}
//int countSetBits(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		count = count + (num & 1);
//		num >>= 1;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	printf("\n");
//	printf("������������");
//	scanf("%d", &num);
//	int bits = countSetBits(num);
//	printf("���� %d �洢�ڶ�������1�ĸ���Ϊ��%d", num, bits);
//
//
//
//	return 0;
//}

//int main()
//{
//	//int a = 13;
//	//a |= (1 << 4);
//	//printf("a=%d\n", a);
//	//a &= (~(1 << 4));
//	//printf("a=%d\n", a);
//	/*int a = 10;*/
//	printf("%d\n", strlen(a = 10));
//
//
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(int ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//
//
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//
//
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	/*i = a++ || ++b || d++;*/
//
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	/*printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);*/
//
//
//	return 0;
//}

//
//int main()
//{
//	char a = 5;
//	char b = 126;
//	int  c = a + b;
//	printf("%d\n", c);
//
//
//	return 0;
//}

//
//#include<stdio.h>
//
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = fib(n);
//	printf("%d\n", m);
//
//
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j] = arr[i];
//              j++;
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//


//#include<stdio.h>
//
//int mian()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	int min = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d\n", max - min);
//
//	return 0;
//}

#include<stdio.h>
//
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch)==1)
//	{
//		
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else
//		{
//			printf("%c\n", ch + 32);
//		}
//		getchar();
//	}
//	
//
//
//	return 0;
//}

//
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch)==1)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("%c is aaaaaaaaaaaaaaaaaaaaaa\n");
//		}
//		else
//			printf("%c is  bbbbbbbbbbbbbbbbbbbb\n");
//	}
//	getchar();
//
//	return 0;
//}
//#include<math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			int k = (int)pow(10, j);
//			sum += (i % k) * (i / k);
//
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//
//
//
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*p = 1;
//		p++;
//
//	}
//
//
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	printf("%d\n", &arr[9] - &arr[0]);
//
//
//
//
//
//	return 0;
//}
////i/*nt my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}*/

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p---------%p \n", &arr[i],p+i);
//	}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int arr[10] = { 0 };
//	int* parr[10] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));
//
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 40;
//	int* parr[10] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//
//	return 0;
//
//}
//struct peo
//{
//	char name[20];
//	char age[5];
//	char tele[12];
//	char sex[5];
//	int high;
//};
//
//
//int main()
//{
//	struct peo p1;
//	return 0;
//}
//
//int main()
//{
//	int a = 5;
//	int c = ++a;
//	int b = ++c, c++, ++a, a++;
//	b+=a++ +c
//
//
//	return 0;
//}
//int countSetBits(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		count = count + (num & 1);
//		num >>=1;
//
//	}
//	return count;
// }
//int main()
//{
//	int num = 0;
//	printf("������һ��������");
//	scanf("%d", &num);
//	int bits = countSetBits(num);
//	printf("���� %d �洢���ڴ��еĶ����� 1 �ĸ���Ϊ�� %d\n", num, bits);
//	return 0;
//}
//int countSetBits( unsigned int num)
//{
//	int count = 0;
//	while (num)
//	{
//		count+= (num & 1);
//		num  >>= 1;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	printf("������������");
//	scanf("%d", &num);
//	int bits = countSetBits(num);
//	printf("����%d �洢���ڴ��ж�����1�ĸ���Ϊ�� %d\n", num, bits);
//
//
//	return 0;
//}
//int count_differ_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i=0;i<32;i++)
//	{
//		if((m >> i & 1) != (n >> i & 1))
//		count++;
//	}
//	return count++;
// }
//
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = count_differ_bit(m, n);
//	printf("%d\n", ret);
//
//
//	return 0;
//
//}
int count_differ_bit(int m, int n)
{
	int count = 0;
	int ret = m ^ n;
	while (ret)
	{
		ret = ret & (ret - 1);
		count++;
	}
	return count;
}


int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int ret = count_differ_bit(m, n);
	printf("%d\n", ret);


	return 0;
}