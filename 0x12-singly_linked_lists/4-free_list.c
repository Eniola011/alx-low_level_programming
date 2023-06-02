#include "lists.h"

/**
 * free_list - releases memory in
 * linked list
 * @head: starting point of a
 * linked list
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
