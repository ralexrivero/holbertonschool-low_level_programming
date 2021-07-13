#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * create_array - create array of chars
 * Description: initialize with a specific char
 * @size: the size of char
 * @c: the c
 * Return: pointer of the array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *p = NULL;
	unsigned int i = 0;

	if (size > 0)
	{
		p = malloc(sizeof(char) * size);
		if (p)
		{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}
	return (p);
}
