#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"

int main()
{
	int y = 0;
	printf("请输入一个年份");
	scanf("%d", &y);
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
	{
		printf("这一年为闰年");
	}
	else{ printf("这一年不是闰年"); }
	system("pause");
	return 0;
}