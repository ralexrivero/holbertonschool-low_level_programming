#include "lists.h"

/**
 * hare_tortoise - prints text before execute main
 */

void __attribute__((constructor)) hare_tortoise()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
