#include "main.h"
/**
 * jack_bauer - Entry point
 * n: arguement
 * Return: value of last digit
 */
void jack_bauer(void)
{
	int hrs = 0;
	int min = 0;
	int hrs_rem;
	int min_rem;

	while (hrs < 24)
	{
		while (min < 60)
		{
			hrs_rem = hrs % 10;
			_putchar(hrs / 10 + '0');
			_putchar(hrs_rem + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min_rem + '0');
			min++;
			_putchar('\n');
		}
		hrs++;
		min = 0;
	}
}
