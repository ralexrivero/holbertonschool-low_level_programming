#include "holberton.h"

/**
 * is_prime_number - evaluate a number
 * Description: if is prime number
 * Return: 1 if primer, otherwise 0
 * @n: the number
 */

int is_prime_number(int n)
{
if (n <= 1)
	return (0);
return (_prime(n, n - 1));
}

/**
 * _prime - recursive prime
 * Description: recusive prime calculation
 * Return: when prime 1 otherwise 0
 * @n: the number
 * @i: the iterator
 */

int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (i > 0 && n % i == 0)
		return (0);
	return (_prime(n, i - 1));
}
