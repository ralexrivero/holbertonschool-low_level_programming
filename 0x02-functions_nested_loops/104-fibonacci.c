#include <stdio.h>

/**
 * main - first Fibonacci numbers
 * Descriptions: starting with 1 and 2, newline
 * Return: zero when done
 */

int main(void)
{
	unsigned long int i_loop, fa, fb, fc;

	fa = 0;
	fb = 1;
	fc = 1;
	printf("%lu, ", fc);
	for (i_loop = 0; i_loop <= 95; i_loop++)
	{
		fa = fb;
		fb = fc;
		fc = fa + fb;
		printf("%lu, ", fc);
	}
	fc = fc + fb;
	printf("%lu\n", fc);
	return (0);
}
