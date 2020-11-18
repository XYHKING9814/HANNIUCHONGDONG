#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int Count(int num)
{
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		int th = num & 1;
		if (th ==1)
		{
			count++;
		}
		num = num >> 1;
	}
	return count;
}
int main()
{
	int num = 0;
	printf("请输入一个整数\n");
	scanf("%d", &num);	
	printf("%d\n", Count(num));
	system("pause");
	return 0;
}