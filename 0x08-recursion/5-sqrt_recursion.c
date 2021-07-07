#include "holberton.h"

/**
 * _sqrt_recursion - square root
 * Description: only natural numbers
 * @n: the number to evaluate
 * Return: -1 if not natual
 */

int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
return (_sqrt_recursion_i(n, 0));
}

/**
 * _sqrt_recursion_i - square for natural
 * Description: recursion for square
 * @n: number
 * @i: iterator
 * Return: the natural square
 */
int _sqrt_recursion_i(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion_i(n, i + 1));
}
