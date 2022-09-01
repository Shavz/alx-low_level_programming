#include "lists.h"

/**
 * sum_dlistint - Sum of elements in list
 * @head: Head of the list
 * Return: The sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
