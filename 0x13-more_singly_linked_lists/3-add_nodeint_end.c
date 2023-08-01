#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the
 *                   end of the linked list.
 * @head: A pointer to the address of the
 *        head of the linked list.
 * @value: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int value)
{
	listint_t *newnode, *last;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->value = value;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = newnode;
	}

	return (*head);
}
