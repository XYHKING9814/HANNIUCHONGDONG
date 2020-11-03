#define NUM 10
#include"stdio.h"
#include"windows.h"
int main()
{
	int array[NUM] = { 10, 11, 12, 1, 2, 32, 34, 5, 999, 2 };
	int inter;
	for (int i = 0; i < 9; i++)
	{
		if (array[i+1] < array[i])
		{   
			inter = array[i + 1];
			array[i + 1] = array[i];
			array[i] = inter;
		}
	}
	printf("这10个数最大的为：%d\n", array[9]);
	system("pause");
	return 0;
}