#include <stdio.h>

/**
 * _strcat - concatenate strings
 * Description: two strings
 * @dest: final string
 * @src: initial string
 * Return: the final and concatenated string
 */

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

while (dest[i] != '\0')
	i++;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
