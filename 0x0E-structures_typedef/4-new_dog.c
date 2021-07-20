#include <stdio.h>
#include <stlib.h>
#include "dog.h"

/**
 * _strlen - prototype function
 * Description: return length of a string
 * @s: the string
 * Return: the value
 */

int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
	;
return (i);
}

/**
 * _strcpy - copy the string
 * Description: the string pointed to a buffer
 * @dest: the buffer in where copy the string
 * @src: the string to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int l, i;

l = 0;
while (src[l] != '\0')
{
l++;
}
for (i = 0; i <= l; i++)
{
	dest[i] = src[i];
}
return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lg1, lg2;

	lg1 = _strlen(name);
	lg2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (lg1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (lg2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
