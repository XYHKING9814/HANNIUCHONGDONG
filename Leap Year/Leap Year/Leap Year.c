#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"

int main()
{
	int y = 0;
	printf("������һ�����");
	scanf("%d", &y);
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
	{
		printf("��һ��Ϊ����");
	}
	else{ printf("��һ�겻������"); }
	system("pause");
	return 0;
}