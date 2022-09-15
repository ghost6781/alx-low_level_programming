#include "main.h"
/**
 * _isalpha - see description
 *@c: the int argument for the function
*Description: checksfor an alphabetic character.
*
* Return: 1 if c is a letter, lowercase or uppercase, otherwise 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
