#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: string of name
 * @f: function pointer
 * Description: entry point to function
 * Return: 0 if name or f is null, otherwise pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
