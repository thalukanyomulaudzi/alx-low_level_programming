#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", lastDigit, n);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is zero\n", lastDigit, n);
	}
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", lastDigit, n);

	return (0);
}
