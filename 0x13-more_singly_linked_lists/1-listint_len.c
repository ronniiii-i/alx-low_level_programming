#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pionter to head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
