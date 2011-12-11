/*
 *	求1+2+3+... ...+n的值
 */

#include <stdio.h>
#include <stdlib.h>

int sum(int n);

int main(void)
{
	int n = 0;
	printf("请输入n:\n");
	while (scanf("%d", &n) == 1)
	{
		printf("result = %d\n", sum(n));
		printf("请在输入一个n:\n");
	}
		
	return 0;
}

int sum(int n)
{
	if (n == 1)
		return n;
	else
		return (n + sum(n-1));
}
