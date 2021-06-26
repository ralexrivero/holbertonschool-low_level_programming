#include <stdio.h>
/**
 * main - print an integer
 * Description: print an integer by prototype
 * @n: integer to diplay
 * Return: zero
 */
void main(int n)
{
	int a, b;

	n = -765123;
	if (n < 0)
	{
		a = -n;
		putchar('-');
	}
	else
		a = n;
	b = a / 10000000000;
	if (b)
		putchar(b + '0');
	b = ((a / 1000000000) % 10);
	if (b)
		putchar(b + '0');
	b = ((a / 100000000) % 10);
	if (b)
		putchar(b + '0');
	b = ((a / 10000000) % 10);
	if (b)
		putchar(b + '0');
	b = ((a / 1000000) % 10);
	if (b)
		putchar(b + '0');
	b = ((a / 100000) % 10);
	if (b)
		putchar(b + '0');
	b = ((a / 10000) % 10);
	if (b)
		putchar(b + '0');
	b = ((a / 1000) % 10);
	if (b)
		putchar(b + '0');
	b = ((a / 100) % 10);
	if (b)
		putchar(b + '0');
	b = ((a / 10) % 10);
	if (b)
		putchar(b + '0');
	putchar((a % 10) + '0');
	putchar('\n');
}
