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
	int i, j, length_s1 = 0, length_s2 = 0;
	char *s3;

	if (*s1 == '\0')
		s1 = "";
	if (*s2 == '\0')
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		length_s1++;
	for (j = 0; s2[j] != '\0'; j++)
		length_s2++;
	s3 = malloc(sizeof(char) * (length_s1 + (length_s2 + 1)));
	if (*s3 == '\0')
		return ('\0');
	i = 0;
	j = 0;
	for (i = 0; i < length_s1; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < length_s2 ; j++)
	{
		s3[i] = s2[j];
		i++;
	}
	return (s3);
}
