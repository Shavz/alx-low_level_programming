#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a linked list
 * @h: The head of the list
 * Return: Number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	int i = 0;

	for (i = 0; h; i++)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
