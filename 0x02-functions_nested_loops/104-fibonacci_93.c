#include <stdio.h>

/**
 * main - first 98 Fibonacci numbers
 * Descriptions: starting with 1 and 2, newline
 * Return: zero when done
 * type: unsigned long int - only suppor the firs 93 values of 98
 * reached the maximum value: 12200160415121876738
 * expected value:
 * https://www.linkedin.com/in/ronald-rivero/
 * Twitter: @ralex_uy
 */

int main(void)
{
	float i_loop, fa, fb, fc;

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
