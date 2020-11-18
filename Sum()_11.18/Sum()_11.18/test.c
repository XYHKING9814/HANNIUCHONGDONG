#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int SUM(int n)
{
	int i=0;
	int sum = 0;
	int tmp = 2;
	while (i < 5)
	{
		sum = n + sum;
		n = n * 10 + tmp;
		i++;
	}
	return sum;
}
int main()
{
	int num = 0;
	printf("请输入一个1-9的整数\n");
	scanf("%d", &num);
	printf("%d\n", SUM(num));
	system("pause");
	return 0;
}