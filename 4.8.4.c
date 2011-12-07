/*
 * 《程序设计抽象思维》-- 4.8.4
 */

#include <stdio.h>
#include <stdlib.h>

int Fib(int n);

int main(int argc, char *argv[])
{
	int n = 0;
	printf("请输入你想知道的fib数列的下标数:\n");
	while (scanf("%d", &n) == 1)
	{
		printf("%d\n", Fib(n));
		printf("请输入另外一个下标数:\n");
	}

	return 0;
}

int Fib(int n)
{
	int *a = (int *)malloc(n * sizeof(int));
	int t0 = 0, t1 = 1;
	int i;
	printf("请输入t0和t1:\n");
	scanf("%d %d", &t0, &t1);
	a[0] = t0;
	a[1] = t1;
	if (n == 0)
		return a[t0];
	if (n == 1)
		return a[t1];
		
	for (i = 2; i <= n; i++)
	{
		a[i] = a[i-1] + a[i-2];
	}

	return a[n];
}
