#include"stdio.h"
#include"windows.h"
int main()
{
	double a = 1, b = 2;
	double sum = 0, S = 0;
	while (b<=100)
	{
		sum = 1 / a - 1 / b;
		a = a + 2;
		b = b + 2;
		S = S + sum;
	}
	printf("这个表达式的结果为%lf\n", S);
	system("pause");
	return 0;
}