#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to change and encode
 * Descripion: encodes usin the leet
 * Return: when done complete
 * string to encode
 */
char *leet(char *s)
{
int lt[5][3] = {{'a', 'A', '4'},
		{'e', 'E', '3'},
		{'o', 'O', '0'},
		{'t', 'T', '7'},
		{'l', 'L', '1'}},
i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j <= 4; j++)
{
if ((s[i] == lt[j][0]) ^ (s[i] == lt[j][1]))
{
s[i] = lt[j][2];
}
}
}
return (s);
}
