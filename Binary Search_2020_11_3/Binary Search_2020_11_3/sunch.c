#define _CRT_SECURE_NO_WARNINGS
#define NUM 10
#include"stdio.h"
#include"windows.h"
int sunch(int Num)
{
	int array[NUM] = { 0,1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int strat = 0;
	int end = (sizeof(array) / sizeof(array[0])) - 1;
	
	while (end >= strat)
	{
		int mid = (strat + end) / 2;
		if (array[mid] == Num)
		{
			printf("这个数字的下标为：%d\n", mid);
			return 0;
		}
		else if (array[mid] > Num)
		{
			end = mid - 1;
		}
		else
		{
			strat = mid + 1;
		}
	}
	printf("找不到\n");
	return 0;
}

int main()
{
	int num=0;
	printf("请输入一个数字：");
	scanf("%d", &num);
	sunch(num);
	system("pause");
	return 0;
}