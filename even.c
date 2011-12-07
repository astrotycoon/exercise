#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool IsEven(unsigned n);
bool IsOdd(unsigned n);
int main(int argc, char *argv[])
{
	if (argc != 2)
		exit(0);

	if (IsEven(atoi(argv[1])))
		printf("偶数\n");
	else
		printf("奇数\n");

	return 0;
}	

bool IsEven(unsigned n)
{
	if (0 == n)
		return true;
	else
		return (IsOdd(n - 1));

}


bool IsOdd(unsigned n)
{
	return (!IsEven(n));
}
