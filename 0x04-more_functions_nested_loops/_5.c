#include <stdio.h>

/**
 * more_numbers - print numbers
 * Description: print 0 to 14 10 times
 * Return: zero
 */

void main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	if (j < 10)
	{
		putchar(j + '0');
	}
	else
	{
		putchar((j / 10) + '0');
		putchar((j % 10) + '0');
	}
	}
	putchar('\n');
	}
}
