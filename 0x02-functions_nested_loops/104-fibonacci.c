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
	long double i_loop, fa, fb;

	fa = 1;
	fb = 2;
	printf("%.0Lf, ", fa);
	for (i_loop = 0; i_loop <= 95; i_loop++)
	{
		fb = fb + fa;
		fa = fb - fa;
		printf("%.0Lf, ", fb);
	}
	fb = fb + fa;
	printf("%.0Lf\n", fb);
	return (0);
}
