#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  * mod_01 - module 1
  * @p: argv[1]
  * @pl: length of argv[1]
  * @flag: determine if first or second
  * Return: element of key array.
  */
int mod_01(char *p, int pl, char flag)
{
	int res, i;

	res = flag == 0 ? 0 : 1;
	for (i = 0; i < pl; i++)
	{
		if (flag == 0)
			res += p[i];
		else
			res *= p[i];
	}
	return ((res ^ (flag == 0 ? 0x4F : 0x55)) & 0x3F);
}
/**
  * mod_02 - module 2
  * @p: argv[1]
  * @pl: length of argv[1]
  * Return: element of array
  */
int mod_02(char *p, int pl)
{
	int i;
	int res = p[0];

	for (i = 0; i < pl; i++)
		if (p[i] > res)
			res = p[i];
	srand(res ^ 0xE);
	return (rand() & 0x3F);
}
/**
  * mod_03 - module 3
  * @p: argv[1]
  * @pl: length of argv[1]
  * Return: array element
  */
int mod_03(char *p, int pl)
{
	int i, res = 0;

	for (i = 0; i < pl; i++)
		res += p[i] * p[i];
	return ((res ^ 0xEF) & 0x3F);
}
/**
  * mod_04 - mod 4
  * @p: argv[1]
  * Return: array element
  */
int mod_04(char p)
{
	int i, res = 0;

	for (i = 0; i < p; i++)
		res = rand();
	return ((res ^ 0xE5) & 0x3F);
}
/**
  * main - generates a pass
  * @ac: argument count
  * @av: argument vectors
  * Return: 0 when success
  */
int main(int ac, char *av[])
{
	char *p;
	char h[] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char key[7];
	int pl, res;

	if (ac != 2)
		return (-1);
	p = av[1];
	pl = strlen(p);
	res = ((pl ^ 0x3B) & 0x3F);
	key[0] = h[res];
	res = mod_01(p, pl, 0);
	key[1] = h[res];
	res = mod_01(p, pl, 1);
	key[2] = h[res];
	res = mod_02(p, pl);
	key[3] = h[res];
	res = mod_03(p, pl);
	key[4] = h[res];
	res = mod_04(p[0]);
	key[5] = h[res];
	key[6] = '\0';
	printf("%s\n", key);
	return (0);
}
