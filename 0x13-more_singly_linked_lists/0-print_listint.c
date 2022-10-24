#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		if(!h->n)
			printf("(nil)\n");
		else
			printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
