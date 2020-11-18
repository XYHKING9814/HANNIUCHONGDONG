#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int num_EVNN(int num)
{
	for (int i = 0; i < 32; i = i + 2)
	{
		int tmp_e = num & 1;
		printf("%3d", tmp_e);
		num = num >> 2;
	}
	printf("\n");
	return 0;
}
int num_ODD(int num)
{       num = num >> 1;
	for (int i = 0; i < 32; i = i + 2)
	{
		int tmp_o;
		tmp_o = num & 1;
		printf("%3d", tmp_o);
		num = num >> 2;
	}
	printf("\n");
	return 0;
}
int main()
{
	int num = 0;	
	printf("请输入一个数字");
	printf("\n");
	scanf("%d", &num);
	num_EVNN(num);
	num_ODD(num);
	system("pause");
	return 0;
}