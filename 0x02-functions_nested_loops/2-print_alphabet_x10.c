#include "main.h"
/**
* print_alphabet_x10 - check description
* Description: function uses _putchar
* to print alphabetin lowercases for 10 times
*
* Return: nothing
*/
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
