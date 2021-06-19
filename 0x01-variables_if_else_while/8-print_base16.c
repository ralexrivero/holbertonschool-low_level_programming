#include <stdio.h>
/**
*main - print alphabet
*
 *Description: display alphabet
 *Return: 0 if the programming ran to completion
 */

int main(void)
{
char i;

for (i = '0' ; i <= '9' ; i++)
putchar(i);
for (i = 0 ; i <= 5; i++)
putchar('a' + i);
putchar('\n');
return (0);
}
