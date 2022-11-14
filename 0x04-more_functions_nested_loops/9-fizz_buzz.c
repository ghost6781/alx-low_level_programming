#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 followed by new line
 * for multiples of 3 print fizz
 * for multiples of 5 print buzz
 * for multiples of botj 3 and 5 print fizzbuzz
 * each number separated by space
 * Return: 0
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");

	return (0);
}
