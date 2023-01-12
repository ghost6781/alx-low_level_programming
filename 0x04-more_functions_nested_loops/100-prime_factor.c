#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of 012852475143
 * followed by new line
 * where x is the largest prime factor
 * Return: always 0.
 */

int main(void)
{
	int x;
	long num = 612852475143;

	for (x = (int) sqrt(num); x > 2; x++)
	{
		if (num % x == 0)
		{
			printf("%d\n", x);
			break;
		}
	}
	return (0);
}
