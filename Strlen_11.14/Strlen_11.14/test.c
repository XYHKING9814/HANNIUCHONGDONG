#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
/*int my_strlen(char *str)
{
	int len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return len;
}
int main()
{
	printf("%d\n", my_strlen("hello,qintan"));
	system("pause");
	return 0;
}*/
int my_strlen(char *str)
{
	if (*str == '\0')
		return 0;
	else
		return 1+my_strlen(str + 1);
}
int main()
{
	printf("%d\n", my_strlen("hello,qintan"));
	system("pause");
	return 0;
}