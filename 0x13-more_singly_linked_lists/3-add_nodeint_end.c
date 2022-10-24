#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - function that adds a new node at the end of listint_t list
 * @head: pointer to head
 * @n: value to add
 * Return: adress of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	temp = malloc(sizeof(listint_t));

	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (!*head)
		*head = temp;
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (*head);
}
