#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - print natural numbers
 * Description: from n to 98
 * @n: initial number
 * Return: when successfully
 */

void print_to_98(int n)
{

	int i, j;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
			printf("98\n");
		}
	else if (n > 98)
	{
		for (j = n; j > 98; j--)
		{
			printf("%d, ", j);
		}
			printf("98\n");
		}
}
