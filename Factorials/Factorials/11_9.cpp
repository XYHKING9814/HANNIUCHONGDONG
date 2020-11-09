#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int print(int Num)
{
	if (Num == 1||Num==0)
		return 1;
	else
		return print(Num - 1)*Num;
}

int main()
{
	printf("请输入你想要求的阶乘");
	int num;
	scanf("%d", &num);
	print(num);
	printf("您输入的数的阶乘为%d\n", print(num));
	system("pause");
	return 0;
}