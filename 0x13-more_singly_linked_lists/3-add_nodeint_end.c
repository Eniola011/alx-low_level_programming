#include "lists.h"

/**
 * add_nodeint_end - adds newnode at the end
 * of linkedlist
 * @head: starting point of linkedlist
 * @n: integer
 * Return: the address of the new element
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *_temp;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	_temp = *head;

	if (*head == NULL)
	{
		newnode->next = NULL;
		newnode->n = n;
		*head = newnode;

		return (newnode);
	}

	while (_temp->next != NULL)
	{
		_temp = _temp->next;
	}

	newnode->next = NULL;
	newnode->n = n;
	_temp->next = newnode;

	return (newnode);
}
