#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 * @argc: num of arg
 * @argv: array of args
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
int b, i;
char *array;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
b = atoi(argv[1]);
if (b < 0)
{
printf("Error\n");
exit(2);
}
array = (char *)main;
for (i = 0; i < b; i++)
{
if (i == b - 1)
{
printf("%02hhx\n", array[i]);
break;
}
printf("%02hhx ", array[i]);
}
return (0);
}
