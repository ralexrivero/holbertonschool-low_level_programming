#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a copy of the string given as a parameter
 * Description: using malloc
 * @str: the string to copy
 * Return: a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *p = NULL;
	unsigned int i = 0, length = 0;

	if (str)
	{
		for (length = 0; *(str + length) != '\0'; length++)
		{
		/* size of string */
		}
		p = malloc(sizeof(char) * length + 1);
		if (p)
		{
			for (i = 0; i < length; i++)
			{
				p[i] = str[i];
			}
			p[length] = '\0';
		}
	}
	return (p);
}
