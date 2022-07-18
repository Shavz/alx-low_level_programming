#include "lists.h"
/**
 * add_nodeint_end - add node at the end of the list
 * @head: head of a list
 * @n:integer element in node
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *headcopy;

	headcopy = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (headcopy->next != NULL)
		{
			headcopy = headcopy->next;
		}
		new->next = (headcopy)->next;
		(headcopy)->next = new;
	}
	return (*head);
}
