#include"stdio.h"
#include"windows.h"
int main()
{
	printf("A,B,C,D�ֱ���0,1,2,3��ʾ\n");
	int peo[4] = { 1, 1, 1, 1 };
	int i = 0;
	for ( i = 0; i < 4; i++)
	{
		peo[i] = 0;
		if ((peo[0] != 0) + (peo[2] == 0) + (peo[3] == 0) + (peo[3] != 0) == 3)
			break;
		else
			peo[i] = 1;
	}
	printf("������%c", 'A'+i);
	system("pause");
	return 0;
}