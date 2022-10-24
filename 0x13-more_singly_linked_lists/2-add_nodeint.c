#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - function that adds a new node at the beginning of linked list
 * @head: pointer to head
 * @n: number to add
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *ptr = malloc(sizeof(struct listint_s));

	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (*head);
}
