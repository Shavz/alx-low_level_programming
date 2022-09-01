#include "lists.h"

/**
 * add_dnodeint - Add new node at the beginning of list
 * @head: A pointer to the head of the list
 * @n: Element in list
 * Return: New node or NULL if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->next = *head;
	new->n = n;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
