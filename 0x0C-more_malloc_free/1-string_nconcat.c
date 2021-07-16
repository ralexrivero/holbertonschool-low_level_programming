#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - the returned pointer shall point to a newly allocated
 * space in memory, which contains s1, followe by the firs n bytes of s2,
 * and null terminated
 * Description: if n is greater or equal to the length of s2 then
 * use the entire string s2
 * Return: If NULL is passed, treat it as an empty string
 * @s1: first string
 * @s2: second string
 * @n: size
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;
	if (n < length2)
		s = malloc(sizeof(char) * (length1 + n + 1));
	else
		s = malloc(sizeof(char) * (length1 + length2 + 1));
	if (!s)
		return (NULL);
	while (i < length1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < length2 && i < (length1 + n))
		s[i++] = s2[j++];
	while (n >= length2 && i < (length1 + length2))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
