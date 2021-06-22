#include "holberton.h"

/*
 * Prints "HOlberton" folowed by a new line
 * Main: _putchar prototype
 * Description: practicing functions an user libraries
 * Return: when succesfully execute the function
 */

int main(void)
{
char char_str[9] = "Holberton";
int i;

for (i = 0; i <= 9; i++)
{
	_putchar(char_str[i]);
}
	return (0);
}
