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
int lt[3][5] = {{'a', 'e', 'o', 't', 'l'},
                {'A', 'E', 'O', 'T', 'L'},
                {'4', '3', '0', '7', '1'},
                };
i = 0, j = 0;
 
for (; s[i] != '\0'; i++)
    {
    for (; j <= 4; j++)
        {
        if (s[i] == lt[0][j] && s[i] == lt[1][j])
        s[i] = lt[0][j];
        }
    }
return (s);
}
