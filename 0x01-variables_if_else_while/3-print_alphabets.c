#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cases;

	for (cases = 'a'; cases <= 'z'; cases++)
		putchar(cases);
	for (cases = 'A'; cases <= 'Z'; cases++)
		putchar(cases);
		putchar('\n');

		return (0);
}
