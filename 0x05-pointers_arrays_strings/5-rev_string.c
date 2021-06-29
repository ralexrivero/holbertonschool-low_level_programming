#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - revert string
 * @s: the string to revert
 * Description: swap values
 */

void rev_string(char *s)
{
int len, lenb, i;
char swap;

for (len = 0; s[len] != '\0'; len++)
	;
lenb = len -1;
for (i = 0; i < len / 2; i++)
{
	swap = s[i];
	s[i] = s[lenb];
	s[lenb--] = swap;
}
}
