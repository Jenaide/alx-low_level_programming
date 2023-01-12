#include "lists.h"

/**
 * get_dnodeint_at_index - function that gets a node at the index
 * @head: the pointer to the head of a list to look through
 * @index: the index of the node to find
 * Return: a pointer to the node if found or otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i++ == index)
			break;
		head = head->next;
	}
	return (head);
}
