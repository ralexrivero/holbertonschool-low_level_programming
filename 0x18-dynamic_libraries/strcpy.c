#include <stdio.h>

/**
 * _strcpy - copy the string
 * Description: the string pointed to a buffer
 * @dest: the buffer in where copy the string
 * @src: the string to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int l, i;

l = 0;
while (src[l] != '\0')
{
l++;
}
for (i = 0; i <= l; i++)
{
	dest[i] = src[i];
}
return (dest);
}
