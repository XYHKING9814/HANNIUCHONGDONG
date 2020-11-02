#include"stdio.h"
#include"windows.h"
int Prime(int x)
{
	int j,n=0;
	for (j = 2; j < x; j++)
	{
		if (x%j == 0){
			return 0;
		}
		if (j == x){
			return 1;
		}	
	}
	
}
int main()
{
	int i,x;
	for (i = 100; i <= 200; i++)
	{
		if (Prime(i))
			printf("%d", i);
	}
	system("pause");
	return 0;
}