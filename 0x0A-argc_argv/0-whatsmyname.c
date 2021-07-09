#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name of program
 * Description: if rename the program, it will print the name
 * without compiling
 * Return: the name, EXIT_SUCCESS
 * @argc: count
 * @argv: string
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
exit(EXIT_SUCCESS);
}
