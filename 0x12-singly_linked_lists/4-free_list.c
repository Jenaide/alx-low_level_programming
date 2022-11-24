#include "lists.h"

/**
 * free_list - function that frees all elements
 * @head: pointer
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *min;

	min = head;
	while (head)
	{
		min = head;
		head = head->next;
		free(min->str);
		free(min);
	}
	free(head);
}
