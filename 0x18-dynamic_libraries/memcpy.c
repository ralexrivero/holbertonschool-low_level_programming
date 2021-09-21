#include <stdio.h>

/**
 * _memcpy - copies area memory
 * Description: copies n bytes from area src to memory area dest
 * Return: a pointer to dest
 * @dest: destiny area
 * @src: source area
 * @n: bytes to be copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
	dest[i] = src[i];
	i++;
}
return (dest);
}
