#include <stdio.h>
#include <stdlib.h>

#define MinIndex 0
#define MaxIndex 12

int fib(int n);
static int additivesequence(int n, int t0, int t1);

int main(int argc, char *argv[])
{
	int i;

	printf("This program lists the Fibonacci sequence. \n");
	for (i = 0; i <= MaxIndex; i++)
	{
		printf("fib(%d)", i);
		if (i < 10)
			printf(" ");
		printf(" = %4d\n", fib(i));
	}
	return (0);
}

int fib(int n)
{
	return additivesequence(n, 3, 7);
}

static int additivesequence(int n, int t0, int t1)
{
//	if (n == 0)	return t0;
	if (n == 1)	return t1;
	return additivesequence(n - 1, t1, t0 + t1);
}
