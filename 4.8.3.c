/*
 *	欧几里得递归去最大公约数
 */

#include <stdio.h>
#include <stdlib.h>

int GCD(int x, int y);

int main(int argc, char *argv[])
{
	int x = 0, y = 0;
	printf("请输入x和y:\n");
	while (scanf("%d %d", &x, &y) == 2)
	{
		printf("%d 和 %d的最大公约数是%d\n", x, y, GCD(x, y));
		printf("请输入下一对x和y:\n");
	}

	return 0;
}

int GCD(int x, int y)
{
	if ((x % y) == 0)
		return y;
	return GCD(y, x % y);
}

