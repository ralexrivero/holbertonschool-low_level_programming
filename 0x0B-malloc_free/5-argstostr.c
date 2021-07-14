#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 **argstostr - concatenates all the arguments of your program
 * Description: using malloc
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return:  a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *s, *t;
	int x, y, z;

	if (ac == 0 || av == NULL)
		return (0);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++, z++)
			;
		z++;
	}
	z++;

	s = malloc(z * sizeof(char));

	if (s == NULL)
		return (0);

	t = s;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			*s = av[x][y];
			s++;
		}
		*s = '\n';
		s++;
	}
	return (t);
}

/**
 * _length - Length of a string
 * @str: String
 *
 * Return: Length
 **/

int _length(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _length(str + 1));
}
