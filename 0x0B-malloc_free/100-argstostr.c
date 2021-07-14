#include "holberton.h"
#include <stdlib.h>

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
	char *s;
	int sum;
	int i, j, k;

	sum = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			sum += 1;
		sum += 1;
	}
	sum += 1;
	s = malloc(sum * sizeof(char));
	k = 0;
	for (i = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			s[k] = av[i][j];
		s[k] = '\n';
		k++;
	}
	return (s);
}
