#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: head of a list
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *savepoin;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			savepoin = head->next;
			free(head);
			head = savepoin;
		}
		free(head);
	}
}
