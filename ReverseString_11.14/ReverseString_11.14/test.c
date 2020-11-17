#include"stdio.h"
#include"windows.h"
char* reverse_string(char *str)
{
	if (strlen(str) < 2)
	{
		return str;
	}
	char tmp = *str;
	int len = strlen(str) - 1;
	*str = *(str + len);
	*(str + len) = tmp;
	*(str + len) = '\0';
	reverse_string(str + 1);
	*(str + len) = tmp;
	return str;

}
int main()
{
	char Tmp[] = "hello,qintan!";
	printf("%s\n", reverse_string(Tmp));
	system("pause");
	return 0;

}