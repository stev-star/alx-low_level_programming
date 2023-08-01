#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *prevnode;

	if (head == NULL || *head == NULL)
		return (NULL);

	prevnode = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = ahead;
	}

	(*head)->next = prevnode;

	return (*head);
}
