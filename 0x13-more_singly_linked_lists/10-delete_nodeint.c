#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index of a listint_t linked list.
 * @head: starting point of linkedlist
 * @index: is the index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 for succes, -1 for fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int data = 0;
	listint_t *_temp = *head;
	listint_t *currentnode = NULL;

	if (!*(head))
	{
		return (-1);
	}
	if (index == 0)
	{
		_temp = (*head)->next;
		free(*head);
		*head = _temp;
		return (1);
	}

	for (data = 0; (data < index) - 1; data++)
	{
		if ((!_temp) || !(_temp->next))
		{
			return (-1);
		}
		_temp = _temp->next;
	}

	currentnode = _temp->next;
	_temp->next = currentnode->next;
	free(currentnode);

	return (1);
}
