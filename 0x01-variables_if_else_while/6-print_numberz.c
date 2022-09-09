#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0;
	char ch;

	while (i < 10)
	{
		ch = i + '0';
		putchar(ch);
		i++;
	}
	putchar('\n');

	return (0);
}
