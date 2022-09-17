#include "main.h"

/**
 * positive_or_negative - see description
 * @i: charcter to check value with the function
 * Description: positive_or__negative checks if
 * number is positive or negative or zero
 *
 * Return: 0 (Success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
