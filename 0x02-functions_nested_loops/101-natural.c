#include <stdio.h>

/**
 * main - list all natura numbers below 10
 * that are multiples of 3 or 5,
 * we get 3, 5, 6, and 9.
 * The sum of these multiples is 23.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, sum = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 5) == 0 || (x % 3) == 0)
			sum += x;
	}
	printf("%d\n", sum);

	return (0);
}
