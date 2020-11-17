#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int Nk(int n, int k)
{
	if (k == 1)
	{
		return n;
	}		
	else
	{
		return n*Nk(n,k-1);
	}	
}
int main()
{
	int num = 0, t = 0;
	printf("请输入底数n和整数k\n");
	scanf("%d %d", &num,&t);
	printf("%d\n", Nk(num, t));
	system("pause");
	return 0;
}