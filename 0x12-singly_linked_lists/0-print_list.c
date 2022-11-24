#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints a linked list
 * @h: pointer 
 * Return: nodes in list
 */
size_t print_list(const list_t *h)
{
	unsigned int nodes = o;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
