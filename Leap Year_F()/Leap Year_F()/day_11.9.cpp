#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
int Leap_Year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return 1;
	}
	else{ return 0; }
	
}


int main()
{
	int y = 0;
	printf("������һ�����");
	scanf("%d", &y);
	if (Leap_Year(y))
		printf("��һ��Ϊ����\n");
	else
	printf("��һ�겻������\n");
	
	system("pause");
	return 0;
}