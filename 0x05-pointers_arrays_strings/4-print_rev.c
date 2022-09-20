#include "main.h"
#include <string.h>

/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, length;

	length = strlen(str);

	/* 
	 * To traverse string from the end 
	 */
	for (i = lenght - 1; i >= 0; i--)
	{
		if str[i] == ' ')
		{
			/*
			* put the null character at the
			* position of space characters for
			* the next iteration.
			*/
			str[i] = '\0';
			/* 
			 * start on the next character
			 */
			_putchar("%s" , &(str[i]) + 1);
		}
	}

			/*
			*printing the last word
			*/
			_putchar("%s", str);
}
