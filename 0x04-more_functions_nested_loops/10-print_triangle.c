#include "main.h"

/**
 * print_triangle - function prototype to print to print triangle
 * @size: size of the triangle
 * if size is 0 or less print only a new line
 * use characte # to print triangle
 * only use _putchar function to print
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
