/*
 * << programming abstractions in C >> -- 4.8.9(递归实现字符串反序)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*char *Reverse(char *string);
static char *reverse(char *string, int len);
int main(int argc, char *argv[])
{
	char buffer[100] = {0};
	printf("请输入字符串:\n");
	gets(buffer);
	printf("result = %s\n", Reverse(buffer));

	return 0;	
}

char *Reverse(char *string)
{
	reverse(string, strlen(string));	
}

static char *reverse(char *string, int len)
{
	if (len <= 1)
		return string;
	else
	{
		char temp;
		temp = string[0];
		string[0] = string[len - 1];
		string[len - 1] = temp;
		return (reverse(string + 1, len - 2) - 1);
	}
}*/

/* 自己的想法，即递归到字符串某位，然后反序输出 */
/*void Reverse(char *string);
static void reverse(char *string, int string_len, int len);
int main(int argc, char *argv[])
{
	
	Reverse("aaaabbbbcccceeeeffffgggghhhh");
	putchar('\n');
	return 0;
}

void Reverse(char *string)
{
	reverse(string, strlen(string), 0);
}

static void reverse(char *string, int string_len, int len)
{
	if (len < string_len)
		reverse(string, string_len, len + 1);
	printf("%c", string[len]);
}*/

void Reverse(char *string);

int main(int argc, char *argv[])
{
	Reverse("program");
	putchar('\n');
	Reverse("moon");
	putchar('\n');
	Reverse("aaaabbbbccccddddeeeeffffgggg");
	putchar('\n');

	return 0;
}
void Reverse(char *string)
{
	if (*string == '\0')
		return;
	Reverse(string+1);
	printf("%c", string[0]);
}
