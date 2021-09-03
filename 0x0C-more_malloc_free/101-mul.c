#include "holberton.h"
/**
 * _strlen - string lenght
 * @str: pointer to character to be measured
 * Return: the string lenght
 */
int _strlen(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
		len++;
	return (len);
}
/**
 * _putser - custom function to print a string of chars in standard error
 * @string: pointer to the string to be printed
 * Return: the string to print
 */

int _putser(char *string)
{
	/* variable to save the length of the string */
	int length = 0;

	length = _strlen(string);
	return (write(2, string, length));
}
/**
 * _print - print array
 * @prod: pointer to array to be printed
 * @len1: lenght of array 1
 * @len2: lenght of array 2
 * Return: the array in the stdo
 */
int _print(int *prod, int len1, int len2)
{
	int i = 0;

for (i = 0; prod[i] == 0 || !prod[i]; i++)
;
if (i >= (len1 + len2))
{
_putchar(prod[len1 + len2 - 1] + '0');
}
else
for (; i <= (len1 + len2 - 1); i++)
{
	_putchar(prod[i] + '0');
}
	_putchar('\n');
	return (0);
}
/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
	int mul = 0, i = 0, j = 0, k = 0, len1 = 0, len2 = 0, *prod;
/* control only two arguments passed */
	if (argc != 3)
	_putser("Error\n"), exit(98);
/* check if the characters are all numbers */
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			_putser("Error\n"), exit(98);
		}
	}
/* obtain lenght of the two strings */
len1 = _strlen(argv[1]);
len2 = _strlen(argv[2]);
/* allocate memory for product */
prod = calloc((len1 + len2), sizeof(int *));
if (prod == NULL)
{
	free(prod);
	_putser("Error\n");
	exit(98);
}
/* multiply arrays */
	for (j = len2 - 1; j >= 0; j--)
	{
		for (k = len1 - 1; k >= 0; k--)
		{
			mul = (argv[2][j] - '0') * (argv[1][k] - '0') + prod[j + k + 1];
			prod[j + k + 1] = mul % 10;
			prod[j + k] += mul / 10;
		}
	}
/* print array */
_print(prod, len1, len2);
	free(prod);
	exit(EXIT_SUCCESS);
}
