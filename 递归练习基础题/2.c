/*
 *	求1*2*3... ...*n的值
 */

#include <stdio.h>
#include <stdlib.h>

int result(int n);

int main(void)
{
	int n = 0;
	printf("请输入n:\n");
	while (scanf("%d", &n) == 1)
	{
		printf("result = %d\n", result(n));
		printf("请输入下一个n:\n");
	}
	return 0;
}

int result(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return (n * result(n-1));

}
