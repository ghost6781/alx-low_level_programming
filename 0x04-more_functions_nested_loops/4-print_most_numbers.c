#include "main.h"

/**
 * print_most_numbers - function that prints the numbers from 0 to 9
 * do not print 2 and 4
 * can only use _putchar twice in the code
 * Return: print_most_numbers
 */

void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
