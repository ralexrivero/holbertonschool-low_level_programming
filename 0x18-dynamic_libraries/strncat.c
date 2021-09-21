#include <stdio.h>

/**
 * _strncat - concatenate strings
 * Description: concatenate two strings within n bytes long
 * @dest: final string
 * @src: initial string
 * @n: amount of bytes to concatenate
 * Return: the final string with the n bytes
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (dest[i] != '\0')
	i++;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
