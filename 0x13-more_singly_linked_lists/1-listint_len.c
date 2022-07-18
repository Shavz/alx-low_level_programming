#include "lists.h"
/**
 * listint_len - length of a list
 * @h: head of a list
 * Return: numbers of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
