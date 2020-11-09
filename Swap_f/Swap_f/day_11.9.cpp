#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"


int swap(int* x, int* y)
{
	int t=*x;
	*x = *y;
	*y = t;
	return 0;

}


int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("%d %d", a, b);
	printf("\n");
	system("pause");
	return 0;
}