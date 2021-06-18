#include <stdio.h>
/**
*main - Prints a specified string
*
 *Description: with proper grammar, but the outcome is a piece of art,
 *Return: 0 if the programming ran to completion
 */
int main(void)
{
	char varChr_char;
	int varInt_int;
	long int varLng_lngi;
	long long int varLLI_lli;
	float varFlt_float;

	printf("Size of a char: %zu byte(s)\n", sizeof(varChr_char));
	printf("Size of an int: %zu byte(s)\n", sizeof(varInt_int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(varLng_lngi));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(varLLI_lli));
	printf("Size of a float: %zu byte(s)\n", sizeof(varFlt_float));
	return (0);
}
