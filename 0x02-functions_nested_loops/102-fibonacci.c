#include <stdio.h>

/**
 * main - first Fibonacci numbers
 * Descriptions: starting with 1 and 2, newline
 * Return: zero when done
 */

int main(void)
{
	long int i_loop, fa, fb, fc, fd;

	fa = 0;
	fb = 1;
	fc = 1;
	printf("%ld, ", fc);
	for (i_loop = 0; i_loop <= 47; i_loop++)
	{
		fa = fb;
		fb = fc;
		fc = fa + fb;
		printf("%ld, ", fc);
	}
	fc = fc + fb;
	printf("%ld\n", fc);
	return (0);
}
