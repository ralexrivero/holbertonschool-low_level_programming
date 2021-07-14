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
int i, j, k = 0, l = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
for (j = 0; av[i][j]; j++)
l++;
l += ac + 1;
str = malloc(sizeof(char) * l);
if (!str)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
str[k++] = av[i][j];
str[k++] = '\n';
}
str[k] = '\0';
return (str);
}
