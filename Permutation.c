/*
 *	用递归生成字符串的全排列
 */

#include	<stdio.h>
#include	<stdlib.h>
#include    <string.h>

void ListPermutations(char *string);
static void RecursivePermute(char *string, int k);
static void ExchangCharacters(char *string, int p1, int p2);

int main(int argc, char *argv[])
{
	char string[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	ListPermutations(string);
	return 0;
}

void ListPermutations(char *string)
{
	RecursivePermute(string, 0);
}

static void RecursivePermute(char *string, int k)
{
	int i;

	if (k == strlen(string))
	{
		printf("%s\n", string);
	}
	else
	{
		for (i = k; i < strlen(string); i++)
		{
			ExchangCharacters(string, k, i);
			RecursivePermute(string, k+1);
			ExchangCharacters(string, k, i);
		}
	}
}

static void ExchangCharacters(char *string, int p1, int p2)
{
	char temp;

	temp = string[p1];
	string[p1] = string[p2];
	string[p2] = temp;
}
