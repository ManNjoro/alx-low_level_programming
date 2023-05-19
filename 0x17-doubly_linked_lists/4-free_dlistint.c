#include "lists.h"

/**
 * free_dlistint - free list
 * @head: ptr to the beginning of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head

	while (head != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
