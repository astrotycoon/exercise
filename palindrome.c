#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool palindrome(char *string);
static bool check_palindrome(char *string, size_t len);
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s  argv[1]\n", argv[0]);
		exit(EXIT_SUCCESS);
	}	
	
	if (palindrome(argv[1]))
		printf("yes\n");
	else	
		printf("no\n");
	
	return 0;
}

bool palindrome(char *string)
{
	return (check_palindrome(string, strlen(string)));
}

static bool check_palindrome(char *string, size_t len)
{
	if (len <= 1)
		return true;
	else
		return (string[0] == string[len -1] 
		&& check_palindrome(string + 1, len - 2));
}
