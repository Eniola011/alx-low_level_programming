#ifndef _DOG_H
#define _DOG_H

/**
 *dog_t - typedef struct dog
 */
typedef struct dog dog_t;

/**
 *struct dog - info on a dog
 *@name: name of dog
 *@age: age of dog
 *@owner: who owns the dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
