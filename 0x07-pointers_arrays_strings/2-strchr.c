#include "holberton.h"

/**
 * _strch - locates a character in a string
 * Description: the first occurrence of the character
 * Return: a pointer to the match or NULL if not found
 * @s: string to be searched
 * @c: character to search
 */

char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != '\0')
{
	if (s[i] == c)
	{
		return (s + i);
	}
	i++;
}
return ('\0');
}
