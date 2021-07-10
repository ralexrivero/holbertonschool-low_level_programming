#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name of program
 * Description: if rename the program, it will print the name
 * without compiling
 * Return: the name, EXIT_SUCCESS
 * @argc: argument count
 * @argv: argument vector
 */

int main(int argc, char *argv[])
{
if (argc > 0)
{
	printf("%s\n", argv[0]);
}
exit(EXIT_SUCCESS);
}
