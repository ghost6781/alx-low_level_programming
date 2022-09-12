#include <stdio.h>
/**
 * main - Print alphabet in lowercase, except e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'e' && alphabets != 'q')
			putchar(alphabets);
	}
	putchar('\n');

return (0);
}
