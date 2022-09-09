#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char c = 'A';

	while (c <= 'Z')
	{
		putchar(tolower(c));
		++c;
	}

	return (0);
}
