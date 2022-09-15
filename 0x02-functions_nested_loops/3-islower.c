#include "main.h"
/**
 * _islower - see description
 * Description: checks for lowercase character
 * @c: the int character to check
 *
 * Return: 1 if c is lower, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
