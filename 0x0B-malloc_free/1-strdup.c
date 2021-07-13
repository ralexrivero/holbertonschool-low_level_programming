#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


char *_strdup(char *str)
{
	char *p = NULL;
	int i = 0;
	int length = 0;
	
	for(length = 0; *(str+length) != '\0'; length++)
	{
		/* size of string */
	}
	p = malloc(sizeof(char) * length);
	if(p)
	{
		for(i = 0; i < length; i++)
		{
			p[i] - str[i]
		}
	}
}
