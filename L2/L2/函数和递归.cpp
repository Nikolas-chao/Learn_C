#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

//�������⺯�����Զ��庯����
//���ÿ⺯����IO�������ַ������������ڴ����������ʱ��/���ں�������ѧ�����������⺯��
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum=Add(a, b);
//	printf("sum= %d\n", sum);
//	return 0;
//}
//
//
//int main()
//{
//	//strcpy--string copy--�ַ�������
//	//strlen--string length---���ַ�������
//	char str1[] = "Hello World!";
//	char str2[40];
//	char str3[40];
//	strcpy(str2, str1);
//	strcpy(str3, "copy successful");
//	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
//	return 0;	
//}
//
//
//int main()
//{
//	//memset--�ڴ�  set--����
//	char str[] = "Hello world!";
//	memset(str, '*', 3);
//	printf("%s\n",str);
//	return 0;
//}
//
//
//////�Զ��庯����Ϊ��Ҫ
////ret_typr fun_name(para1,*)   
////{
////    statement;//�����
////}
////ret_type ��������
////fun_name ������
////para1  ��������
////
////
//
//��
//int get_max(int x, int y)
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
//	int max = get_max(a, b);
//	printf("max= %d\n", max);
//	max = get_max(100, 200);
//	printf("max= %d\n", max);
//	return 0;
//}
//
//
//
//void Swap1(int x, int y)  //--void--��--��ʾ�������û�з���ֵ
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp; 
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//
//	printf("a= %d b= %d\n",a,b);//����ǰ��ֵ
//	Swap1(a, b);
//	/*tmp = a;
//		a = b;
//		b = tmp;*/
//	printf("a= %d b= %d\n", a, b);//�������ֵ
//	return 0;
//}
//
//
//ָ���ʹ��
//int main()
//{
//	int a = 10;
//	int*pa = &a;//pa��a�ĵ�ַ��pa���Ǹ�ָ�����
//	*pa=20;//*--�����ò���
//	printf("%d\n", a);
//	return 0;
//}
//
//
//
// void Swap1(int x, int y)  //--void--��--��ʾ�������û�з���ֵ
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp; 
//}
//void Swap2(int* pa,int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa=*pb;
//	*pb=tmp;
// } 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//
//	printf("a= %d b= %d\n",a,b);//����ǰ��ֵ
//  Swap(a,b);//��ֵ���� 
//	Swap2(&a, &b);//��ַ����
// ��ַ���ã������ú����ͺ�����ߵı�����������������ϰ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�õ�����
//������ں����ڲ����������ⲿ�ı���Ҫʹ�ô�ַ����
//*tmp = a;
//		a = b;
//		b = tmp;*/
//	printf("a= %d b= %d\n", a, b);//�������ֵ
//	return 0;
//}  
//
//
//ʵ�ʲ�����ʵ�Σ�����ʵ���ݸ������Ĳ���,�����ǳ��������������ʽ�������ȡ�    a,b;&a,&b
//��ʽ�������βΣ����������������еı��� 
//��ʵ�δ��ݸ��β�ʱ���β���ʵ��ʵ�ε�һ����ʱ���������βε��޸Ĳ���ı�ʵ��
//
//
// �ú����ж�����
//int is_prime(int n)  
//{
//	//����������1��������������0
//	//2��n-1
//	int j = 0;
//	for (j = 2; j<=sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	//if (j == n)
//		return 1;
//}
//int main()
//{
//	//��ӡ100-200֮�������
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//
//�ú����ж��Ƿ�Ϊ����
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж��Ƿ�Ϊ����
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//
//
////����ʵ�ֶ��ֲ���
//int binary_search(int arr[], int k,int sz)   //������arr��һ��ָ��
//{
//	
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;  //�м�Ԫ���±�
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
//int main()
//{
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	//int k=17;
//	int ret = binary_search(arr, k,sz);  // arr--��ʵ���ݹ�ȥ��ʱ����arr��Ԫ�صĵ�ַ
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ���������:> %d\n", ret);
//	}
//	return 0;
//}
//
//
////����ʵ�֣�ÿ����һ�����������num+
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num= %d\n", num);
//	Add(&num);
//	printf("num= %d\n", num);
//	Add(&num);
//	printf("num= %d\n", num);
//	return 0;
//}
//
//
////������Ƕ�׵��ú���ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ�����
//int main()
//{
//	int len = 0;
//	//1
//	//len = strlen("abc");
//	//printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc")); //��ʽ����
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));  //4321
//	return 0;
//}
//
//
////��������--��������ʹ�ã�����ͷ�ļ���
//int Add(int x, int y);
////�����Ķ���--�����ľ���ʵ��
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//#include "Add.h"    //ģ�黯���
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);  //��������
//	printf("sum= %d\n", sum);
//	return 0;
//}
//
//
//
//
//�ݹ�--�����������ı�̼��ɣ��Լ������Լ�
// //���ݳ�ȥ���ٻع�
// �ݹ�������������������������������ʱ���ݹ�㲻�ټ���
// ÿ�εݹ����֮��Խ��Խ���������������
// 
//int main()
//{
//	printf("hehe\n");
//	main();    //ջ���
//	return 0;
//}
//
//
////����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//void print(int n)
//{
//	if (n > 9) 
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10); 
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//�ݹ�
//	print(num);
//	return 0;
//}
//
//
//��д��������������ʱ���������ַ����ĳ���
// 
// ������ʱ�����ķ���
//int my_strlen(char* str) //str--�Ǹ�ָ�����������ǵ�һ��Ԫ�صĵ�ַ
//{
////�����ַ����ĳ���
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//�ݹ�ķ���
//int my_strlen(char* str) //str--�Ǹ�ָ�����������ǵ�һ��Ԫ�صĵ�ַ
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
////���»�С
////my_strlen("hello");
////�����һ���ַ����ǡ�\0������ô�ַ����ĳ��Ⱦ͵���1+��my_strlen("ello")�ĳ��ȣ�
////����ڶ����ַ����ǡ�\0������ô�ַ����ĳ��Ⱦ͵���1+1+��my_strlen("llo")�ĳ��ȣ�
////����������ַ����ǡ�\0������ô�ַ����ĳ��Ⱦ͵���1+1+1+��my_strlen("lo")�ĳ��ȣ�
////������ĸ��ַ����ǡ�\0������ô�ַ����ĳ��Ⱦ͵���1+1+1+1+��my_strlen("o")�ĳ��ȣ�
////���������ַ����ǡ�\0������ô�ַ����ĳ��Ⱦ͵���1+1+1+1+1+��my_strlen("")�ĳ��ȣ�--\0���ַ������һ��Ԫ�أ���Ϊ������־������ʾ��������
////���ַ�������=1+1+1+1+1+0
////
//int main()
//{
//	char arr[] = "hello";
//	//int len=strlen(arr);  //���ַ�������
//	//printf("len= %d\n", len); 
//	//
//	// ģ��ʵ����һ��srelen����
//	int len = my_strlen(arr);
//	//arr�����飬���鴫�Σ�����ȥ�Ĳ�������Ԫ�أ�����һ��Ԫ�صĵ�ַ
//	printf("len= %d\n", len);
//	return 0;
//	}
//
	//�ݹ������
