
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
	srand(time(0));
        n = rand() - RAND_MAX / 2;

	int n;
	if (n > 5)
	printf("%i Last digit of ", n, "is", n % 10 , "and is greater than 5\n");
	else if (n == 0)
	printf("%i Last digit of ", n, "is", n % 10, "and is 0\n");
	else
	printf("%i Last digit of ", n, "is", n % 10, "and is less than 6 and not 0\n")
	return (0);
}
