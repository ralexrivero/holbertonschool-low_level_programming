#include "main.h"

/**
 * print_binary - convert decimal to binary
 * Description: from uli to char
 * @n: decimal to convert
 */

void print_binary(unsigned long int n)
{
	unsigned int varUIn_decimal = n;
	char varChr_binary[];
	int i = 0, j = 0;

	if (varUIn_decimal == 0)
	{
		_putchar('0');
		return (0);
	}
	while (varUIn_decimal > 0)
	{
		varChr_binary[i] = varUIn_decimal % 2;
		varUIn_decimal /= 2;
		i++;
	}
	for (i = i -1; i >= 0, i--)
		_putchar(varChr_binary[i]);
}
