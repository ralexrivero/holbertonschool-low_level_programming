#include <stdio.h>

/**
 * _strstr - finds first occurrence of the substring
 * Description: not compare null bytes
 * Return: a pointer to the beginning of the located substring
 * or NULL if not found
 * @haystack: the string to evaluate
 * @needle: the string to match in haystack
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (!needle[j])
return (&haystack[i]);
}
return (NULL);
}
