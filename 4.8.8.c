/*
 *	<< programming abstractions in C>> -- 4.8.8(求C(n,k)的递归实现)
 */

#include <stdio.h>
#include <stdlib.h>

int pascal(int n, int k);

int main(int argc, char *argv[])
{
	int n = 0, k = 0;

	printf("请输入n和k:\n");
	while (scanf("%d %d", &n, &k) == 2)
	{
		printf("result = %d\n", pascal(n, k));
		printf("请输入下一对n和k:\n");
	}

	return 0;
}

int pascal(int n, int k)
{
	if (n <= 1 || k == 0 || k == n)
		return 1;
	else
		return (pascal(n - 1, k - 1) + pascal(n - 1, k));

}

