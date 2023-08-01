#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 *               of the linked list.
 * @head: A pointer to the address of the
 *        head of the linked list.
 * @value: The integer to contain the new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int value)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->value = value;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
