#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the multiplication of two numbers
 * Description: assume that the two numbers and the result
 * cand be stored in int
 * Return: 1 and pritn Error if not recive two arguments
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1])* atoi(argv[2]));
	exit (EXIT_SUCCESS);
}
