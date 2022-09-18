#include "main.h"
#include  <stdio.h>

/**
 * print_last_digit - displays the last digit of a number
 * @x: the int value whose last digit will be displayed
 *
 * Return: the last digit
 */
int print_last_digit(int x)
{
	int y;

	y = x % 10;

	if (y < 0)
		y *= -1;
	_putchar(y + '0');
	return (y);
}
