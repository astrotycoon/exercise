/*
 *	求n的k次方
 */

#include <stdio.h>
#include <stdlib.h>

int RaiseIntToPower(int n, int k);

int main(int argc, char *argv[])
{
	int n = 0, k = 0;

	printf("请输入n和k:\n");

	while (scanf("%d %d", &n, &k) == 2)
	{
		printf("result = %d\n", RaiseIntToPower(n, k));
		printf("请输入下一对n和k:\n");
	}
}

int RaiseIntToPower(int n, int k)
{
	if (k == 0)
		return 1;
	else
		return (n * RaiseIntToPower(n, k-1));

}
