Task 0: Define a new type struct dog with the following elements:
	a. name, type = char *
	b. age, type = float
	c. owner, type = char *
Task 1: Write a function that initialize a variable of type struct dog
Task 2: Write a function that prints a struct dog:
	a. Prototype: void print_dog(struct dog *d);
	b. Format: see example bellow
	c. You are allowed to use the standard library
	d. If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
	e. If d is NULL print nothing.
Task 3: Define a new type dog_t as a new name for the type struct dog.
Task 4: Write a function that creates a new dog:
	a. Prototype: dog_t *new_dog(char *name, float age, char *owner);
	b. You have to store a copy of name and owner
	c. Return NULL if the function fails
Task 5: Write a function that frees dogs.
