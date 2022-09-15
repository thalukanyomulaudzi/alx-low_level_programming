#include <stdio.h>
/**
 * print_to_98 - Entry point
 *@n: counting number
 */
void print_to_98(int n)
{
	if (n > 97)
	{
		while (n > 98)
		{
			printf("%d,", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d,", n++);
		}
		printf("%d\n", n);
	}
}
