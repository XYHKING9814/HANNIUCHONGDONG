#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
void YangHui(int num)
{
	int arr[30][30] = { 1 };
	for (int i = 1; i < num; i++)
	{
		arr[i][0] = 1;
		for (int j = 1; j < num; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	printf("请输入你要打印的杨辉三角形的阶数\n");
	scanf("%d", &n);
	YangHui(n);
	system("pause");
	return 0;
}