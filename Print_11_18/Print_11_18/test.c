#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
void  Print(int* arr ,int n)
{
	
	for (int i = 0; i < n; i++)
	{
		printf("%3d", *(arr + i));
	}
	printf("\n");
}
int main()
{
	
	int arr[] = { 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int len = sizeof(arr) / sizeof(*arr);
	Print(arr,len);
	system("pause");
	return 0;
}