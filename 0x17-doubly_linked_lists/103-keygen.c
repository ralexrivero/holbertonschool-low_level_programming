#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - keygen for crackme5.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * keygen should print a valid key for the username
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argc;
	char pwd[7], *crypt;
	int len = strlen(argv[1]), i, tmp;

	crypt = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (len ^ 59) & 63;
	pwd[0] = crypt[tmp];
	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += argv[1][i];
	pwd[1] = crypt[(tmp ^ 79) & 63];
	tmp = 1;
	for (i = 0; i < len; i++)
		tmp *= argv[1][i];
	pwd[2] = crypt[(tmp ^ 85) & 63];
	tmp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > tmp)
			tmp = argv[1][i];
	}
	srand(tmp ^ 14);
	pwd[3] = crypt[rand() & 63];
	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += (argv[1][i] * argv[1][i]);
	pwd[4] = crypt[(tmp ^ 239) & 63];
	for (i = 0; i < argv[1][0]; i++)
		tmp = rand();
	pwd[5] = crypt[(tmp ^ 229) & 63];
	pwd[6] = '\0';
	printf("%s", pwd);
	return (0);
}
