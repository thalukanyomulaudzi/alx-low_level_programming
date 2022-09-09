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
	char ch = 'a';

	while (c <= 'Z')
	{
		putchar(tolower(c));
		++c;
	}
	while (ch <= 'z')
	{
		putchar(toupper(ch));
		++ch;
	}
	putchar('\n');

	return (0);
}
