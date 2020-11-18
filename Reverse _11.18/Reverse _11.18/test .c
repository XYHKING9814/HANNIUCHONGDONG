#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
void Reverse(char* chr,int len)
{
	char* left = chr;
	char* right = chr + len - 1;
	while (right > left)
	{
		char tmp = *right;
		*right = *left;
		*left = tmp;
		right--;
		left++;
	}
}
int main()
{
	char chr[] = "hello,qintan";
	int n = strlen(chr);
	Reverse(chr, n);
	printf("%s\n", chr);
	system("pause");
	return 0;
}