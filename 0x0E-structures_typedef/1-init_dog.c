#include "dog.h"
#include <stdio.h>

/**
 *init_dog - initialize struct dog
 *@d: struct dog
 *@name: name of dog
 *@age: age of dog
 *@owner: a xter in dog
 *Return: no value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
