#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into in
 * Description: print a number, followed by a new line
 * Return: EXIT_SUCCESS
 * @argc: count arguments
 * @argv: argument vector
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
