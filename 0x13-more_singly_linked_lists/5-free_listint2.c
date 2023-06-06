#include "lists.h"

/**
 * free_listint2 - releases linkedlist
 * The function sets the head to NULL
 * @head: starting point of linked list
 * Return: no value.
 */
void free_listint2(listint_t **head)
{
	listint_t *_temp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		_temp = *head;
		*head = (*head)->next;
		free(_temp);
	}

	*head = NULL;
}
