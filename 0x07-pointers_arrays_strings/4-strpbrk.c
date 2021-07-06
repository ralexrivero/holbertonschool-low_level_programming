#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - search a string for any set of given bytes
 * Description: locates the first occurrence in the string
 * Return: a pointer to the byte in s that matches one in accept
 * or NULL if no such byte is found
 * @s: the string
 * @accept: the string to match any byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		i++;
		while (accept[j] != '\0')
		{
		j++;
		if (s[i] == accept[j])
		{
			return (s + i);
		}
		}
	}
	return (NULL);
}
