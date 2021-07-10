#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for
 * an amount of money
 * Description: cents is the amount of cents you need to give back
 * Return: if the number of arguments passed to your program is not exactly 1,
 * print Error, followed by a new line, and return 1
 * use atoi to parse the parameter passed to your program
 * if number passed is negative, print 0, followed by a new line
 * unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 * @argc: count arguments
 * @argv: argument vector
 */

int main(int argc, char *argv[])
{
	int num, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}

	printf("%d\n", result);
	return (0);
}
