#define _CRT_SECURE_NO_WARNINGS 1
//数组：一组相同类型的集合
//数组的创建:
// type_t  arr_name  [const_n]
//元素类型  数组名   [元素个数]
//const_n是一个常量表达式，用来指定数组大小
//
//如果不指定数组的确定大小，就必须初始化
//

#include<string.h>
#include<stdio.h>
//int main()
//{
//	int arr1[10] = {1,2,3};//不完全初始化，剩下的元素默认初始化为
//	char arr2[5]={'a','b'};
//	char arr3[5] = "ab"; // -->{'a','b','\0'}
//	char arr4[5] = { 'a',98 }; //这里的98对应的是ASCII码值
//	char arr5[] = "abcdef"; //没有指定大小时必须进行初始化，根据初始化决定数组的大小
//	printf("%d\n", strlen(arr5));   //6
//	//strlen 求字符串的长度，'\0'之气的字符长度，遇到‘/0’就停止
//	printf("%d\n", sizeof(arr5)); //7
//	//sizeof 计算arr5所占空间大小
//	//7个元素--char 7*1->7
//	return 0;
//}
//
//
//1.strlen和sizeof没有什么关联
//2.strlen 是求字符串长度的--只能针对字符串求长度--库函数-使用时需要引用头文件
//3.sizeof 计算变量、数组、类型的大小，单位是一字节，是操作符
//
//
//int main()
//{
//	char arr1[] = "abc";   //-->{'a','b','c','\0'};
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));  //4
//	printf("%d\n", sizeof(arr2));  //3
//	printf("%d\n", strlen(arr1));  //3
//	printf("%d\n", strlen(arr2));  //随机值--没有'\0'元素
//	return 0;
//}
//
//
//int main()
//{
//	//char arr[] = { "abcdef" }; //-->{'a','b','c','d','e','f','\0'}
//	////printf("%c\n", arr[3]);
//	//int i = 0;
//	//int len = strlen(arr);
//	//for (i = 0; i < len; i++) //strlen默认返回无符号整型
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//	//
//	//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//一维数组
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i,&arr[i]);  //-->打印地址%p
//	}
//	return 0;
//}
//数组在内存中是连续存放的  地址由低到高
//
//
//二维数组
//int main()
//{
//	//int arr1[3][4] = { {1,2,3},{4,5} };//三行四列的二维数组
//	//char arr2[4][5];
//	//int arr3[3][4] = { {1,2,3,4},{5,6,7,8} }; //初始化的时候行可以省略，列不可以省略
//	int arr[3][4] = { {1,2,3},{4,5} };
//	//1 2 3 0
//	//4 5 0 0
//	//0 0 0 0
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//
//
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]= %p\n",i,j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//
//
//数组作为函数参数--传参
//
//
//冒泡排序函数
//
//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的套数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据无序
//			}
//		}
//		if(flag == 1)  //本趟数据有序
//		{
//			break; //break只能用在跳出循环，这里的break是作为执行语句跳出外部的for循环
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);	
//	bubble_sort(arr,sz);
//	//arr是数组，我们对arr进行传参的时候，实际上传递的是数组arr首元素的地址-->&arr[0]
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	printf("%p\n",arr);
//	printf("%p\n", &arr[0]);
//	//数组名是数组首元素地址
//	printf("%d\n",* arr);
//	return 0;
//}
//数组名是数组首元素地址(两个例外）
//
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//1.sizeof(数组名）--数组名表示整个数组，sizeof（数组名）计算的是整个数组的的大小，单位是字节
	//2.&数组名--数组名代表整个数组，&（数组名）取出的是整个数组的地址
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);

	printf("%p\n", &arr); //&arr-->取出的是数组的地址，数组的起始地址
	printf("%p\n", &arr+1);
	return 0;
}