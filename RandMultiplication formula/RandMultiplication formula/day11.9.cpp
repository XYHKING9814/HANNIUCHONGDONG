#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int print(int num)
{
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			int result = i*j;
			printf("%2d*%2d=%2d", i, j, result);

		}
		printf("\n");
	}

	return 0;
}
int main()
{
	int n=1;
	printf("请输入打印乘法口诀的最高等级");
	scanf("%d",&n);
	print(n);
	system("pause");
	return 0;
}