#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: string of name
 * Description: entry point to function
 * Return: 0 if name or f is null, otherwise pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
    if(name == NULL || f == NULL)
    return (0);
    f(name);
}
