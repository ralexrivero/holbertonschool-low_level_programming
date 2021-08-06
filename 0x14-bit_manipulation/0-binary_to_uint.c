#include "main.h"
/**
 * binary_to_uint - binary to unsigned int
 * @b: pointer to string of 0 y 1
 * Return: converted number
 * 0 if there are other chars than 0 y 1
 * 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int varUInt_uint = 0;

if (!b)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
varUInt_uint = 2 * varUInt_uint + (b[i] - '0');
}
return (varUInt_uint);
}
