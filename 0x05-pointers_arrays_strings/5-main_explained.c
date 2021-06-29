#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "Holberton";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
    
}

void rev_string(char *s)
{
int len, lenb, i;
char swap;

for (len = 0; s[len] != '\0'; len++)
	;
lenb = len - 1;
for (i = 0; i < len / 2; i++)
{
	swap = s[i];
	printf("%i - %c <==> ", i, swap);
	s[i] = s[lenb];
	printf("%i - %c\n", lenb, s[lenb]);
	s[lenb--] = swap;
}
}
