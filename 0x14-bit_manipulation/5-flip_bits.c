#include "main.h"
/**
* flip_bits - c number of bits needed to flip to get from one number to other
* @n: number to be fliped to
* @m: number to be fliped to
* Return: number of bits needed to flip
**/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int varUIn_qnt;
	unsigned long int varUIn_num;

	varUIn_qnt = 0;
	for (varUIn_num = n ^ m; varUIn_num != 0; varUIn_num = varUIn_num >> 1)
	{
	varUIn_qnt += (varUIn_num & 1);
	}
	return (varUIn_qnt);
}
