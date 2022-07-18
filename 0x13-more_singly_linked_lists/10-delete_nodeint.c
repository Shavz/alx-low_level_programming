#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node from a list at some given index
 * @head: head of a list
 * @index: index of the node to be deleted
 * Return: 1 if success, -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *savepoin, *headcopy;
	unsigned int i;

	headcopy = *head;
	if (headcopy != NULL && index != 0)
	{
		for (i = 0; i < index && headcopy != NULL; i++)
		{
			savepoin = headcopy;
			headcopy = headcopy->next;
		}
		if (headcopy != NULL)
		{
			savepoin->next = headcopy->next;
			free(headcopy);
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	if (headcopy != NULL && index == 0)
	{
		savepoin = headcopy->next;
		free(headcopy);
		*head = savepoin;
		return (1);
	}
	else
	{
		return (-1);
	}
}
