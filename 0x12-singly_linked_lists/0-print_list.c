#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: linked  list.
 *
 * Return: The number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	size_t y = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		y++;
		h = h->next;
	}

	return (y);
}
