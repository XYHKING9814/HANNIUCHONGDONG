#include"stdio.h"
#include"windows.h"
int main()
{
	for (int i = 1; i <= 9; i++)
	{

		for (int j = 1; j <= i; j++)
		{
			int result = i*j;
			printf("%d*%d=%d  ", i,j,result);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}