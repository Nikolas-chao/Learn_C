#define _CRT_SECURE_NO_WARNINGS 1
//���飺һ����ͬ���͵ļ���
//����Ĵ���:
// type_t  arr_name  [const_n]
//Ԫ������  ������   [Ԫ�ظ���]
//const_n��һ���������ʽ������ָ�������С
//
//�����ָ�������ȷ����С���ͱ����ʼ��
//

#include<string.h>
#include<stdio.h>
//int main()
//{
//	int arr1[10] = {1,2,3};//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ
//	char arr2[5]={'a','b'};
//	char arr3[5] = "ab"; // -->{'a','b','\0'}
//	char arr4[5] = { 'a',98 }; //�����98��Ӧ����ASCII��ֵ
//	char arr5[] = "abcdef"; //û��ָ����Сʱ������г�ʼ�������ݳ�ʼ����������Ĵ�С
//	printf("%d\n", strlen(arr5));   //6
//	//strlen ���ַ����ĳ��ȣ�'\0'֮�����ַ����ȣ�������/0����ֹͣ
//	printf("%d\n", sizeof(arr5)); //7
//	//sizeof ����arr5��ռ�ռ��С
//	//7��Ԫ��--char 7*1->7
//	return 0;
//}
//
//
//1.strlen��sizeofû��ʲô����
//2.strlen �����ַ������ȵ�--ֻ������ַ����󳤶�--�⺯��-ʹ��ʱ��Ҫ����ͷ�ļ�
//3.sizeof ������������顢���͵Ĵ�С����λ��һ�ֽڣ��ǲ�����
//
//
//int main()
//{
//	char arr1[] = "abc";   //-->{'a','b','c','\0'};
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));  //4
//	printf("%d\n", sizeof(arr2));  //3
//	printf("%d\n", strlen(arr1));  //3
//	printf("%d\n", strlen(arr2));  //���ֵ--û��'\0'Ԫ��
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
//	//for (i = 0; i < len; i++) //strlenĬ�Ϸ����޷�������
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
//һά����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i,&arr[i]);  //-->��ӡ��ַ%p
//	}
//	return 0;
//}
//�������ڴ�����������ŵ�  ��ַ�ɵ͵���
//
//
//��ά����
//int main()
//{
//	//int arr1[3][4] = { {1,2,3},{4,5} };//�������еĶ�ά����
//	//char arr2[4][5];
//	//int arr3[3][4] = { {1,2,3,4},{5,6,7,8} }; //��ʼ����ʱ���п���ʡ�ԣ��в�����ʡ��
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
//������Ϊ��������--����
//
//
//ð��������
//
//void bubble_sort(int arr[],int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//�����������������
//			}
//		}
//		if(flag == 1)  //������������
//		{
//			break; //breakֻ����������ѭ���������break����Ϊִ����������ⲿ��forѭ��
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);	
//	bubble_sort(arr,sz);
//	//arr�����飬���Ƕ�arr���д��ε�ʱ��ʵ���ϴ��ݵ�������arr��Ԫ�صĵ�ַ-->&arr[0]
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
//	//��������������Ԫ�ص�ַ
//	printf("%d\n",* arr);
//	return 0;
//}
//��������������Ԫ�ص�ַ(�������⣩
//
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//1.sizeof(��������--��������ʾ�������飬sizeof�������������������������ĵĴ�С����λ���ֽ�
	//2.&������--�����������������飬&����������ȡ��������������ĵ�ַ
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);

	printf("%p\n", &arr); //&arr-->ȡ����������ĵ�ַ���������ʼ��ַ
	printf("%p\n", &arr+1);
	return 0;
}