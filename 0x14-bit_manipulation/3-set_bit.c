#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to modify a bit
 * @index: the position of the bit
 * Return: 1 if success, -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
	return (-1);
	*n = ((1UL << index) | *n);
/*	*n |= 1 << index; */
	return (1);
}
