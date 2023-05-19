#include "lists.h"

/**
 * add_dnodeint - inserts node at the beginning
 * @head: pointer to a pointer
 * @n: data to enter
 * Return: memory address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->prev = NULL;

	if (new_node == NULL)
		return (NULL);

	if (*head != NULL)
		(*head)->prev = new_node;

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
