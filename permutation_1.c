/*
 *	用递归生成字符串的全排列(考虑字符重复)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void RecursionPermutation(char *string, int start, int end);
void ExchangCharacters(char *string, int p1, int p2);

int main(int argc, char *argv[])
{
	if (2 != argc)
	{
		fprintf(stderr, "%s <string>", argv[0]);
		exit(EXIT_FAILURE);
	}

	RecursionPermutation(argv[1], 0, strlen(argv[1]));

	return 0;
}

void RecursionPermutation(char *string, int start, int end)
{
	int i;

	if (start == end)
	{
		printf("%s\n", string);
	}
	else
	{
		for (i = start; i < end; i++)
		{
			if (string[i] == string[start] && (i != start))
			{		/* 为避免生成重复的排列，当不同位置的字符相同时不在交换 */
				continue;
			}
			ExchangCharacters(string, start, i);
			RecursionPermutation(string, start + 1, end);
			ExchangCharacters(string, start, i);
		}
	
	}
}

void ExchangCharacters(char *string, int p1, int p2)
{
	char temp;

	temp = string[p1];
	string[p1] = string[p2];
	string[p2] = temp;
}
