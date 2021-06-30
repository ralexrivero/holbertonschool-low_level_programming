#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random pass
 * Description: passwords for the program
 * Return: 0 when success
 */
int main(void)
{
int psw[100], i, n, sum;

sum = 0;	
srand(time(NULL));
for (i = 0; i < 100; i++)
{
psw[i] = rand() % 78;
sum += (psw[i] + '0');
putchar(psw[i] + '0');
if ((2772 - sum) - '0' < 78)
{
n = 2772 - sum - '0';
sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
