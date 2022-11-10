#include "main.h"
/**
 * print_line - writes a function that draws a straight  line in terminal
 * @n: interger number of times character _ should be printed
 * if n is 0 or less, the function should only print \n
 * Return: o
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
			_putchar(95);
		_putchar('\n');
	}
}
