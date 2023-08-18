#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end
 * of a doubly linked list
 * @head: a double pointer head of doublylinked list(beginning point)
 * @n: data that the list should contain
 * Return: address of newnode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* create a new node and a temporary node */
	dlistint_t *endnode, *tempnode;

	/* allocate memory to the new node */
	endnode = malloc(sizeof(dlistint_t));

	/* if new node is empty return NULL */
	if (endnode == NULL)
	{
		return (NULL);
	}

	/* newnode points to the struct data and the value 'n'is stored in it */
	endnode->n = n;
	/* newnode points to the next which is NULL because it is at the end */
	endnode->next = NULL;

	/**
	 * if head is null, the list is empty and the new node becomes head
	 * and pointed to previous node becomes null also
	 */
	if (*head == NULL)
	{
		endnode->prev = NULL;
		*head = endnode;
	}
	else
	{
		tempnode = *head;
		while (tempnode->next != NULL)
		{
			tempnode = tempnode->next;
		}
		tempnode->next = endnode;
		endnode->prev = tempnode;
	}

	return (endnode);
}
