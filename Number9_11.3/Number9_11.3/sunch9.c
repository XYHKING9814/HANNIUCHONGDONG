
#include"stdio.h"
#include"windows.h"
int main()
{
	int i = 0, n = 0;
	for (i = 1; i < 100; i++)
	{
		if (i % 10 == 9)
		{
			n++;
		}
	}
	printf("1-100所有出现9的数为%d\n", n);
	system("pause");
	return 0;
}