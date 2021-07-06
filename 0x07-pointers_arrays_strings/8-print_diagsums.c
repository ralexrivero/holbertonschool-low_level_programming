#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - print the sum of two diagonals
 * Description: of a square of integers
 * Return: when ran completelly
 * @a: the matrix
 * @size: the matrix size
 */

void print_diagsums(int *a, int size)
{
int i;
unsigned int s1 = 0, s2 = 0;

for (i = 0; i < size; i++)
{
	s1 += a[(size * i) + i];
	s2 += a[(size * (i + 1)) - (i + 1)];
}
printf("%d, %d\n", s1, s2);
}
