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
	unsigned int data;
	listint_t *_temp;
	listint_t *currentnode;

	_temp = *head;

	if (index != 0)
	{
		for (data = 0; data < index - 1 && _temp != NULL; data++)
		{
			_temp = _temp->next;
		}
	}

	if (_temp == NULL || (_temp->next == NULL && index != 0))
	{
		return (-1);
	}

	currentnode = _temp->next;

	if (index != 0)
	{
		_temp->next = currentnode->next;
		free(currentnode);
	}
	else
	{
		free(_temp);
		*head = currentnode;
	}

	return (1);
}
