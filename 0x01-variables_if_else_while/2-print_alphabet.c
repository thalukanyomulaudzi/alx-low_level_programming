#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (int i = 0; i < 26; i++)
	{
		putchar(tolower(ch[i]));
	}

	return (0);
}
