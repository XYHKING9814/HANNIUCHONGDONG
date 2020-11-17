#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int Fibonacci(int num)
{
	if (num < 3)
		return 1;
	else
		return Fibonacci(num - 1) + Fibonacci(num - 2);

}
int main()
{
	int n = 0;
	printf("你要计算的斐波那契数\n");
	scanf("%d", &n);
	printf("%d", Fibonacci(n));
	system("pause");
	return 0;
}
