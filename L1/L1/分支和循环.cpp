#define _CRT_SUCURE_NO_WARNINGS  1

#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
//C语言是一门 结构化 的程序设计语言
//1.顺序语句 
//2.分支语句（选择结构）
// if
// switch
//3.循环语句
//while
//for
//do while
//语句：C语言中由一个分号隔开的
//;//空语句--只是一个分号
// 
// 
// //分支语句
//int main()  //if语句
//{
//	//int age = 10;
//	////int age = 20; 
//	//if (age < 18)
//	//	printf("未成年\n");
//	//单分支
//// 
//	//int age = 10;
//	//int age = 20;
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else
//	//	printf("成年\n");
////
//// 	   多分支
//	//int age = 10;
//	//if(age<18)
//	//	printf("未成年\n");
//	//else if(age>=18&&age<28)
//	//	printf("青年\n");
//	//else if(age>28&&age<50)
//	//	printf("状年\n");
//	//else if (age >= 50 && age < 80)
//	//	printf("老年\n");
//	//else  //最后一个else可以省略
//	//	printf("老不死\n");
//	//if (age < 18)
//	//{
//	//	printf("未成年\n");
//	//	printf("不能玩GTA5\n");
//	//}
//	//else
//	//{
//	//	 if (age >= 18 && age < 28)
//	//		printf("青年\n");
//	//	else if (age > 28 && age < 50)
//	//		printf("状年\n");
//	//	else if (age >= 50 && age < 80)
//	//		printf("老年\n");
//	//	else  //最后一个else可以省略
//	//		printf("老不死\n");
//	//}
//
//	////else悬空
//	//int a = 0;
//	//int b = 2;
//	//if (a == 1)
//	//	if (b == 2)
//	//		printf("hehe\n");
//	//    else     
//	//		printf("haha\n")  //else和离它最近的未匹配的if进行匹配
// // //else
//	//int num = 4;
//	//	//if (num = 5)//=--赋值   ==判断相等
//	//	//{
//	//	//	printf("hh\n");
//	//	//}
//	//if(5==num)
//	//{
//	//	printf("hh\n");
//	//}
//	/*int i = 0;
//	while (i <= 100)
//		{
//			if (i % 2 == 1)
//				printf("%d ", i);
//			i++;
//		}*/
//	/*int i = 1;
//	while(i<=100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}*/
//	return 0;
//}
// 
// 
// //swith case语句
//int main() 
//{
//	//int day = 0;
//	//scanf_s("%d", &day);
//	//switch (day)   //seitch(整型表达式)
//	//{
//	//	case 1:  //case 整型常量表达式
//	//		printf("星期一\n");
//	//		break;
//	//	case 2:
//	//		printf("星期二\n");
//	//		break;
//	//	case 3:
//	//		printf("星期三\n");
//	//		break;
//	//	case 4:
//	//		printf("星期四\n");
//	//		break;
//	//	case 5:
//	//		printf("星期五\n");
//	//		break;
//	//	case 6:
//	//		printf("星期六\n");
//	//		break;
//	//	case 7:
//	//		printf("星期天\n");
//	//		break;
//	////	default:  //写在任何一个case标签可以出现的位置
// ////当switch表达式不匹配所有case标签的值时，就会执行defauit子句后面的语句
//	//		printf("输入错误\n");
//	//}
////
////
//	/*if (1 == day)
//		printf("星期一\n");
//	else if(2 == day)
//		printf("星期二\n");
//	else if (3 == day)
//		printf("星期三\n");
//	else if (4 == day)
//		printf("星期四\n");
//	else if (5 == day)
//		printf("星期五\n");
//	else if (6 == day)
//		printf("星期六\n");
//	else if (7 == day)
//		printf("星期日\n");*/
////
//// 
//	//例：
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
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m= %d, n= %d\n", m, n);
//
//	return 0;
//}
//
//
////循环语句
//int main()
//{
//
//	////while循环
//	//int i = 1;
//	//while (i<=10)
//	//{
//	//	if (i == 5)
//	//		//break;//终止循环
//	//		continue;//终止本次循环，本次循环中contiune后面的代码不再执行，直接跳转到while循环入口
//	//	printf("%d ", i);
//	//	i++;
//	//}
//
////
////
//	//int ch = getchar();//输入一个字符
//	//putchar(ch);//输出一个字符
//	//printf("%c\n", ch);
//	//int ch = 0;
//	//chrl+z 
//	//EPF--end of file文件结束标志->-1
//	/*while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	//
//	//
//	//int ret = 0;
//	//int ch = 0;
//	//char password[20] = { 0 };
//	//printf("请输入密码:>");
//	//scanf("%s", password);//输入密码，并存放再password数据中
//	////scanf把空格之前的读走
//	////按下回车时 缓冲区还剩余一个“/n"
//	////读取一下“/n”
//	//while (ch= getchar()!='\n')
//	//{
//
//	//}
//	//printf("请确认(Y/N):>");
//	//ret = getchar();// Y/N
//	//if (ret == 'Y')
//	//{
//	//	printf("确认成功\n");
//	//}
//	//else
//	//{
//	//	printf("确认失败\n");
//	//}
////
//////
////	int ch = 0;
////	while ((ch = getchar()) != EOF)
////	{
////		if (ch < '0' || ch>'9')  //只能接受 数字字符
////			continue;
////			putchar(ch);
////	}
////
////
//	//for循环
//	//for(表达式1；表达式2；表达式3)
//	//    循环语句；
//	//表达式1为初始化部分，用于初始化循环变量
//	//表达式2为条件判断部分，用于判断循环时终止
//	//表达式3为调整部分，用于循环条件的调整
//	//int i = 0;
//	//for (i = 1; i <= 10; i++)   //初始化；判断；调整
//	//{
//	//	if (i == 5)
//	//	//break;//1 2 3 4//跳出/终止循环
//	//	continue;
//	//	printf("%d ", i);
//	//}
////
////
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	if (5 == i)
//	//		printf("hh\n");
//	//	printf("HH\n");
// //   //不可在for循环体内修改循环变量，防止for循环失去控制
//	//}
////
////
////	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////	int i = 0;
////	for (i = 0; i <10; i++)  //i<=9
////	{
////		printf("%d ", arr[i]);
////	}
//////建议for语句的循环控制变量采用“前闭后开区间”的写法
////	
////
//	//for (;;)   //for循环的初始化、判断、调整都可以省略，但是判断部分被省略，判断条件恒为真
//	//{
//	//	printf("hh\n");
//	//}
//	//int i = 0;
//	//int j = 0;
//	//for (; i < 10; i++)
//	//{
//	//	
//	//	for (; j < 10; j++)
//	//	{
//	//		//内层循环的初始化不要随意省略
//	//		printf("hh\n");
//	//	}
//	//}
////
////
//	/*int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hh\n");
//
//	}*/
////
////
//	//int i = 0;
//	//int k = 0;
//	//for (i = 0, k = 0; k = 0; i++, k++)  //k=0则k为假，只循环一次
//	//	k++;
////
////
//	//do while循环
//    //do
//	//	循环语句
//	//while(表达式)；
//	//int i = 1;
//	//do
//	//{
//	//	if (5 == i)
//	//		//break;//1 2 3 4
//	//		continue;
//	//	printf("%d ", i);
//	//	i++;
//	//} 
//	//while (i <= 10);
//
//	return 0;	
//}
//
//
////goto语句----跳到again:的位置，执行接下来的语句
////goto语句最常用的用法就是终止程序某些深度嵌套的结构
//int main()
//{
//	
//	printf("hello world\n");
//	goto again;
//	printf("你好\n");
//	again:
//	printf("hh\n");
//
//	return 0;
//}
// 
// 
// 例：
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60  
//	//system()---用来执行系统命令
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在在1分钟内关机；如果输入：你好，就取消关机\n请输入:>");
//	scanf("%s", input);
//	if (strcmp(input, "你好") == 0)//比较两个字符串--strcmp()函数
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//		
//	return 0;
//}
//
// 
// 
// 
// 
// //改造：
int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60  
	//system()---用来执行系统命令
	system("shutdown -s -t 60");
	while (1)
	{
		printf("请注意，你的电脑将在在1分钟内关机；如果输入：你好，就取消关机\n请输入:>");
		scanf("%s", input);
		if (strcmp(input, "你好") == 0)//比较两个字符串--strcmp()函数
		{
			system("shutdown -a");
		}
		break;
	}

	return 0;
}
// 
// 
// 
//练习
//int main()
//{
//	////n的阶乘
//	//	int i = 0;
//	//	int n = 0;
//	//	int ret = 1;
//	//	scanf("%d", &n);
//	//	for (i = 1; i <= n; i++)
//	//	{
//	//		ret = ret * i;
//	//	}
//	//	printf("ret= %d\n", ret);
//	//
//	//
//	//1.//1到10的阶乘的和
//	//	int i = 0;
//	//	int n = 0;
//	//	int ret = 1;
//	//	int sum = 0;
//	//	for (n = 1; n <=3; n++)
//	//	{
//	//		ret = ret * n;
//	//		sum = sum + ret;
//	//	}
//	//	printf("sum= %d\n", sum);
//	//
//	//
//	//2.// 在一个有序数组中查找具体的某个数字n，编写int binsearch(int x,int v[],int n)
//	////在v[0]<=v[1]<=v[2]<=.....<=v[n-1]的数组中查找x.
//	//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//	int k = 16;
//	//	//写一个代码，在arr数组（有序的）中找到7
//	//	int i = 0;
//	//	int sz = sizeof(arr) / sizeof(arr[0]); //计算元素个数
//	//	for (i = 0; i <= sz; i++)
//	//	{
//	//		if (k == arr[i])
//	//		{
//	//			printf("找到了，下标是： %d\n", i);
//	//				break;
//	//		}
//	//	    else if (i == sz)
//	//		printf("找不到\n");
//	//	}
//	//
//	//
//	//3.//二分查找法
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//有序数组
//	//int k = 7;
//	//int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	//int left = 0;//表示左下标
//	//int right = sz - 1; //表示右下标
//
//	//while (left <= right)
//	//{
//	//	int mid = (left + right) / 2;
//	//	if (arr[mid] > k)
//	//	{
//	//		right = mid - 1;
//	//	}
//	//	else if (arr[mid] < k)
//	//	{
//	//		left = mid + 1;
//	//	}
//	//	else
//	//	{
//	//		printf("找到啦，下标是： %d\n", mid);
//	//		break;
//	//	}
//	//}
//	//if (left > right)
//	//	printf("找不到\n");
////
////
////////4.编写代码，演示字符从两边向中间汇聚
////	//hello world
////	//##########
////	//h########d
////	//he######ld
////	//.....
////	char arr1[] = "hello world!";   //最后一个元素是“\0”
////	char arr2[] = "############";
////	int left = 0;
////	//int right = sizeof(arr1) / (sizeof(arr1[0]) - 2);
////	int right = strlen(arr1) - 1;
////
////	while (left<=right)
////	{
////		arr2[left] = arr1[left];
////		arr2[right] = arr1[right];
////		printf("%s\n", arr2);
////		Sleep(1000);  //#include<Windows.h>  //Sleep函数--Sleep(ms)
////		system("cls");
////		left++;
////		right--;
////	}
////	printf("%s\n", arr2);
//
//
////5.//模拟登录，只能输入三次密码
//	//int i = 0;
//	//char password[20] = { 0 };
//	//for (i = 0; i < 3; i++)
//	//{
//	//	printf("请输入密码:> ");
//	//	scanf("%s", password);
//	//	if (strcmp(password, "123456") == 0)//==不能用来比较字符串，应该使用strcmp函数
//	//	{
//	//		printf("登陆成功\n");
//	//		break;
//	//	}
//	//	else
//	//	{
//	//		printf("密码错误\n");
//	//	}
//	//}
//	//if(i==3)
//	//	printf("登录失败\n");
//		return 0;
//}
