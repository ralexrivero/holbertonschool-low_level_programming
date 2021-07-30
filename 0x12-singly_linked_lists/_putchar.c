#include <unistd.h>

/**
 * _putchar - writes the character c to standard output
 * @c: character to print
 * Return: 1 on success
 * on error, -1, and errno is set appropiately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
