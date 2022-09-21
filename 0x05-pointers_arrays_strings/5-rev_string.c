#include "main.h"
#include <string.h>
/**
 * rev_string - this function reverses a string
 *@s: string to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, len, temp;
	/*
	 *strlen() gets the length of string
	 */
	len = strlen(s);

	/*
	 * Use for loop to iterate the string
	 */
	for (i = 0; i < len / 2; i++)
	{
		/**
		 * temp variable holds the string temporarily
		 */
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
