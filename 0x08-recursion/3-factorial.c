#include "holberton.h"

/**
 * factorial - print factorial
 * Description: of a integer
 * @n: the integer
 * Return: -1 when negative, the addition of factorial * factorial -1
 */

int factorial(int n)
{
if (n < 0)
	return (-1);
if (n == 0)
{
	return (1);
}
	return (n * factorial(n - 1));
}
