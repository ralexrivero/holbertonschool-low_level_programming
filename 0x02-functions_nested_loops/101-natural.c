#include <stdio.h>
 
 /**
 * main - list all natural numbers
 * Description: multiplies of 3 or 5
 * Return: zero when success
 */

int main(void)
{
	unsigned long int mul3, mul5, sum;
	int i;

	mul3 = 0;
	mul5 = 0;
	sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + i;
		} else if ((i % 5) == 0)
		{
			sum5 = sum5 + i;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
