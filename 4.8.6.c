/*
 * <<程序设计抽象思维>> -- 4.8.6
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int DigitSum(unsigned int n);

int main(int argc, char *argv[])
{
	unsigned int n = 0;
	printf("请输入一个非负整数:\n");
	while (scanf("%u", &n) == 1)
	{
		printf("sum = %u\n", DigitSum(n));
		printf("请输入下一个非负整数:\n");
	}

	return 0;
}

unsigned int DigitSum(unsigned int n)
{
	if (n/10 == 0)
		return n;
	else
		return (n%10 + DigitSum(n/10));

}
