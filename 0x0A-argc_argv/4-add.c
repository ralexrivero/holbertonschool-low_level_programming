#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers, assume int
 * Description: if no number, print 0 and new line
 * Return: symbols print Error and return 1
 * @argc: count arguments
 * @argv: argument vector
 */


int main(int argc, char *argv[])
{
	int i, tot;
	int j;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}

			tot = tot + atoi(argv[i]);
		}

	}
	else
	{
		printf("0\n");
		return (0);
	}

	printf("%i\n", tot);
	return (0);
}
