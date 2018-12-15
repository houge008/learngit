#include <stdio.h>
#include <stdlib.h>

int fac(int n)
{
	int i, sum;
	sum = 1;
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	return sum;
}

int main()
{
	int n,mul;
	printf("please input n:");
	scanf_s("%d", &n);
	mul=fac(n);
	//return mul;
	printf("fac(%d)=%d\n", n,mul);
	system("pause");
	return 0;
}
