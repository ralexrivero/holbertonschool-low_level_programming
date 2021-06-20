#include <stdio.h>
/**
*main - print alphabet
*
 *Description: display alphabet
 *Return: 0 if the programming ran to completion
 */

int main(void)
{
int i, r;

	for (i = 0; i <= 99; i++)
	for (r = i + 1; r <= 99; r++)
	{
	putchar((i / 10) + '0');
	putchar((i % 10) + '0');
	putchar(32);
	putchar((r / 10) + '0');
	putchar((r % 10) + '0');
	if (i < 98)
	{
	putchar(',');
	putchar(32);
	}
	}
putchar('\n');
return (0);
}
