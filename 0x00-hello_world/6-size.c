#include <stdio.h>
/**
*main - Prints a specified string
*
 *Description: with proper grammar, but the outcome is a piece of art,
 *Return: 0 if the programming ran to completion
 */
int main()
{
	char varChr_char;
	int varInt_int;
	long int varLng_lngi;
	long long int varLLI_lli;
	float varFlt_float;

	printf("Size of a char: %zu byte(s)\n", sizeof(varChr_char));
	printf("Size of a int: %zu byte(s)\n", sizeof(varInt_int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(varLng_lngi));
	printf("Size of a log long int: %zu byte(s)\n", sizeof(varLLI_lli));
	printf("Size of a float: %zu byte(s)\n", sizeof(varFlt_float));
	return (0);
}


/* 
* Size of an int: 4 byte(s)
* Size of a long int: 4 byte(s)
* Size of a long long int: 8 byte(s)
* Size of a float: 4 byte(s)
*/
