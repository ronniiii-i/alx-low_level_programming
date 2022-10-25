#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to head of linked list
 * @index: The index of the node to locate
 * Return: value of nth node. NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
