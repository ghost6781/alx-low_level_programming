#include <stdio.h>

/**
* print_to_98 - prints all natural numbers
* from n to 98, followed by a new line
*
* @x: denotes nutural numbers.
*
* Return: nothing.
*/
void print_to_98(int x)
{
	if (x > 98)
	{
	for (; x > 98; x--)
		{
		printf("%d, ", x);
		}
	}
	else if (x < 98)
	{
		for (; x < 98; x++)
		{
		printf("%d, ", x);
		}
	}
	printf("%d\n", x);
}
