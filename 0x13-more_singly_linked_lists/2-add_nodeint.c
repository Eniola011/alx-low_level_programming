#include "lists.h"

/**
 * add_nodeint - adds new node at beginning
 * of linkedlist
 * @head: starting point of linkedlist
 * @n: integer
 * Return: the address of the new element
 * return NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
