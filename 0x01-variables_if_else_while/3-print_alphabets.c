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

for (i = 'a' ; i <= 'z' ; i++)
putchar(i);
for (i = 'A' ; i <= 'Z' ; i++)
putchar(i);
putchar('\n');
return (0);
}
