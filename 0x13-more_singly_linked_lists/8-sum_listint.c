#include "lists.h"

/**
 * sum_listint - function that sums values from listint_t
 * @head: pointer listint_t structure
 * Return: sum of all data from list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
