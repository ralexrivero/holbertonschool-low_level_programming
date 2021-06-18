
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - get the las digit
*
 *Description: random int and take the last digit
 *Return: 0 if the programming ran to completion
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
