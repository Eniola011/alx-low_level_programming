#include "lists.h"

/**
 * free_listint - releases linkedlist
 * @head: starting point of linked list
 * Return: no value.
 */
void free_listint(listint_t *head)
{
	listint_t *_temp;

	while (head != NULL)
	{
		_temp = head;
		head = head->next;
		free(_temp);
	}
}
