#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning
 * of a doubly linked list
 * @head: a double pointer head of doublylinked list(beginning point)
 * @n: data that the list should contain
 * Return: address of newnode
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode; /*create the new node variable */

	newnode = malloc(sizeof(dlistint_t)); /* allocates memory to the new node */

	if (newnode == NULL)
	{
		return (NULL);
	}

	/* newnode points to the struct data and the value 'n'is stored in it */
	newnode->n = n;
	/* newnode points to the previous which is NULL since it is at the start */
	newnode->prev = NULL;
	/* newnode points to next and becomes the current head of list */
	newnode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}

	*head = newnode;
	return (newnode);
}
