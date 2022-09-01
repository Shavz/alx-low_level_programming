#include "lists.h"

/**
 * print_dlistint - Prints all the elements of list
 * @h: Head of the list
 * Return: The number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;
	size_t len = 0;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
