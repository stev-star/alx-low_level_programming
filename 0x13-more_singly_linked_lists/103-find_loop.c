#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (slow  == hare)
		{
			slow = head;

			while (slow != hare)
			{
				slow = slow->next;
				hare = hare->next;
			}

			return (slow);
		}

		slow = slow->next;
		hare = (hare->next)->next;
	}

	return (NULL);
}
