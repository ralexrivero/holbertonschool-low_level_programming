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
	int i = 0, j, length = 0, l, k;
	char *string;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
		}
		length  +=  j + 1;
	}
	string = malloc(sizeof(char) * (length + 1));

	if (string == NULL)
	{
		return (NULL);
	}
	length = 0;
	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l] != '\0'; l++)
		{
			*(string + length) = av[k][l];
			length++;
		}
		*(string + length) = '\n';
		length++;
	}

	return(string);
}
