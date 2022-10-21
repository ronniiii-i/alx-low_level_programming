#include "lists.h"
#include <stdio.h>
/**
 * list_len - function that returns the number of elements in list
 * @h: head pointer
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
