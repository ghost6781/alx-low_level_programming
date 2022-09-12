#include <stdio.h>

/**
 * main - Print single digits starting from 0 using putchar only
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numbs;

	for (numbs = 0; numbs < 10; numbs++)
		putchar((numbs % 10) + '0');
	putchar('\n');

	return (0);
}
