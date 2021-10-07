#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * Description: the first occurrence of the character
 * Return: a pointer to the match or NULL if not found
 * @s: string to be searched
 * @c: character to search
 */

char *_strchr(char *s, char c)
{
	int schar;

	while (1)
	{
		schar = *s++;
		if (schar == c)
		{
			return (s - 1);
		}
		if (schar == 0)
		{
			return (NULL);
		}
	}
}
