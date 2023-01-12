#include "lists.h"

/**
 * sum_dlistint - function that su,s the element in the list.
 * @head: the pointer to the head of the list.
 * Return: the sum of all elements n the list or NULL
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
