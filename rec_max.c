/* 利用递归求出一维数组中的最大值 */

#include <stdio.h>
#include <stdlib.h>
#define MAX(x,y) ((x) > (y) ? (x) : (y))

int main(int argc, char *argv[])
{
	int a[] = {0, 1000, 1, 2, 10, 3, 2, 8, 9, 10000};
	printf("%d\n", Max(a, sizeof(a) / sizeof(int)));
	return 0;
}

/* 最简情况: 数组只有一位元素 */
/* 子问题: 每次数组下标向前进一位 */
int Max(int a[], int n)
{
	if (n == 1)
		return a[n-1];
	else
		return MAX(a[0], Max(a+1, n-1));

}
