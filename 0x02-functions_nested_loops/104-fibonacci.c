#include <stdio.h>
/**
 * main - first 98 Fibonacci numbers
 * Descriptions: starting with 1 and 2, newline
 * Return: zero when done
 */
int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, add;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	for (i = 0; i < 92; i++)
	{
		add = fib1 + fib2;
		printf("%lu, ", add);

		fib1 = fib2;
		fib2 = add;
	}
	fib1_half1 = fib1 / 10000000000;
	fib2_half1 = fib2 / 10000000000;
	fib1_half2 = fib1 % 10000000000;
	fib2_half2 = fib2 % 10000000000;
	for (i = 93; i < 99; i++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;
		if (fib1_half2 + fib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (i != 98)
			printf(", ");
		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}