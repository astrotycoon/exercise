/*
 * <<程序设计抽象思维>> -- 4.8.7
 */

#include <stdio.h>
#include <stdlib.h>

int DigitalRoot(unsigned int n);
static unsigned int DigitSum(unsigned int n);
int main(int argc, char *argv[])
{
	unsigned int n = 0;
	printf("请输入一个非负整数:\n");
	while (scanf("%u", &n) == 1)
	{
		printf("root = %u\n", DigitalRoot(n));
		printf("请输入下一个非负整数:\n");
	}
	return 0;
}

int DigitalRoot(unsigned int n)
{
	n = DigitSum(n);

	if (n / 10 == 0)
		return n;
	else
		DigitalRoot(n);

}

static unsigned int DigitSum(unsigned int n)
{
	if (n/10 == 0)
		return n;
	else
		return (n%10 + DigitSum(n/10));
}

/* 在4.8.6的基础上使用非递归实现 */
/*unsigned int DigitSum(unsigned int n);

int main(int argc, char *argv[])
{
	unsigned int n = 0;
	unsigned int root = 0;
	printf("请输入一个非负整数:\n");
	while (scanf("%u", &n) == 1)
	{
		while (1)
		{
			root = DigitSum(n);
			if (root / 10 == 0)
			{
				printf("root = %d\n", root);
				break;
			}
			n = root;
		}
		printf("请输入下一个非负整数:\n");
	}
	return 0;
}

unsigned int DigitSum(unsigned int n)
{
	if (n/10 == 0)
		return n;
	else
		return (n % 10 + DigitSum(n / 10));
}*/
