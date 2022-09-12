#include <stdio.h>

/**
* main - Print lowercase alphabet in reverse
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char alphb;

	for (alphb = 'z'; alphb >= 'a'; alphb--)
	putchar(alphb);

	putchar('\n');

	return (0);
}
