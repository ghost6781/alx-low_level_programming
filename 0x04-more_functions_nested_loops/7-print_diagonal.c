#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: integer number of times the character \ should print
 * if n is 0 or less, print \n only
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
