
berialx /
alx-low_level_programming
Public

Code
Issues
Pull requests
Actions
Projects
Wiki

More
alx-low_level_programming/0x04-more_functions_nested_loops/9-fizz_buzz.c
@berialx
berialx task nine
History
1 contributor
executable file 34 lines (27 sloc) 469 Bytes
#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100
 * And replace multiple of 3, 5, & both with fizz, buzz and fizzbuzz
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
			printf("FizzBuzz");

		else if ((n % 3) == 0)
			printf("Fizz");

		else if ((n % 5) == 0)
			printf("Buzz");
		else
			printf("%d", n);
		if (n == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}