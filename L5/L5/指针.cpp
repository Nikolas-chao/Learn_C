#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//指针：指针是编程语言中的一个对象，利用地址，它的值直接指向存在电脑存储器中的另一个人地方的值，
//由于通过地址能找到所需的变量单元，可以说。地址指向该变量单元。
//因此，将地址形象化的称为“指针”，
//意思是通过它能找到以它为地址的内存单元。
//一个内存单元大小是一个字节
//编址：32位的有2^32个地址，每个地址有一个字节-->就有4G的空闲进行编址-->一个指针变量的大小就是4个字节
// 1Byte=1/1024KB=1/1024/1024MB=1/1024/1024/1024GB
// 1Byte=8bit-->一个字节有八个比特位
//64位就有2^64个地址-->有8G的空闲进行编址-->一个指针变量大小就是8个字节
//int main()
//{
//	int a = 10;
//	int* p = &a;  //p--指针变量，用来存放的地址 //int*--类型
//	//指针是一个变量，变量里存放的是地址-->指针是用来存放地址的变量
//	return 0;
//}
//int main()
//{
//	//printf("%d\n", sizeof(char*));   //8
//	//printf("%d\n", sizeof(short*));  //8
//	//printf("%d\n", sizeof(int*));    //8
//	//printf("%d\n", sizeof(double*)); //8
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;*/
//	char* pc =(char*) & a;
//	*pc = 0;
//	//char* pb = (char*) & a;
//	//printf("%p\n", pa);
//	//printf("%p\n", pb);
//	return 0;
//}
//指针类型的意义：
// 1> 指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//int*p    *p能够访问4个字节
//char*p   *p能够访问1个字节
//double*p *p能够访问8个字节
//
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc =(char*) & a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}
// 2>指针类型决定了，指针走一步可以走多远（指针的步长
//int*p: p+1-->4
//char*p: p+1-->1
//double*p: p+1-->8
//
//int main()
//{
//	int arr[10] = { 0 }; //arr--数组名--首元素地址
//	//int* p = arr; //p中存放的是首元素的地址
//	char* p = (char*)arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}
//
//野指针：指针指向的位置是不可知的（随机的、不可知的、没有明确限制的）
//int main()
//{
//	int a;//局部变量不初始化，默认是随机值
//	int* p;//1.局部的指针变量不初始化，就被初始化随机值
//	*p=20;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p++)=i;  //2.指针越界访问，会导致野指针的问题
//	}
//	return 0;
//}
// 
// 
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int*p=test();
//	*p = 20;   //3.指针指向的空间被释放
//	return 0;
//}
//
//
//int main()
//{
//	//int a = 10;
//	//int* p = &a;//初始化
//	//int* p = NULL;//NULL--用来初始化指针或者给指针复制
//	int a = 10;
//	int* pa = &a;
//	*pa = 20; //指针所指向的空间被释放
//	//
//	pa = NULL; //指针为空的时候不能使用
//	*pa = 10;
//	return 0;
//}
//
//
//指针运算
//int main()
//{
//	//指针+-整数
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p = p + 1; //p++;		
//	//}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p-=2; //p++;		
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n",& arr[9] - &arr[0]);  //指针减去指针得到的是中间的元素个数
//	//printf("%d\n", &arr[9] - &ch[0]); //error //必须是指向同一个空间
//
//	return 0;
//}
//
//
//int my_strlen(char*str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//指针的关系运算（比较大小）
//int main()
//{
//	float fl[5];
//	float* p;
//	for (p = &fl[5]; p > &fl[0];)
//	{
//		*--p = 0;
//	}
//
//	return 0;
//}
//
//指针和数组
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]); //数组名就是首元素地址（绝大部分情况下）
//	printf("%p\n", &arr[0]+1);
//	//1. &数组名--取地址数组名，数组名不是首元素地址，数组名代表整个数组
//	//&数组名-取出的是整个数组的地址
//	//2.sizeof(数组名）--数组名表示的是整个数组--sizeof（数组名）--计算的是在整个数组的大小
//	printf("%p\n", &arr); //取出的是arr整个数组的起始地址
//	printf("%p\n", &arr+1);
//	return 0;
//}
//
//
//int main()
//{
//	int arr[20] = { 0 };
//	int* p = arr;
//	int i = 0;
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p  ======   %p\n", p + i,& arr[i]);
//	}*/
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr[i]);
//		printf("%d ", *(p+i));  //数组可以通过指针来访问
//	}
//	return 0;
//}
//
//
//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa-->二级指针
//	//int*** pppa = &ppa;//pppa-->三级指针
//	//**ppa;
//	//printf("%d\n", **ppa); //10
//	**ppa = 20;
//	printf("%d\n", **ppa); //20
//	printf("%d\n", a);  //20
//	return 0;
//}
//
//
//指针数组--数组-存放指针的数组
//数组指针--指针
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//整型数组--存放整型
	//字符数组--存放字符
	//指针数组--存放指针
	//int arr[10];
	int* arr[3] = { &a,&b,&c }; //指针数组
	int i = 0;
	for(i = 0; i < 3; i++)
	{
		printf("%d\n", *arr[i]); //10 20 30
	}

	return 0;
}
