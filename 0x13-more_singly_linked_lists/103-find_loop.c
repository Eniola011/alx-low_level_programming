#include "lists.h"

/**
 * find_listint_loop -  a function that finds the loop in a linkedlist.
 * @head: starting point of linkedlist
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node;
	listint_t *prevnode;

	node = head;
	prevnode = head;
	while (head && node && node->next)
	{
		head = head->next;
		node = node->next->next;

		if (head == node)
		{
			head = prevnode;
			prevnode =  node;
			while (1)
			{
				node = prevnode;
				while (node->next != head && node->next != prevnode)
				{
					node = node->next;
				}
				if (node->next == head)
				{
					break;
				}

				head = head->next;
			}
			return (node->next);
		}
	}

	return (NULL);
}
