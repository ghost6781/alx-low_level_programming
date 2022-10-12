#include "main.h"

/**
 * print_numbers - function that prints numbers
 * from 0 to 9, followed by a new line
 * Return: numbers
 */
void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
