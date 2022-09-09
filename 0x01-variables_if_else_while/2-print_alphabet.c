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
	int i = 0;

	while (i < 27)
	{
		putchar(tolower(ch[i]));
		i++;
	}

	return (0);
}
