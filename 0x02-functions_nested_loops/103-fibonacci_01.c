#include <stdio.h>

/**
 * main - Fibonacci until 4M
 * Description: starting 1, 2, 3, ...
 * Return: zero when done
 */

int main(void)
{
long int fa, fb, fc;

fa = 0;
fb = 0;
fc = 1;
while (fc <= 4000000)
{
fa = fb;
fb = fc;
fc = fa + fb;
if (fc <= 4000000)
	printf("%ld\n", fc);
}
	return (0);
}
