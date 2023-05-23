#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new dog characters
 * @name: xter of new dog
 * @age: xter of new dog.
 * @owner: xter of new dog.
 * Return: struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;
	int x, n_name, n_owner;

	ptr_dog = malloc(sizeof(*ptr_dog));
	if (ptr_dog == NULL || !(name) || !(owner))
	{
		free(ptr_dog);
		return (NULL);
	}

	for (n_name = 0; name[n_name]; n_name++)
		;

	for (n_owner = 0; owner[n_owner]; n_owner++)
		;

	ptr_dog->name = malloc(n_name + 1);
	ptr_dog->owner = malloc(n_owner + 1);

	if (!((*ptr_dog).name) || !((*ptr_dog).owner))
	{
		free((*ptr_dog).owner);
		free((*ptr_dog).name);
		free(ptr_dog);
		return (NULL);
	}

	for (x = 0; x < n_name; x++)
		(*ptr_dog).name[x] = name[x];
	(*ptr_dog).name[x] = '\0';

	(*ptr_dog).age = age;

	for (x = 0; x < n_owner; x++)
		(*ptr_dog).owner[x] = owner[x];
	(*ptr_dog).owner[x] = '\0';

	return (ptr_dog);
}
