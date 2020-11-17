#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int DigitSum(int num)
{
	
	int sum = 0;
	if (num < 10)
		return num;
	else
	    sum = DigitSum(num/10) + num%10;
	return sum;
}
int main()
{
	printf("请输入一个大于0的整数");
	int n;
	scanf("%d", &n);
	printf("%d",DigitSum(n));
	system("pause");
	return 0;
}