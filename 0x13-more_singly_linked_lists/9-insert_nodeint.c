#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 * @head: starting point of linkedlist.
 * @idx:  is the index of the list where the new node
 * should be added. Index starts at 0
 * @n: integer
 * Return: the address of the new node
 * return NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int data;
	listint_t *newnode;
	listint_t *_temp;

	_temp = *head;

	if (idx != 0)
	{
		for (data = 0; (data < idx - 1) && (_temp != NULL); data++)
		{
			_temp = _temp->next;
		}
	}
	if ((_temp == NULL) && (idx != 0))
	{
		return (NULL);
	}

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = _temp->next;
		_temp->next = newnode;
	}
	return (newnode);
}
