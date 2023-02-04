#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

//函数（库函数和自定义函数）
//常用库函数：IO函数，字符操作函数，内存操作函数，时间/日期函数，数学函数，其他库函数
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
//	//strcpy--string copy--字符串拷贝
//	//strlen--string length---求字符串长度
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
//	//memset--内存  set--设置
//	char str[] = "Hello world!";
//	memset(str, '*', 3);
//	printf("%s\n",str);
//	return 0;
//}
//
//
//////自定义函数更为重要
////ret_typr fun_name(para1,*)   
////{
////    statement;//语句项
////}
////ret_type 返回类型
////fun_name 函数名
////para1  函数参数
////
////
//
//例
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
//void Swap1(int x, int y)  //--void--空--表示这个函数没有返回值
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
//	printf("a= %d b= %d\n",a,b);//交换前的值
//	Swap1(a, b);
//	/*tmp = a;
//		a = b;
//		b = tmp;*/
//	printf("a= %d b= %d\n", a, b);//交换后的值
//	return 0;
//}
//
//
//指针的使用
//int main()
//{
//	int a = 10;
//	int*pa = &a;//pa存a的地址，pa就是个指针变量
//	*pa=20;//*--解引用操作
//	printf("%d\n", a);
//	return 0;
//}
//
//
//
// void Swap1(int x, int y)  //--void--空--表示这个函数没有返回值
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
//	printf("a= %d b= %d\n",a,b);//交换前的值
//  Swap(a,b);//传值调用 
//	Swap2(&a, &b);//传址调用
// 传址调用：可以让函数和函数外边的变量建立起真正的练习，也就是函数内部可以直接操作函数外部得到变量
//如果想在函数内部操作函数外部的变量要使用传址调用
//*tmp = a;
//		a = b;
//		b = tmp;*/
//	printf("a= %d b= %d\n", a, b);//交换后的值
//	return 0;
//}  
//
//
//实际参数（实参）：真实传递给函数的参数,可以是常量，变量，表达式，函数等。    a,b;&a,&b
//形式参数（形参）：函数名后括号中的变量 
//当实参传递给形参时，形参其实是实参的一份临时拷贝，对形参的修改不会改变实参
//
//
// 用函数判断素数
//int is_prime(int n)  
//{
//	//是素数返回1，不是素数返回0
//	//2到n-1
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
//	//打印100-200之间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//
//用函数判断是否为闰年
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
//		//判断是否为闰年
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//
//
////函数实现二分查找
//int binary_search(int arr[], int k,int sz)   //本质上arr是一个指针
//{
//	
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;  //中间元素下标
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
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	//int k=17;
//	int ret = binary_search(arr, k,sz);  // arr--其实传递过去的时数组arr首元素的地址
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到啦函数是:> %d\n", ret);
//	}
//	return 0;
//}
//
//
////函数实现，每调用一次这个函数，num+
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
////函数的嵌套调用和链式访问（把一个函数的返回值作为另一个函数的参数）
//int main()
//{
//	int len = 0;
//	//1
//	//len = strlen("abc");
//	//printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc")); //链式访问
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));  //4321
//	return 0;
//}
//
//
////函数声明--先声明后使用，放在头文件中
//int Add(int x, int y);
////函数的定义--函数的具体实现
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//#include "Add.h"    //模块化编程
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);  //函数调用
//	printf("sum= %d\n", sum);
//	return 0;
//}
//
//
//
//
//递归--程序调用自身的编程技巧，自己调用自己
// //传递出去，再回归
// 递归存在限制条件，当满足这个限制条件时，递归便不再继续
// 每次递归调用之后越来越接受这个限制条件
// 
//int main()
//{
//	printf("hehe\n");
//	main();    //栈溢出
//	return 0;
//}
//
//
////接受一个整型值（无符号），按照顺序打印它的每一位。
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
//	//递归
//	print(num);
//	return 0;
//}
//
//
//编写函数不允许创建临时变量，求字符串的长度
// 
// 创建临时变量的方法
//int my_strlen(char* str) //str--是个指针变量，存的是第一个元素的地址
//{
////计算字符串的长度
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
//递归的方法
//int my_strlen(char* str) //str--是个指针变量，存的是第一个元素的地址
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
////大事化小
////my_strlen("hello");
////如果第一个字符不是‘\0’，那么字符串的长度就等于1+（my_strlen("ello")的长度）
////如果第二个字符不是‘\0’，那么字符串的长度就等于1+1+（my_strlen("llo")的长度）
////如果第三个字符不是‘\0’，那么字符串的长度就等于1+1+1+（my_strlen("lo")的长度）
////如果第四个字符不是‘\0’，那么字符串的长度就等于1+1+1+1+（my_strlen("o")的长度）
////如果第五个字符不是‘\0’，那么字符串的长度就等于1+1+1+1+1+（my_strlen("")的长度）--\0是字符串最后一个元素，作为结束标志，不显示，但存在
////则字符串长度=1+1+1+1+1+0
////
//int main()
//{
//	char arr[] = "hello";
//	//int len=strlen(arr);  //求字符串长度
//	//printf("len= %d\n", len); 
//	//
//	// 模拟实现了一个srelen函数
//	int len = my_strlen(arr);
//	//arr是数组，数组传参，传过去的不是整个元素，而第一个元素的地址
//	printf("len= %d\n", len);
//	return 0;
//	}
//
	//递归与迭代
//
//
//求n的阶乘
//
//
//循环的方式
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
//递归的方式
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
//	//ret = Fac1(n);  //循环的方式
//	ret = Fac2(n);  //递归的方式
//	printf("%d\n", ret);
//	return 0;
//}
//
//
//求第n个斐波那契数
//斐波那契数列
//1 1 2 3 5 8 13 21 34 55....
//
//描述第n个斐波那契数
// 
// 递归的方法
//int count = 0;
//int Fib(int n)
//{
//	//if (n == 3) //测试第三个斐波那契数计算的次数
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
// 迭代的方法
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
//汉诺塔问题
// A柱的n个盘子要移动多少次才能到C柱
//void Move(char x, char y)
//{
//	printf("%c --> %c\n", x, y);
//}
//void HNtower(int a, char A, char B, char C)//汉诺塔函数实施主体,A为初始柱,B为经由柱,C为目的柱
//{
//	if (a == 1)
//	{
//		Move(A, C);
//	}
//	else
//	{
//		HNtower(a - 1, A, C, B);//第一个递归式
//		Move(A, C);
//		HNtower(a - 1, B, A, C);//第二个递归式
//	}
//}
//int MoveNum(int a)
//{
//	if (a == 1)
//		return 1;
//	else
//		return 2 * MoveNum(a - 1) + 1;//为了对应递归主题，用递归式表示
//}
//int main()
//{
//	int a = 0;
//	printf("请输入你选择的层数:>");
//	scanf("%d", &a);
//	int Num = MoveNum(a);
//	printf("%d层需要移动%d步\n", a, Num);
//	printf("具体过程如下\n");
//	HNtower(a, 'A', 'B', 'C');//进入递归函数
//	return 0;
//}
//
//	
// 
//青蛙跳台阶 n个台阶，1次可以跳1个台阶，1次也可以跳2个台阶
//这只青蛙要跳到第n个台阶，有多少种跳法
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
	printf("请输入青蛙要跳的台阶数:> ");
	scanf("%d", &n);
	ret = jump(n);
	printf("有%d种跳法\n", ret);
	/*printf("count= %d\n", count);*/
	return 0;
}
//《剑指offer》--67道笔试题



