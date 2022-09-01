#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node of linked list
 * @head: Head of linked list
 * @index: Node index to return
 * Return: Node by index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c;

	for (c = 0; c < index && head->next; c++)
	{
		head = head->next;
	}
	if (c < index)
		return (NULL);
	return (head);
}
