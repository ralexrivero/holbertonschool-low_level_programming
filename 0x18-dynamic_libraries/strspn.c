#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * Description: get the length of s only bytes from accept
 * Return: number of bytes in the initial segment7
 * @s: segment to evaluate
 * @accept: bytes to evaluate
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j, k = 0, exit;

	for (i = 0; s[i] != '\0'; i++)
	{
		exit = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				exit = 1;
			}
		}
		if (exit == 0)
		{
			return (k);
		}
}
return (0);
}
