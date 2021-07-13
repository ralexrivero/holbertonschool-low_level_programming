#include <stdlib.h>
#include "holberton.h"

/**
 * count_word - count words in string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flg, c, w;

	flg = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flg = 0;
		else if (flg == 0)
		{
			flg = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - splits a string into words
 * @str: string to split into words
 *
 * Return: 0 pointer to an array of strings
 * or 1 NULL 
 */
char **strtow(char *str)
{
	char **neo, *tmp;
	int i, k = 0, len = 0, words, c = 0, init, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	neo = (char **) malloc(sizeof(char *) * (words + 1));
	if (neo == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (init < end)
					*tmp++ = str[init++];
				*tmp = '\0';
				neo[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			init = i;
	}

	neo[k] = NULL;

	return (neo);
}
