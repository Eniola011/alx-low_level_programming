#include "lists.h"

/**
 * free_dlistint - a function that frees a doubly
 * linked list
 * @head: head of doublylinked list(beginning point)
 * Return: no value
 */
void free_dlistint(dlistint_t *head)
{
	/* tempnode keeps track of nodes being freed up */
	dlistint_t *tempnode;

	while (head != NULL)
	{
		/* start from the beginning */
		tempnode = head;
		/* head moves to the next node */
		head = head->next;
		/* node is freed and moves to the beginning again */
		free(tempnode);
	}
}
