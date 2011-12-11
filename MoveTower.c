#include <stdio.h>
#include <stdlib.h>

void MoveSingleDisk(char start, char finish);
void MoveTower(int n, char start, char finish, char temp);

int main(int argc, char *argv)
{
	MoveTower(3, 'A', 'B', 'C');
	return 0;
}

void MoveSingleDisk(char start, char finish)
{
	printf("%c -> %c\n", start, finish);
}

void MoveTower(int n, char start, char finish, char temp)
{
	if (n == 1)
	{
		MoveSingleDisk(start, finish);
	}
	else
	{
		MoveTower(n-1, start, temp, finish);
		MoveSingleDisk(start, finish);
		MoveTower(n-1, temp, finish, start);
	}
}
