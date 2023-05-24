Task 0: Write a function that prints a name.
Task 1: Write a function that executes a function given as a parameter on each element of an array.
	a. Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
	b. where size is the size of the array
	c. and action is a pointer to the function you need to use
Task 2: Write a function that searches for an integer.
	a. Prototype: int int_index(int *array, int size, int (*cmp)(int));
	b. where size is the number of elements in the array array
	c. cmp is a pointer to the function to be used to compare values
	d. int_index returns the index of the first element for which the cmp function does not return 0
	e. If no element matches, return -1
	f. If size <= 0, return -1
Task 3: Write a program that performs simple operations.
	a. You are allowed to use the standard library
	b. Usage: calc num1 operator num2
	c. You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int
	   operator is one of the following:
		** +: addition
		** -: subtraction
		** *: multiplication
		** /: division
		** %: modulo
	d. The program prints the result of the operation, followed by a new line
	e. You can assume that the result of all operations can be stored in an int
	f. if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
	g. if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
	h. if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100
	i. This task requires that you create four different files.
Task 3i --> 3-calc.h: This file should contain all the function prototypes and data structures used by the program. You can use this structure:
Task 3ii --> 3-op_functions.c: This file should contain the 5 following functions (not more):
	a. op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
	b. op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
	c. op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
	d. op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
	e. op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);
Task 3iii --> 3-get_op_func.c: This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function:
	a. Prototype: int (*get_op_func(char *s))(int, int);
	b. where s is the operator passed as argument to the program
	c. This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: get_op_func("+") should return a pointer to the function op_add
	d. You are not allowed to use switch statements
	e. You are not allowed to use for or do ... while loops
	f. You are not allowed to use goto
	g. You are not allowed to use else
	h. You are not allowed to use more than one if statement in your code
	i. You are not allowed to use more than one while loop in your code
	j. If s does not match any of the 5 expected operators (+, -, *, /, %), return NULL
	k. You are only allowed to declare these two variables in this function:
task 3iv --> 3-main.c: This file should contain your main function only.
	a. You are not allowed to code any other function than main in this file
	b. You are not allowed to directly call op_add, op_sub, op_mul, op_div or op_mod from the main function
	c. You have to use atoi to convert arguments to int
	d. You are not allowed to use any kind of loop
	e. You are allowed to use a maximum of 3 if statements
