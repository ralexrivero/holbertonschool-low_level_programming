#include <stdio.h>

/**
 * main - prints the name of the file this program was compiled from
 * Description: print and followed by a new line
 */
#define SOURCE __FILE__

int main(void)
{
	puts(SOURCE);
	return (0);
}
