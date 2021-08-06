#include "main.h"

/**
 * print_binary - convert decimal to binary
 * Description: from uli to char
 * @n: decimal to convert
 */

void print_binary(unsigned long int n)
{

	char varChr_binary;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	varChr_binary = (n & 1) ? '1' : '0';
	_putchar(varChr_binary);
}
