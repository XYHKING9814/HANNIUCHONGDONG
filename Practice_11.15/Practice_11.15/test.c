#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int init(int arr[],int len)
{
	for (int i = 0; i < len; i++)
		arr[i] = 0;
	return 0;
}
int print(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%3d", arr[i]);
	}
	printf("\n");
	return 0;
}
int reverse(int arr[], int len)
{
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	return 0;
}
int main()
{
	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int n = sizeof(arr) / sizeof arr[0];
	reverse(arr, n);
	for (int i = 0; i < n; i++)
	{
		printf("%3d", arr[i]);
	}
	printf("\n");
	init(arr, n);
	print(arr, n);
	system("pause");
	return 0;
}