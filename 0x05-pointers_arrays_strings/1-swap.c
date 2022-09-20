#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: integer variable
 * @b: integer variable
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
