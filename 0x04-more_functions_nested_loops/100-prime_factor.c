#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of 012852475143
 * followed by new line
 *
 * Return: always 0.
 */

int main(void)
{
	printf("%lu", getMaxPrimeFactor(612852475143);
	return (0);
}

void getMaxPrimeFactor(long int num)
{
	int i, max;

	max = -1;

	while (num % 2 == 0)
	{
		max = 2;
		num = num / 2;
			/**
			 * this decrease num by dividing
			 */
	}
	for (i = 3; i <= sqrt(num); i = i + 2)
	{
		/**
		* i will increase by 2 to get only odd numbers
		*/
		while (num % i == 0)
		{
			max = i;
			num = num / i;
		}
	}
	if (num > 2)
	{
		max = num;
	}
	return (max);
}
