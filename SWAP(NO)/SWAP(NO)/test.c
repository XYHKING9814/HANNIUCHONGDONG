#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int main()
{
	int a = 0, b = 0;
	printf("������Ҫ������������");
	scanf("%d %d", &a, &b);
	a = a - b;
	b = a + b;
	a = b - a;
	printf("%d %d",a, b);
	system("pause");
	return 0;
}