//
//
//��n�Ľ׳�
//
//
//ѭ���ķ�ʽ
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//�ݹ�ķ�ʽ
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//ret = Fac1(n);  //ѭ���ķ�ʽ
//	ret = Fac2(n);  //�ݹ�ķ�ʽ
//	printf("%d\n", ret);
//	return 0;
//}
//
//
//���n��쳲�������
//쳲���������
//1 1 2 3 5 8 13 21 34 55....
//
//������n��쳲�������
// 
// �ݹ�ķ���
//int count = 0;
//int Fib(int n)
//{
//	//if (n == 3) //���Ե�����쳲�����������Ĵ���
//	//{
//	//	count++;
//	//}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
// 
// 
// �����ķ���
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
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
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret= %d\n", ret);
//	/*printf("count= %d\n", count);*/
//	return 0;
//}
//
//
//
//
//��ŵ������
// A����n������Ҫ�ƶ����ٴβ��ܵ�C��
//void Move(char x, char y)
//{
//	printf("%c --> %c\n", x, y);
//}
//void HNtower(int a, char A, char B, char C)//��ŵ������ʵʩ����,AΪ��ʼ��,BΪ������,CΪĿ����
//{
//	if (a == 1)
//	{
//		Move(A, C);
//	}
//	else
//	{
//		HNtower(a - 1, A, C, B);//��һ���ݹ�ʽ
//		Move(A, C);
//		HNtower(a - 1, B, A, C);//�ڶ����ݹ�ʽ
//	}
//}
//int MoveNum(int a)
//{
//	if (a == 1)
//		return 1;
//	else
//		return 2 * MoveNum(a - 1) + 1;//Ϊ�˶�Ӧ�ݹ����⣬�õݹ�ʽ��ʾ
//}
//int main()
//{
//	int a = 0;
//	printf("��������ѡ��Ĳ���:>");
//	scanf("%d", &a);
//	int Num = MoveNum(a);
//	printf("%d����Ҫ�ƶ�%d��\n", a, Num);
//	printf("�����������\n");
//	HNtower(a, 'A', 'B', 'C');//����ݹ麯��
//	return 0;
//}
//
//	
// 
//������̨�� n��̨�ף�1�ο�����1��̨�ף�1��Ҳ������2��̨��
//��ֻ����Ҫ������n��̨�ף��ж���������
//
// 
int jump(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
	if (n <= 2)
		return n;
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("����������Ҫ����̨����:> ");
	scanf("%d", &n);
	ret = jump(n);
	printf("��%d������\n", ret);
	/*printf("count= %d\n", count);*/
	return 0;
}
//����ָoffer��--67��������



