#include "lists.h"

/**
 * list_len - function that gets the number of nodes 
 * @h: head of linklist
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
