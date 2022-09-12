#include <stdio.h>

/**
 * main - Print single digit numbers of bas 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sdigits;

	for (sdigits = 0; sdigits < 10; sdigits++)
		printf("%i", sdigits);
	putchar('\n');

	return (0);
}
