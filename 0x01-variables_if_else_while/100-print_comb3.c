#include <stdio.h>
/**
*main - print alphabet
*
 *Description: display alphabet
 *Return: 0 if the programming ran to completion
 */

int main(void)
{
int i, j;

for (i = '0'; i <= '9'; i ++)
for (j = i + 1; j <= '9'; j ++)
{
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
