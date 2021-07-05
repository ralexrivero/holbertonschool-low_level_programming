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
	while (*s++ != '\0')
	{
	if (*s == c)
	{
		return (s);
	}
	}	
	return ('\0');
}
