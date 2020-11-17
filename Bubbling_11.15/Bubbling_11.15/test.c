#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
//int Bubbling(int arr[])
//{
//	int tmp;
//	int len = sizeof(arr)/sizeof(arr[0]);
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = 0; j < len - i; j++)
//		{
//			if (arr[j] <arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int tmp;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i; j++)
		{
			if (arr[j] <arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	/*Bubbling(arr);*/
	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
		printf("%3d", arr[i]);
	system("pause");
	return 0;
}