#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that frees a list_t list
 * @head: pointer to list_t list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
