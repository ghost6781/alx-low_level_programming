#include "main.h"

/**
 * times_table - see description
 * Description: It prints 9 times table starting with 0
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int i, x, y;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			y = i * x;

			if ((y / 10) == 0)
			{
				if (x != 0)
					_putchar(' ');
				_putchar(y + '0');

				if (x == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
				if (x == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
