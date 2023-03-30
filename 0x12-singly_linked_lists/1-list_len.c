#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Count the items of a list_t list.
 * @h: Pointer 2  list.
 * Return: Number of items.
 */
size_t list_len(const list_t *h)
{
	size_t items = 0;

	while (h)
	{
		items++;
		h = h->next;
	}
	return (items);
}
