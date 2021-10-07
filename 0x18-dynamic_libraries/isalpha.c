#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character
 * Description: isalpha prototype
 * @c: - the character to evaluate
 * Return: - 1 if c is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) | (c >= 65 && c <= 90));
}
