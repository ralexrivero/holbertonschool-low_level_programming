#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *str_concat - concatenates two strings.
 *@s1: string 1
 *@s2: string 2
 *Return: if s1 or s1 is NULL. Void string if the function failure NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, lns1 = 0, lns2 = 0;

	while (s1 && s1[lns1])
		lns1++;
	while (s2 && s2[lns2])
		lns2++;

	s3 = malloc(sizeof(char) * (lns1 + lns2 + 1));
	if (s3 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < lns1)
		{
			s3[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (lns1 + lns2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';

	return (s3);
}
