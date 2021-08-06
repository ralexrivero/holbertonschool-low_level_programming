#include "main.h"

/**
 * get_bit - Get the bit of a given index
 * @n: number to evaluate
 * @index: the position of the bit
 * Return: the value of a given index or -1 if fails
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8))
return (-1);
return ((n >> index) & 1);
}
