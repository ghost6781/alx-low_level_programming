#include <stdio.h>
/**
* main - Prints all possible combinations of two two-digit numbers,
* range from 0-99.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int a, b;
/* where a is first number and b is second number */
	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			
			if (a == 98 && b == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	
	return (0);
}
