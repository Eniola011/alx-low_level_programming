#include "lists.h"

/**
 * pop_listint - a function that deletes the head
 * node of linkedlist
 * @head: starting point of linkedlist
 * Return: return 0 if linkedlist is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *_temp;

	if (*head == NULL)
	{
		return (0);
	}
	_temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(_temp);

	return (data);
}
