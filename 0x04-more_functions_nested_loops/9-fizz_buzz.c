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
	int x;

	x = 1;
	while (x <= 100)
	{
		if (x % 15 == 0 && x % 3 == 0)
			printf("FizzBuzz\t");
		else if (x % 3 == 0)
			printf("Fizz\t");
		else if (x % 5 == 0)
			printf("Buzz\t");
		else
			printf("%d\t", x);
		x++;
	}
	printf("\n");
	return (0);
}
