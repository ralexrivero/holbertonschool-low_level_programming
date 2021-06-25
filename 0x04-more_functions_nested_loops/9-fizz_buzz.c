#include <stdio.h>

/**
 * main - Fizz-Buzz test
 * Description: print numbers and text
 * Return: zero when ran completely
 */

int main(void)
{
int c;

for (c = 1; c <= 99; c++)
{
{
	if ((c % 3) == 0 && (c % 5) == 0)
	{
		printf("FizzBuzz ");
	}
	else if ((c % 3) == 0)
	{
		printf("Fizz ");
	}
	else if ((c % 5) == 0)
	{
	printf("Buzz ");
	}
	else
	{
	printf("%i ", c);
	}
}
}
printf("Buzz\n");
}
