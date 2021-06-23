#include "holberton.h"

/**
 *print_last_digit - print the last digit of a number
 *@n: number to evaluate
 *Description: print the last digit of number
 *Return: 0 when ran complete
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
	return (-n % 10);
	}
	else
	{
	return (n % 10);
}
}
