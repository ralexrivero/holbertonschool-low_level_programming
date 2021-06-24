#include <stdio.h>

/**
 * main - first Fibonacci numbers
 * Descriptions: starting with 1 and 2, newline
 * Return: zero when done
 */

int main(void)
{
	long int i_loop, fibo;

	fibo = 1;
	for (i_loop = 1; i_loop <= 50; i_loop++)
	{
		fibo = fibo + fibo;
		printf("%ld, ", fibo);
	}
	putchar ('\n');
	return (0);
}
