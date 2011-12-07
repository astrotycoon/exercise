/*
 *	递归函数Cannonball,这个函数把金字塔的高度作为参数,并且返回它所包括的炮弹数量
 */

#include <stdio.h>
#include <stdlib.h>

int Cannonball(int n);	/* 参数为金字塔的高度 */

int main(int argc, char *argv[])
{
	int n = 0;

	printf("请输入金字塔高度:");
	while (scanf("%d", &n) == 1)
	{
		printf("总共%d个炮弹\n", Cannonball(n));
		puts("\n");
		printf("请输入下一个高度:\n");
	}

	return 0;
}

int Cannonball(int n)
{
	if (n == 1)
		return 1;
	return (n*n + Cannonball(n-1)); 
}	
