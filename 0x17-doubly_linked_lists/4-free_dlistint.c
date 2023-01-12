#include "lists.h"

/**
 * free_dlistint - function that frees a doubly linked list.
 * @head: the pointer to the head of doubly linked list to free
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
