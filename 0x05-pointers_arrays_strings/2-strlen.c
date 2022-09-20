#include "main.h"

/**
 * _strlen - returns the length of string.
 * @s: variable pointing to type char
 *
 * Return: len
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	return (l);
}
