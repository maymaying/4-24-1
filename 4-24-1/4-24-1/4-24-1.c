#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字， 
//例如：2 + 22 + 222 + 2222 + 22222
int main()
{
	int n = 0;
	int a = 0;
	int i = 0;
	int sum = 0;
	int tmp = 0;
	scanf("%d%d", &n, &a);
	for (i = 0; i < n; i++)
	{
		tmp = tmp * 10 + a;
		sum += tmp;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}



/*
//打印水仙花数
int main()
{
	int i = 0;
	for (i = 100; i <999; i++)
	{
		int sum = 0;
		int count = 0;
		int tmp = i;
		//1、确定几位数
		while (tmp != 0)
		{
			count++;
			tmp /= 10;
		}
		//求各个位上的数字
		tmp = i;
		while (tmp != 0)
		{
			sum += pow((double)(tmp % 10), count);
			tmp = tmp / 10;
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}
*/



/*
int main()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);
	//上半部分
	for (i = 0; i < line; i++)
	{
		//空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下半部分
	for (i = 0; i < line - 1; i++)
	{
		//空格
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//*
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
*/


/*
//编写程序数一下 1到 100 的所有整数中出现多少次数字9。
int main()
{
	int i = 0;
	int count = 0;//计数器
	for (i = 1; i < 101; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)  //else if (i / 10 == 9)  求的是有多少数有‘9’
		{
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
*/


/*
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i < 101; i++)
	{
		sum = sum + flag*1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	system("pause");
	return 0;
}
*/



/*
//0xcc cc cc cc  “栈”上的随机值     堆  malloc() 0xcdcdcdcdcd 
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//void Show(int *arr, int len)//指针接收地址 
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);//arr[i]相当于*(arr+i);指针的加法
//	}
//	printf("\n");
//}

void Show(int arr[10], int len)// int arr[]  int arr[3]  都能运行   为什么？
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	int i = 0;
	int tmp = 0;
	Show(arr1, 10);//数组名代表数组的首地址  sizeof
	Show(arr2, 10);
	for (i = 0; i < 10; i++)//[    )左闭右开
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	Show(arr1, 10);
	Show(arr2, 10);
	system("pause");
	return 0;
}


int main()
{
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	int i = 0;
	int tmp = 0;

	for(i = 0;i < 10;i++)
	{
	printf("%d ",arr1[i]);
	}
	printf("\n");
	for(i = 0;i < 10;i++)
	{
	printf("%d ",arr2[i]);
	}
	printf("\n");//打印
	
	for (i = 0; i < 10; i++)//[    )左闭右开
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}

	for(i = 0;i < 10;i++)
	{
	printf("%d ",arr1[i]);
	}
	printf("\n");
	for(i = 0;i < 10;i++)
	{
	printf("%d ",arr2[i]);
	}
	printf("\n");//打印

	system("pause");
	return 0;
}
*/

///**/不能嵌套