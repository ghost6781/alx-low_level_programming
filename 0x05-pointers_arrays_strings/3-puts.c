#include "main.h"

/**
 * _puts - a function that prints a string stdout.
 * @str: an input string variable pointing to type char
 * Return: Nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
