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
			printf("������ֵ��±�Ϊ��%d\n", mid);
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
	printf("�Ҳ���\n");
	return 0;
}

int main()
{
	int num=0;
	printf("������һ�����֣�");
	scanf("%d", &num);
	sunch(num);
	system("pause");
	return 0;
}