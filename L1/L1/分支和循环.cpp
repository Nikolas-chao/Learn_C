#define _CRT_SUCURE_NO_WARNINGS  1

#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
//C������һ�� �ṹ�� �ĳ����������
//1.˳����� 
//2.��֧��䣨ѡ��ṹ��
// if
// switch
//3.ѭ�����
//while
//for
//do while
//��䣺C��������һ���ֺŸ�����
//;//�����--ֻ��һ���ֺ�
// 
// 
// //��֧���
//int main()  //if���
//{
//	//int age = 10;
//	////int age = 20; 
//	//if (age < 18)
//	//	printf("δ����\n");
//	//����֧
//// 
//	//int age = 10;
//	//int age = 20;
//	//if (age < 18)
//	//	printf("δ����\n");
//	//else
//	//	printf("����\n");
////
//// 	   ���֧
//	//int age = 10;
//	//if(age<18)
//	//	printf("δ����\n");
//	//else if(age>=18&&age<28)
//	//	printf("����\n");
//	//else if(age>28&&age<50)
//	//	printf("״��\n");
//	//else if (age >= 50 && age < 80)
//	//	printf("����\n");
//	//else  //���һ��else����ʡ��
//	//	printf("�ϲ���\n");
//	//if (age < 18)
//	//{
//	//	printf("δ����\n");
//	//	printf("������GTA5\n");
//	//}
//	//else
//	//{
//	//	 if (age >= 18 && age < 28)
//	//		printf("����\n");
//	//	else if (age > 28 && age < 50)
//	//		printf("״��\n");
//	//	else if (age >= 50 && age < 80)
//	//		printf("����\n");
//	//	else  //���һ��else����ʡ��
//	//		printf("�ϲ���\n");
//	//}
//
//	////else����
//	//int a = 0;
//	//int b = 2;
//	//if (a == 1)
//	//	if (b == 2)
//	//		printf("hehe\n");
//	//    else     
//	//		printf("haha\n")  //else�����������δƥ���if����ƥ��
// // //else
//	//int num = 4;
//	//	//if (num = 5)//=--��ֵ   ==�ж����
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
// //swith case���
//int main() 
//{
//	//int day = 0;
//	//scanf_s("%d", &day);
//	//switch (day)   //seitch(���ͱ��ʽ)
//	//{
//	//	case 1:  //case ���ͳ������ʽ
//	//		printf("����һ\n");
//	//		break;
//	//	case 2:
//	//		printf("���ڶ�\n");
//	//		break;
//	//	case 3:
//	//		printf("������\n");
//	//		break;
//	//	case 4:
//	//		printf("������\n");
//	//		break;
//	//	case 5:
//	//		printf("������\n");
//	//		break;
//	//	case 6:
//	//		printf("������\n");
//	//		break;
//	//	case 7:
//	//		printf("������\n");
//	//		break;
//	////	default:  //д���κ�һ��case��ǩ���Գ��ֵ�λ��
// ////��switch���ʽ��ƥ������case��ǩ��ֵʱ���ͻ�ִ��defauit�Ӿ��������
//	//		printf("�������\n");
//	//}
////
////
//	/*if (1 == day)
//		printf("����һ\n");
//	else if(2 == day)
//		printf("���ڶ�\n");
//	else if (3 == day)
//		printf("������\n");
//	else if (4 == day)
//		printf("������\n");
//	else if (5 == day)
//		printf("������\n");
//	else if (6 == day)
//		printf("������\n");
//	else if (7 == day)
//		printf("������\n");*/
////
//// 
//	//����
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
////ѭ�����
//int main()
//{
//
//	////whileѭ��
//	//int i = 1;
//	//while (i<=10)
//	//{
//	//	if (i == 5)
//	//		//break;//��ֹѭ��
//	//		continue;//��ֹ����ѭ��������ѭ����contiune����Ĵ��벻��ִ�У�ֱ����ת��whileѭ�����
//	//	printf("%d ", i);
//	//	i++;
//	//}
//
////
////
//	//int ch = getchar();//����һ���ַ�
//	//putchar(ch);//���һ���ַ�
//	//printf("%c\n", ch);
//	//int ch = 0;
//	//chrl+z 
//	//EPF--end of file�ļ�������־->-1
//	/*while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	//
//	//
//	//int ret = 0;
//	//int ch = 0;
//	//char password[20] = { 0 };
//	//printf("����������:>");
//	//scanf("%s", password);//�������룬�������password������
//	////scanf�ѿո�֮ǰ�Ķ���
//	////���»س�ʱ ��������ʣ��һ����/n"
//	////��ȡһ�¡�/n��
//	//while (ch= getchar()!='\n')
//	//{
//
//	//}
//	//printf("��ȷ��(Y/N):>");
//	//ret = getchar();// Y/N
//	//if (ret == 'Y')
//	//{
//	//	printf("ȷ�ϳɹ�\n");
//	//}
//	//else
//	//{
//	//	printf("ȷ��ʧ��\n");
//	//}
////
//////
////	int ch = 0;
////	while ((ch = getchar()) != EOF)
////	{
////		if (ch < '0' || ch>'9')  //ֻ�ܽ��� �����ַ�
////			continue;
////			putchar(ch);
////	}
////
////
//	//forѭ��
//	//for(���ʽ1�����ʽ2�����ʽ3)
//	//    ѭ����䣻
//	//���ʽ1Ϊ��ʼ�����֣����ڳ�ʼ��ѭ������
//	//���ʽ2Ϊ�����жϲ��֣������ж�ѭ��ʱ��ֹ
//	//���ʽ3Ϊ�������֣�����ѭ�������ĵ���
//	//int i = 0;
//	//for (i = 1; i <= 10; i++)   //��ʼ�����жϣ�����
//	//{
//	//	if (i == 5)
//	//	//break;//1 2 3 4//����/��ֹѭ��
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
// //   //������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
//	//}
////
////
////	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////	int i = 0;
////	for (i = 0; i <10; i++)  //i<=9
////	{
////		printf("%d ", arr[i]);
////	}
//////����for����ѭ�����Ʊ������á�ǰ�պ����䡱��д��
////	
////
//	//for (;;)   //forѭ���ĳ�ʼ�����жϡ�����������ʡ�ԣ������жϲ��ֱ�ʡ�ԣ��ж�������Ϊ��
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
//	//		//�ڲ�ѭ���ĳ�ʼ����Ҫ����ʡ��
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
//	//for (i = 0, k = 0; k = 0; i++, k++)  //k=0��kΪ�٣�ֻѭ��һ��
//	//	k++;
////
////
//	//do whileѭ��
//    //do
//	//	ѭ�����
//	//while(���ʽ)��
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
////goto���----����again:��λ�ã�ִ�н����������
////goto�����õ��÷�������ֹ����ĳЩ���Ƕ�׵Ľṹ
//int main()
//{
//	
//	printf("hello world\n");
//	goto again;
//	printf("���\n");
//	again:
//	printf("hh\n");
//
//	return 0;
//}
// 
// 
// ����
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60  
//	//system()---����ִ��ϵͳ����
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ�����1�����ڹػ���������룺��ã���ȡ���ػ�\n������:>");
//	scanf("%s", input);
//	if (strcmp(input, "���") == 0)//�Ƚ������ַ���--strcmp()����
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
// //���죺
int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60  
	//system()---����ִ��ϵͳ����
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ע�⣬��ĵ��Խ�����1�����ڹػ���������룺��ã���ȡ���ػ�\n������:>");
		scanf("%s", input);
		if (strcmp(input, "���") == 0)//�Ƚ������ַ���--strcmp()����
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
//��ϰ
//int main()
//{
//	////n�Ľ׳�
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
//	//1.//1��10�Ľ׳˵ĺ�
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
//	//2.// ��һ�����������в��Ҿ����ĳ������n����дint binsearch(int x,int v[],int n)
//	////��v[0]<=v[1]<=v[2]<=.....<=v[n-1]�������в���x.
//	//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//	int k = 16;
//	//	//дһ�����룬��arr���飨����ģ����ҵ�7
//	//	int i = 0;
//	//	int sz = sizeof(arr) / sizeof(arr[0]); //����Ԫ�ظ���
//	//	for (i = 0; i <= sz; i++)
//	//	{
//	//		if (k == arr[i])
//	//		{
//	//			printf("�ҵ��ˣ��±��ǣ� %d\n", i);
//	//				break;
//	//		}
//	//	    else if (i == sz)
//	//		printf("�Ҳ���\n");
//	//	}
//	//
//	//
//	//3.//���ֲ��ҷ�
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//��������
//	//int k = 7;
//	//int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	//int left = 0;//��ʾ���±�
//	//int right = sz - 1; //��ʾ���±�
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
//	//		printf("�ҵ������±��ǣ� %d\n", mid);
//	//		break;
//	//	}
//	//}
//	//if (left > right)
//	//	printf("�Ҳ���\n");
////
////
////////4.��д���룬��ʾ�ַ����������м���
////	//hello world
////	//##########
////	//h########d
////	//he######ld
////	//.....
////	char arr1[] = "hello world!";   //���һ��Ԫ���ǡ�\0��
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
////		Sleep(1000);  //#include<Windows.h>  //Sleep����--Sleep(ms)
////		system("cls");
////		left++;
////		right--;
////	}
////	printf("%s\n", arr2);
//
//
////5.//ģ���¼��ֻ��������������
//	//int i = 0;
//	//char password[20] = { 0 };
//	//for (i = 0; i < 3; i++)
//	//{
//	//	printf("����������:> ");
//	//	scanf("%s", password);
//	//	if (strcmp(password, "123456") == 0)//==���������Ƚ��ַ�����Ӧ��ʹ��strcmp����
//	//	{
//	//		printf("��½�ɹ�\n");
//	//		break;
//	//	}
//	//	else
//	//	{
//	//		printf("�������\n");
//	//	}
//	//}
//	//if(i==3)
//	//	printf("��¼ʧ��\n");
//		return 0;
//}
