#include <stdio.h>
/**
*main - print alphabet
*
 *Description: display alphabet
 *Return: 0 if the programming ran to completion
 */

int main(void)
{
int i;

for (i = '0' ; i <= '9' ; i++)
{
	putchar(i);
	if (i != '9')
		{
		putchar(',');
		putchar(' ');
		}
}
putchar('\n');
return (0);
}
