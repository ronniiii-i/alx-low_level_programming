#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: pointer to head
 * @str: pointer to node data
 * Return: address of new element. NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	struct list_s *ptr = malloc(sizeof(struct list_s));
	char *s;
	int len = 0;

	if (!ptr)
		return (NULL);

	s = strdup(str);

	if (!s)
	{
		free(ptr);
		return (NULL);
	}

	while (str[len])
		len++;

	ptr->str = s;
	ptr->len = len;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
