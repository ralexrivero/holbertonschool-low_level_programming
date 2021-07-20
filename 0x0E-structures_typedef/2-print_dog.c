#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print the dog's structure
 * @d: struct to print
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %c\nAge: %lu\nOwner: %s\n", d->name, d->owner, d->age);
}
