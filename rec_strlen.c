/*	
 *	不能使用变量求出字符串长度--使用递归
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int strlen1(char *string);
static rec_strlen(char *string);

int main(int argc, char *argv[])
{
	printf("%d\n", strlen1("love"));
	return 0;
}

/* 简单情景: 当字符串是空字符串时 */
/* 子问题: 每次字符串指针前进一位 */

int strlen1(char *string)
{
	assert(string != NULL);
	rec_strlen(string);
}

static int rec_strlen(char *string)
{
	if (*string == '\0')
		return 0;
	else
		return (1 + rec_strlen(string + 1));

}
