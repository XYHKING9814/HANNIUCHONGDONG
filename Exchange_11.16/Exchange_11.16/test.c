#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int exchange(int arr[], int art[])
{
	for (int i = 0; i < 10; i++)
	{
		int tmp = arr[i];
		arr[i] = art[i];
		art[i] = tmp;
	}
	return 0;
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int art[10] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	exchange(arr, art);
	for (int i = 0; i < 10; i++)
	{
		printf("%3d",arr[i]);
	}
	printf("\n");
	for (int j = 0; j < 10; j++)
	{
		printf("%3d", art[j]);
	}
	printf("\n");
	system("pause");
	return 0;
}