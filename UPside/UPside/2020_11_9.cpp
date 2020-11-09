#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int print(int n_Num)
{
	if (n_Num < 10)
	{
		printf("%d", n_Num);
	}
	else
	{
		print(n_Num / 10);
		printf("%4d", n_Num % 10);
	}
	return  0;
}
int main()
{
	int num;
	printf("请输入一个数\n");
	scanf("%d", &num);
	print(num);
	system("pause");
	return 0;
}