#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"windows.h"
 int num_diff_bit(int m, int n)
{
	 int tmp = m^n;
	 int count = 0;
	 for (int i = 0; i < 32; i++)
	 {
		 int th = tmp & 1;
		 if (th == 1)
		 {
			 count++;
		 }
		 tmp = tmp >>1 ;
	 }
	 return count;
}
 int main()
 {
	 int m = 0, n = 0;
	 printf("请输入m和n的值");
	 scanf("%d %d", &m, &n);
	 printf("%d", num_diff_bit(m, n));
	 system("pause");
	 return 0;
 }